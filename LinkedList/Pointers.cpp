#include <iostream>
using namespace std; 

int main()
{
    int n = 5; 
    int *ptr =&n;

    cout<<""<<n<<"\t"<<*ptr<<"\t"<<ptr<<"\t"<<endl;   // 5       5       0x61fef8

    n++;
    cout<<*ptr<<endl;  // 6

    cout<<ptr<<endl;  // 0x61fef8

 *ptr++;
    cout<<n<<endl;  //6
    cout<<ptr<<endl; 0x61fefc

    cout<<n<<endl; // 6
    cout<<*ptr<<endl; // 6422268
    cout<<ptr<<endl; // 0x61fefc


    return 0; 

}