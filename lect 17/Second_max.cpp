#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,35,1,10,34
     }
    int ans = INT_MIN;
    // Largest element
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans)
        ans = arr[i];

//second largest    
    }
    int sec = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=ans)
        sec = max(sec,arr[i])
    };
    return sec;

    
}