#include <iostream>
#include "Node.hpp"
#include "List.hpp"
using namespace std;

//Node Functions Start.
Node::Node(){
    front=back=0;
    load=0;
}
Node::~Node(){
    //cout <<"\n\nNode will be terminated..\n";
}
Node* Node::Getfront(){
    return front;
}
Node* Node::Getback(){
    return back;
}
int Node::Getload(){
    return load;
}
void Node::Setfront(Node* ufront){
    front=ufront;
}
void Node::Setback(Node* uback){
    back=uback;
}
void Node::Setload(int uload){
    load=uload;
}

//Node Functions End.

//List Functions Start.
List::List(int size){
    capacity=size;
    length=0;
    front=back=NULL;
}
List::List(){
    capacity=length;
    length=0;
    front=back=NULL;
}
List::~List(){
    Node *temp1=back;
    while(temp1!=0){
        Node *temp2=temp1;
        temp1=temp1->Getback();
        delete temp2;
    }
    back=front=NULL;
}
int List::Insert(int uload){
    if(length==capacity&&capacity!=0){
        cout <<"The list is full, you cannot insert any value to the list..\n";
        return -1;
    }

    Node *current=new Node();
    current->Setload(uload);

    if(length==0){
        current->Setback(NULL);
        current->Setfront(NULL);
        front=back=current;
        length++;
        return 1;
    }
    
    if(current->Getload() < front->Getload()){
        Node *temp=front;
        front=current;
        temp->Setback(front);
        current->Setfront(temp);
        current->Setback(NULL);
        length++;
        return 1;
    }

    if(current->Getload() > front->Getload()){
		Node *temp=back;
		back=current;
		temp->Setfront(back);
		current->Setback(temp);
		current->Setfront(NULL);
		length++;
		return 1;
    }

	Node *ref=front;
	while(current->Getload()>=ref->Getload()&& ref->Getload() < back->Getload()){
		if(current->Getload()==ref->Getload()){
			cout <<current->Getload()<<" already exist on the list..\n";
			return -1;
		}

		Node *f_ref=ref->Getfront();
		if(current->Getload() < f_ref->Getload()){
			ref->Setfront(current);
			current->Setback(ref);
			current->Setfront(f_ref);
			f_ref->Setback(current);
			length++;
			return 1;
		}
		ref=ref->Getfront();
	}
	return 0;
}
int List::Remove(int uload){
	if(length==0){
		cout <<"List is empty, you cannot remove anything in the list..\n";
		return -1;
	}
	Node *current=new Node;
	current->Setload(uload);
	Node *ref=new Node();

	if(length==1){
		current=front=back;
		delete current;
		front = back = NULL;
		length--;
		return 1;
	}

	if(current->Getload() < front->Getload() || current->Getload() > back->Getload()){
		cout <<current->Getload() <<" does not belong the list.\n";
		return 1;
	}

	if(current->Getload()==front->Getload()){
		ref=front;
		front=front->Getfront();
		front->Setback(NULL);
		delete ref;
		length--;
		return 1;
	}

	if(current->Getload()==back->Getload()){
		ref=back;
		back=back->Getback();
		back->Setfront(NULL);
		delete ref;
		length--;
		return 1;
	}

	ref=front;
	while(ref->Getload() < current->Getload()){
		ref=ref->Getfront();
		if(ref->Getload()==current->Getload()){
			Node *temp=ref->Getfront();
			temp->Setback(ref->Getback());
			(ref->Getback())->Setfront(temp);
			ref->Setback(NULL);
			ref->Setfront(NULL);
			delete ref;
			length--;
			return 1;
			}
	}
	return 0;
}
void List::Print(){
    if(length==0)
        cout <<"The list is empty.\n";
    else{
        Node *current=front;
        while(current!=0){
            cout <<current->Getload()<<" ";
            current=current->Getfront();
        }
        cout <<endl;
    }
}
void List::ReversePrint(){
    if(length==0)
        cout <<"The list is empty.\n";
    else{
        Node *current=back;
        while(current!=0){
            cout <<current->Getload()<<" ";
            current=current->Getback();
        }
        cout <<endl;
    }
}