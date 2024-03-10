// Inserting element in array 
#include <iostream>
using namespace std;

int InserElementArr(int arr[], int pos, int n)
{
    int value;
    // Array strat with n-1 to position, if position is 2 then condition part is repeat while found position element. if found i=2 and pos =2 also same then stop terminate the loop. so we can write termination expression is i>pos this condition will be false, why because i and pos both are same numbers .  
    /* 
    1.if you start from i=n IN a.Index wise b.Swquence wise 
    a. then condition i>pos
    b. then condition i>=pos
    and Value enter in Index wise then condition i>pos
        for(int i=n; i>pos; i--)
    {
        arr[i]=arr[i-1];
    }

    */
    //2.if you start from i=n-1 IN a.Index wise b.Swquence wise 
    //Index a.condition i>pos
    //Sequence b.condition i>pos
    for(int i=n-1; i>=pos; i--)
    {
        arr[i+1]=arr[i];

    }
    
    cout<<"enter Value which you want to insert in array\n";
    cin>>value;
    //When you give the position then keep in mind that position means 2 types of Postion 
    //[Swquence wise e.g(1 2 3) {you want to give sequence wise. that i want to enter Value on 2nd number/2nd sequence, Not 2nd index okay... Next }
    //And Array indexing wise (0 1 2 3) {When you enter the Value keep in mind that, You wnat to enter a Value Index wise, I want to enter Value on 2nd Index meanse #3rd sequence#}
    //Check Which one you want]
    // On the basis of 1. Sequence wise ( 1 2 3 ) or 2. Index wise (0 1 2 3) We set the value on Position.
    // If you want Sequence wise: Then you need to write logic as arr[pos-1]=value;
    // If you want Index wise:  Then you need to write logic as arr[pos]=value;
    // In this Current position we want INDEX wise.
    arr[pos]=value;
    
    // arr[pos-1]=value;
    return 0;
}

int main(){
    int n ;
    int pos;
    int arr[20];
    cout<<"Enter size of the array\n";
    cin>>n;
    
   
    cout<<"Enter Array elements\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array before insert element \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<"\n enter Position where you want to insert element\n";
    cin>>pos;
    InserElementArr(arr, pos, n);

    cout<<"Your inserted array\n";
    int i;
    for(i=0; i<=n; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
