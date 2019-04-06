#ifndef INTEGERSET_H
#define INTEGERSET_H
class IntegerSet{
private:
    int set[10];
public:
    IntegerSet();
    int getIndexValue(int i);
    void insertElement(int i);
    void deleteElement(int i);
    void print();
    bool isEqualTo(IntegerSet k);
    IntegerSet intersectWith(IntegerSet k);
    IntegerSet uniteWith(IntegerSet k);
};
#endif
