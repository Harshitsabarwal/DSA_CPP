#include<iostream>
using namespace std;

void printeven(int num,int N)
{
    if(num>N)
    {
        return;
    }
    cout<<num<<" ";
    printeven(num+2,N);
}
int main(){
    // print even number from 1 to n
    int N;
    cin>>N;
    if(N%2==1)
    N--;

    printeven(2,N);
}