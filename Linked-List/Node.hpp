#ifndef NODE_HPP
#define NODE_HPP

class Node{
private:
    Node *front;
    Node *back;
    int load;
public:
    Node();
    ~Node();
    void Setfront(Node* ufront);
    Node *Getfront();
    void Setback(Node* uback);
    Node *Getback();
    void Setload(int uload);
    int Getload();
};

#endif //NODE_HPP