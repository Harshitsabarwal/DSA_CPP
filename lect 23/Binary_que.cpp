//first and last position of element in sorted array Target=8
// [5,7,7,8,8,10]
#include<iostream>
using namespace std;

int main(){ 
    int start=0, end = num.size()-1,first=-1, last=-1,mid;
    // find first
    while(start<=end)
    {
        mid = start+(end-start)/2;

        if(nums[mid]==target)
        {
            first=mid;
            end = mid-1;
        }
        else if(nums[mid]<target)
        start = mid+1;
        else
        end = mid-1;
    }

    // find last
    start =0, end = nums.size()-1;
     while(start<=end)
    {
        mid = start+(end-start)/2;

        if(nums[mid]==target)
        {
            last=mid;
            start = mid+1;
        }
        else if(nums[mid]<target)
        start = mid+1;
        else
        end = mid-1;
    }

}