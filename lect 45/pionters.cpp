#include <iostream>
using namespace std;
int main(){
    int a=10;
    //print the addres of a
    // cout<<"Address of a: "<<&a<<endl;
    // int *ptr=&a; //pointer ptr holds the address of a
    // cout<<"Value of a using pointer: "<<*ptr<<endl;
    // //modify the value of a using pointer

    int *ptr = &a; // pointer ptr holds the address of a
    cout<<ptr<<endl; // print address of a
    cout<<*ptr<<endl; // print value of a using pointer
    int b =20;
    ptr = &b; // now ptr holds the address of b
    cout<<ptr<<endl;
    cout<<*ptr<<endl; // print value of b using pointer
}