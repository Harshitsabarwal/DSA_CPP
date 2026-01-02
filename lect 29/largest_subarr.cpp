#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool divide(vector<int> arr) {
    int perfix=0, INT_MIN=0,n=arr.size();
    // Calculate the maximun subarray
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0) prefix=0;
    }
    return maxi;
}

    

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n); 
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
   
    cout<<"The length of the largest subarray with sum 0 is: "<<max_len<<endl;
    return 0;
    }



}