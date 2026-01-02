#include <iostream>
using namespace std;

int main() {
    int start = 0, end = arr.size()-1, mid;
    while(start<=end)
    {
        mid = start + (end-start)/2;

        // peak element
        if(arr[mid]>arr[mid-1])
        return mid;
        // right side move
        else if(arr[mid]<arr[mid-1])
        start = mid+1;
        // left side move
        else
        end = mid-1;
    }
    return -1;
}