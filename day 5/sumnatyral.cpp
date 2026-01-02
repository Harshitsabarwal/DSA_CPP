#include<iostream>
using namespace std;

int main()
// {
//     int n,i,sum=0;
//     cout<<"Enter the number:";
//     cin>>n;

//     for(i=1;i<=n;i=i+1)
//     {
//         sum = sum+1;
//     }
//     cout<<sum;
// }
// factorial
{
    int n,fact=1,i;
    cout<<"Enter the number:";
    cin>>n;

    for (i=1;i<=n;i=i+1)
    {
        fact=fact*i;
    }
    cout<<fact;
}