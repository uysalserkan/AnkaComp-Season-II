#ifndef STACH_H
#define STACH_H
template <typename T>
class Stack{
private:
    int size;
    int top;
    T *ptr;
public:
    explicit Stack(int=10);
    ~Stack(){
        delete [] ptr;
    }
    bool push(const T&);
    bool pop(T&);
    bool isEmpty()const{
        return top==-1;
    }
    bool isFull()const{
        return top==size-1;
    }
};
template <typename T>
Stack<T>::Stack(int s):size(s>0?s:10),top(-1),ptr(new T[size]){}
template <typename T>
bool Stack<T>::push(const T &value){
    if(!isFull()){
        ptr[++top]=value;
        return true;
    }
    return false;
}
template <typename T>
bool Stack<T>::pop(T &value){
    if(!isEmpty()){
        value=ptr[top--];
        return true;
    }
    return false;
}

























#endif
