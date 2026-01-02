#include<iostream>
using namespace std;

int Sum(int m,int n) // m,n kuch bhi
{                    // function declared
    int ans = m+n;  // Function define
    return ans;  // an s is int type
}

int main()
{
    int a,b;
    cout<<"Enter 2 number:";
    cin>>a>>b;

    // function call
    cout<<Sum(a,b);
    cout<<endl;
}