#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter the input: ";
    cin>>n;

    for(row=n;row>=1;row=row-1)
    {
        //print *
        for(col=1;col<=row;col=col+1)
        cout<<"* ";

        //print space
        for(col=1;col<=2*n-2*row;col=col+1)
        cout<<"  "; // double space

        // print *
        for(col=1;col<=row;col=col+1)
        cout<<"* ";

        cout<<endl;
    }
}