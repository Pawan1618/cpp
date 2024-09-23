#include<iostream>
using namespace std;
#define max_size 4
int top=-1;
int arr[max_size];
void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;

    }
    else{
        top--;
    }
}
void push(int value){
    if(top==max_size -1){
        cout<<"stack overflow";
    }
    else{
        top++;
        arr[top]=value;
    }
}
void display(){
    if(top==-1){
        cout<<"stack is empty";
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
}
// int arr[max_size]; 
// int n;
int main(){
    int choice;
    cout<<"1 push";
    cout<<"2 pop ";
    cout<<"3 display";
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
            int element;
            cin>>element;
            push(element);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            cout<<"enter valid choice"<<endl;
        }
    }
    return 0;
}
// /STACKS USING ARRAY/

// #include<iostream>
// using namespace std;

// #define max_size 4
// int top = -1;
// int arr[max_size];

// void push(int element){
//     if(top == max_size - 1){
//         cout << "Stack overflow" << endl;
//     }
//     else{
//         top++;
//         arr[top] = element;
//     }

// }

// void pop(){
//     if(top == -1){
//         cout << "Stack underflow" << endl;
//     }
//     else{
//         top--;
//     }
// }

// void display(){
//     if(top == -1){
//         cout << "Stack is empty" << endl;
//     }
//     else{
//         for(int i=top;i>=0;i--){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// }


// int main(){
//     int choice;
//     cout << "1. push" << endl;
//     cout << "2. pop" << endl;
//     cout << "1. display" << endl;
    
//     while(true){
//         cin >> choice;
//         switch(choice){
//             case 1:
//             int element;
//             cin >> element;
//             push(element);
//             break;

//             case 2:
//             pop();
//             break;

//             case 3:
//             display();
//             break;

//             case 4:
//             exit(0);

//             default : 
//             cout << "Enter valid choice." << endl;
//         }
//     }

//     return 0;

// }



// /--------------------------------------------------------------------------------------------------------/

// /STACK USING LINKED LIST/

// #include<iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// void push(Node*& top , int value){
//     Node* newNode = new Node(value);
//     newNode -> next = top;
//     top = newNode;
// }

// void pop(Node*& top){
//     if(top == nullptr){
//         cout << "Stack underflow." << endl;
//     }
//     else{
//         Node* temp = top;
//         top = top -> next;
//         delete temp;
//     }
// }

// void display(Node* temp){
//     if(temp == nullptr){
//         cout << "Stack is empty." << endl;
//     }
//     while(temp != nullptr){
//         cout << temp->data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* top = nullptr;
//     push(top, 10);
//     push(top, 20);
//     push(top, 30);

//     display(top);

//     pop(top);
//     display(top);
// }