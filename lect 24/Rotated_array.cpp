#include <iostream>
using namespace std;

int main() {
    int start = 0, end = arr.size()-1, ans = arr[0];
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        // left side move
        if(nums[mid]>=arr[0])
        start = mid+1;
        // right side move
        else
        {
            ans = nums[mid];
            start = mid+1;
        }
        return ans;
    }

}