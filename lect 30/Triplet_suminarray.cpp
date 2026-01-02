#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No triplet found"<<endl;
    return 0;
}

// or
// sort the array first
for (int i=n-2;i>=0;i--)
for(int j=0;j<=i;j++)
if(arr[j]>arr[j+1])
swap(arr[j], arr[j+1]); // bubble sort
// or use inbuilt

for(int i=0;i<n-2;i++){
    int ans = target-arr[i];
    int start=i+1, end = n-1;
    while(start<end){
        if(arr[start]+arr[end]==ans){
            return 1;
        }else if(arr[start]+arr[end]<ans){
            start++;
        }else{
            end--;
        }

    }

}