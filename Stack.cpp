#include <iostream>
#include "Stack.h"
using namespace std;
using namespace MyStack;
int main(){
    int choice = 1;
    double tmp_data;
    cout<<"Enter the first element of stack:";
    cin>>tmp_data;
    //Создание стека
    Node *top = new_stack(tmp_data);
    while (choice){
        cout<<"1)Push\n2)Pop\n3)Peek\n";
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Push element to the stack:";
            cin>>tmp_data;
            push(&top,tmp_data);
            break;
        case 2:
            cout<<"Poped:"<<pop(&top)<<endl;
            break;
        case 3:
            cout<<"Element on the top:"<<peek(top)<<endl;
            break;
        default:
            cout<<"[!!!]Exiting...[!!!]";
            return 0;
            break;
        }//switch (choice);
    }//while choice   
    return 0;
}