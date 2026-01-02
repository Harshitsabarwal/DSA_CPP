#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    int start = 0, end = n - 1;
    while(start<end){
        if(arr[start]==0)
        start++;
        else { 
        if(arr[end]==1)
        end--;
        else{
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    
}


    
}