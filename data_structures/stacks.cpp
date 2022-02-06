#include <iostream>

using namespace std;

int top = -1;

void push(int stack[],int element, int n){
    if(top == -1){
        top = 0;
        stack[top] = element;
    }
    else{
        if(top == n-1){
            cout<<"Stack is full"<<endl;
        }
        else{
            top += 1;
            stack[top] = element;
        }
    }
}

void show(int stack[]){
    int temp = top;
    if(temp == -1){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack elements are"<<endl;
        for(int i=temp;i>=0;i--){
            cout<<"The element at position "<<i<<" is "<<stack[i]<<endl;
        }
    }
}

void peek(int stack[]){
    if(top == -1){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The element at the top of the stack is "<<stack[top]<<endl;
    }
}

int pop(int stack []){
    if(top == -1){
        return 999;
    }
    else{
        int popped_element = stack[top];
        stack[top] = 0;
        top = top -1;
        return popped_element;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the stack ";
    cin>>n;
    int stack[n];

    int option;
    while(true){
        cout<<"\nWhat do you want to do?"<<endl;
        cout<<"\tTo push the elements in the stack press 1"<<endl;
        cout<<"\tTo pop the elements in the stack press 2"<<endl;
        cout<<"\tTo show the elements in the stack press 3"<<endl;
        cout<<"\tTo peek the stack press the 4"<<endl;
        cout<<"\tTo exit the program press 0"<<endl;
        cout<<"Enter the option of your choice: ";
        cin>>option;
        if(option == 1){
            int ele;
            cout<<"Enter the element to push in the stack: ";
            cin>>ele;
            push(stack,ele,n);
        }
        else if(option == 2){
            int tmp = pop(stack);
            if(tmp == 999){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"The value popped from the stack is "<<tmp<<endl;
            }
        }
        else if(option == 3){
            show(stack);
        }
        else if(option == 4){
            peek(stack);
        }
        else if(option == 0){
            break;
        }
        else{
            cout<<"Wrong option entered!"<<endl;
        }
        
    }
    return 0;
}