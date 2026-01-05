#include<iostream>
using namespace std;

int main(){
    // array create karna hai,jo store karenga address
    int n,m; // n=rows, m = columns
    cin>>n>>m;

    int **ptr =new int *[n]; // array of pointers
     // create 2D array
    for(int i=0;i<n;i++){
        ptr[i]=new int[m]; // har pointer ke liye array create karna 1D array of size m

    }
    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ptr[i][j];
            cout<<ptr[i][j]<<" ";
            cout<<endl;
        }

        // relese memory , in heap memory ko free karna hai
        for(int i=0;i<n;i++){
            delete [] ptr[i]; // har 1D array ko delete karna hai
            delete [] ptr; // last me pointer array ko delete karna hai
        }
    }
}