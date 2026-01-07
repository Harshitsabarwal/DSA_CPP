#include<iostream>
using namespace std;

// print 1 to N
void print (int num,int N)
{
    if (num==N)
    {
        cout<<num;
        return;
    }
    cout<<num<<endl;
    print (num+1,N); 
}
int main(){
    int N=5;
    print(1,N);
}