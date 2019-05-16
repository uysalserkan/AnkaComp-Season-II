#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector <string> vec1;
    vector <string> vec2={10,"UYSAL"};
    vector <string> vec3={"Aliand"};
    vec1.assign(25,"Serkan");
    int cs=1;
    for(string s:vec1)
     cout <<cs++<<" "<<s<<endl;
     vec1.erase(vec1.begin(),vec1.end());
     vec1=vec2;
     cs=1;
     for(string s:vec1)
      cout <<cs++<<" "<<s<<endl;
      vec1.erase(vec1.begin(),vec1.end());
      vec1=vec3;
      cs=1;
      for(string s:vec1)
       cout <<cs++<<" "<<s<<endl;
    return 0;
}
