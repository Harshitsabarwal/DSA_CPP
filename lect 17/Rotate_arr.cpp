#include<iostream>
using namespace std;

int main(){
    int n,arr;
    int arr = {2,7,11,5,8}
    int last = arr[n-1];
    for(int i=n-2;i>=0;i--)
    arr[i+1]=arr[i];

    arr[0]=last;
}