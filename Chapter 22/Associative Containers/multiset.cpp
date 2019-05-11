#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

typedef multiset<int,less<int>>Ims;
int main(){
    const int SIZE=10;
    int a[ SIZE ] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
    Ims intMultiset;
    ostream_iterator< int > output( cout, " " );
    cout << "There are currently " << intMultiset.count( 15 )<< " values of 15 in the multiset\n";
    intMultiset.insert( 15 ); 
    intMultiset.insert( 15 ); 
    cout << "After inserts, there are " << intMultiset.count( 15 )
    << " values of 15 in the multiset\n\n";
    Ims::const_iterator result;
    result = intMultiset.find( 15 );
    if ( result != intMultiset.end() ) 
    cout << "Found value 15\n";
    result = intMultiset.find( 20 );
    if ( result == intMultiset.end() )
    cout << "Did not find value 20\n";
    intMultiset.insert( a, a + SIZE );
    cout << "\nAfter insert, intMultiset contains:\n";
    copy( intMultiset.begin(), intMultiset.end(), output );
    cout << "\n\nLower bound of 22: "
    << *( intMultiset.lower_bound( 22 ) ) ;
    cout << "\nUpper bound of 22: " << *( intMultiset.upper_bound( 22 ) ) ;
    pair< Ims::const_iterator, Ims::const_iterator > p;
    p = intMultiset.equal_range( 22 );
    cout << "\n\nequal_range of 22:" << "\nLower bound: "
    << *( p.first ) << "\nUpper bound: " << *( p.second ) ;
    cout << endl;
}