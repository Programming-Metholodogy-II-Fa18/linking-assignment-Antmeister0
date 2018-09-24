//
// Created by Anthony on 9/22/2018.
//

#ifndef STACKSQUEUES_QUEUEDECLARATIONS_H
#define STACKSQUEUES_QUEUEDECLARATIONS_H

#endif //STACKSQUEUES_QUEUEDECLARATIONS_H

#include <stdlib.h>
#include <iostream>
using namespace std;
template <class Q>

class Node{
public:
    Q item;
    Node *next;
    Node(){
        item=0;
        next=0;
    }
    Node(Q a,Node *x=0){
        item=a;
        next = x;
    }
~Node(){
    next=0;
}
};
template <class Q>
class ArbitraryQueue{
public:
    static Node<Q> *front, *back;
ArbitraryQueue(){
    front=back=0;
}

Node<Q> *temp;
        bool (isEmpty(ArbitraryQueue& d)){
            if(d.front==0){
                return true;
            }
            else{

                    temp=front->next;
                    delete front;
                    front=temp;

            }
        }

    void Push(Node<Q> *a){
if(back==0){
    front=back=a;
}
else{
    Node<Q> *temp =front;
    front=a;
    front->next=temp;
}
    }

    void Enqueue(Node<Q> *a){
        if (back==0){
            front=back=a;
        }
        else{
            back->next=a;
            back=a;
        }
    }

    void Pop(Node<Q> *a){
        if(front==0){
            cout<<"Error. Empty list"<<endl;
        }

        front->item=a;
        Node<Q> *temp=front;

        if (front==back){
            front=back=0;
        }
        else{
            front=front->next;
        }
        delete temp;
        cout<<a<<"deleted"<<endl;
    }
    void Dequeue(){
        if (front==0){
            cout<<"Error. List is Empty"<<endl;
        }
        int a;
        back->item=a;

        if (front==back){
            delete front;
            front=back=0;
        }
        else{
            Node < Q >*temp;

            for (temp = front; temp->next != back; temp = temp->next);

            delete back;

            back = temp;

            back->next = 0;
        }
        cout<<a<<"DELETED"<<endl;
    }
    Q traverse(int index){
        Node<Q> *temp=front;
        for (int i = 0; i < index-1 ; i++) {
            if(temp==0){
                cout<<"Index out of bound"<<endl;
                temp->next=temp;
            }
            return temp->item;
        }
    }

    void DisplayQueue(){
Node<Q> *temp = front;
        if (front==0){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            while(temp!=0){
                cout<<temp->item<<"";
                temp=temp->next;
            }
        }
        cout<<endl;
    }
};
