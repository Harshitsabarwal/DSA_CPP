#include<iostream>
using namespace std;

int main()
{
// Break
   for(int i=1;i<=10;i++)
   {
    if(i==4)
   // break;
   continue; // only skip 4

    cout<<i<<" ";
   }
}