#include<iostream>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        while(start<end){
            if(nums[start]+nums[end]==target){
                    vector<int> ans;
                    ans.push_back(start+1);
                    ans.push_back(end+1);
                    return ans;
                
            }
            else if(nums[start]+nums[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }
 
// int main(){
//     int n;
//     cin << n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin << arr[i];
//         int target;
//         cin << target;
//         int start = 0, end = n-1;
//         while(start<end){
//             if(arr[start]+arr[end]==target){
//                 cout << start+1 << " " << end+1;
//                 break;
                
//             }
//             else if(arr[start]+arr[end]>target){
//                 end--;
//             }
//             else{
//                 start++;
//             }
//         }



    
//     }

// }