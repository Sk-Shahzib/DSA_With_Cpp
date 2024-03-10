// Bismillah 

#include<iostream>
using namespace std;

class node{
    public:
    int data; // Global Varible/Instance 
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root ){ //We can also declare (node* currentNode) /*Common pointer type variable  reciving for each Node*/

    int data;  // local variable
    cout<<"Enter data"<<endl;
    cin>>data;
    root = new node(data);

    if(data == -1){  
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left); // Function Recursivly call while data == -1, If got -1 then also got Null After return Null then cursor will go to next statement that is root->right and this also while N == -1 
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main(){
    node* root = NULL;

    // Crating a Tree 
    root = buildTree(root);

    return 0;
}