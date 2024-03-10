// Stack using array representation 


#include <iostream>
using namespace std;

class Stack{
    public:
    *arr ;
    int size; 
    int top;


    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

 void push(int element ){
    if((size - top ) > 0)
    {
        top++;
        arr[top] = element;
    }
    else
    {
        cout<<"Stack is Overflow"<<endl;
    }
}

void pop(){
    if(top >= 0)
    {
        top--;
    }
    else
    {
        cout<<"Stack is UnderFlow"<<endl;
    }
}

void display(){
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<"\t";
    }
}
/*
// return top element  
int peek(){
    if(top >= 0){
        return arr[top];   
    }
    else
    {
        cout<<"no such element in stack"<<endl;
    }
}
*/

string isEmpty(){
    if(top == -1)
    {
        return "Yes Stack is empty";
    }
    else
    {
        return "No Stack is not empty";
    }
}
};

int main(){
    // Create stack with size n
    Stack st(3);  //Can store 4 elements , because star from 0;
    st.push(10);
    st.push(20);
    cout<<st.peek()<<endl;   // retrun 40,  return current top element
    st.push(30);
    st.push(40);
    st.display();  // display all elements 

    st.push(50);  // Overflow 
    cout<<st.peek()<<endl;   // retrun 40
   // cout<<st.isEmpty()<<endl; // No Stack is not empty


    //delete elemnts
    st.pop();
    st.pop();
    st.pop();
    st.pop();  // here prefectly deleted 4 elements  
    st.pop();  // Underflow 
    cout<<st.peek(); // no such element present in the stack 
    cout<<st.isEmpty()<<endl;  // yes Stack is empty 
    return 0;
}

