#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool divide(vector<int> arr) {
    int perfix=0, total_sum=0,n=arr.size();
    // Calculate the total sum of the array
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
        for(int i=0;i<n;i++){
            perfix+=arr[i];
            int ans = total_sum - perfix;
            if(ans==perfix)
            return 1;
        }
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n); 
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 

        divide(arr); // Function to divide the array into two subarrays with equal sum
    }
}
