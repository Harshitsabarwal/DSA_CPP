#include<iostream>
using namespace std;

int main(){
    int n =10;
    int *p = &n;// single pointer
    int **p2 =&p; // double pointer
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p2<<endl; // address of n
    // value ko modify karna ho, jo n mein rakhi hai..
    **p2 = **p2+5; // n = n+5
    cout<<n<<endl;
}