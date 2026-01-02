#include<iostream>
using namespace std;

int findlength(int arr[], int n, int m)
{
    if (m > n)
        return -1;

        int start = 0, end = 0, mid,ans;
        for(int i=0;i<n;i++)
        {
            start= max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end)
        {
            mid = start + (end-start)/2;
            int sum=0, painter=1;
            for(int i=0;i<n;i++)
            {
                sum+=arr[i];
                if(sum>mid)
                {
                    painter++;
                    sum=arr[i];
                }
            }
            if(painter<=m)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
}
