#include<iostream>
using namespace std;

void swap(int &a, int &b) // pass by refrencel
{
    int c;
    c=a;
    a=b;
    b=c;

}



int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";

}