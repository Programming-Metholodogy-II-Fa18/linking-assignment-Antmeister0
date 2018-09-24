
#include <iostream>
#include "QueueDeclarations.h"
using namespace std;


void menu(int *num) {
    int select = 0;
    cout << "Welcome! Select options below:" << endl;
    cout << "\t1. ADD TO HEAD."
         << "\n\t2. ADD TO TAIL." << "\n\t3. DELETE FROM HEAD." << "\n\t4. DELETE FROM TAIL."
         << "\n\t5. TRAVERSE." << "\n\t6. SHOW ARBITRARY QUEUE." << endl;
    cout << "Selection:\t";
    cin >> select;
    *num = select;
}

int main() {
    ArbitraryQueue<int> B;
    int ele;

    int input = 0;

    while (1) {
        menu(&input);
        switch (input) {
// cases: call functions to perform tasks
            case 1:
                cout << "Enter element to be added: " << endl;
                cin >> ele;
                Node<int> *n1;
                n1 = new Node<int>(ele, 0);
                B.Push(n1);
                cout << "Element added" << endl;
                break;
            case 2:
                cout << "Enter element to be added: " << endl;
                cin >> ele;
                Node<int> *n2;
                n2 = new Node<int>(ele, 0);
                B.Enqueue(n2);
                cout << "Element added";
                break;
            case 3:
                try {
                    cout << "Enter element to be added: " << endl;
                    cin >> ele;
                    Node<int> *n3;
                    n3 = new Node<int>(ele, 0);
                    B.Pop(n3);
                    cout << "Element deleted" << endl;
                }
                catch (const char *msg) {
                    cout<<"Error:"<<msg<<endl;
                }


                break;
            case 4:
                try{
                    B.Dequeue();
                    cout<<"\nElement Deleted\n"<<endl;
                }
                catch (const char* msg)

                {

                    cout<<"Error: "<<msg<<endl;

                }

                break;
            case 5:
                int p;
                cout<<"Enter index to traverse: "<<endl;
                cin>>p;
                try {
                    cout<<"Element at index"<<p<<"is"<<B.traverse(p)<<endl;
                }
                catch (const char* msg)

                {

                    cout<<"Error: "<<msg<<endl;

                }

                break;
            case 6:
                B.DisplayQueue();
                break;

            default:
                break;
        }

    }
}