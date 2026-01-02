//square root of a number
#include <iostream>
using namespace std;

int mySqrt(int x){
    int start=0, end = x, mid, ans;

    while(start<=end)
    {
        mid = start+(end-start)/2;

        if(mid==x/mid) //(mid*mid == x) 
        {
            ans == mid;
            break;
        }
        else if(mid*mid < x)
        {
            ans = mid;
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        return ans;
    }
}