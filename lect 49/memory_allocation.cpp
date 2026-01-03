#include<iostream>
using namespace std;

int main(){
    // variable ke liye heap memory allocation
    int *ptr = new int;
    *ptr = 42;
    cout<<*ptr<<endl; // value print hoga
    cout<<ptr<<endl; // address print hoga

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int *p = new int[n]; // array ke liye heap memory allocation
    // values assign karna khud se
    for(int i=0; i<n; i++){
        p[i] = i + 1; // array me values assign karna
        // print kara do
        cout<<p[i]<<" ";

        // delete karna memory ko

        delete ptr; // single variable ke liye
        delete[] p; // array ke liyel
    }



}