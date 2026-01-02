#include<iostream>
using namespace std;

int main()
{
    //int arr[6];
//     int arr[5] = {1,2,3,4,5};
//     for(int i=0;i<5;i++)
//     cout<<arr[i]<<" ";

//     return 0;
// 
      int size;
      cin>>size;
      int arr[1000];
      for(int i=0;i<size;i++)
      cin>>arr[i];
      
      for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";

      return 0;
}
