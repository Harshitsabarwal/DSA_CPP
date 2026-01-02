#include<iostream>
using namespace std;
int main()
// {
//     for(int i=1; i<=5;i=i+1)
//     {
//         cout<<"hello world\n"; 
//     }
// }

{
    int num;
    cout<<"Enter the number:";
    cin>>num;

    for(int i=2;i<=num;i=i+2)
    {
        cout<<i<<endl;
    }
    /or
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
        else
        {
            
        }
    }
}
