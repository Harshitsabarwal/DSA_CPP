#include <iostream>
using namespace std;
int main(){
    // create a 2D array
    int arr1[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    int arr2[3][4] = { {1,1,1,1}, {2,2,2,2}, {3,3,3,3} };
    int result[3][4];
    // Add the two matrices
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            result[row][col]=arr1[row][col]+arr2[row][col];
        }
    }
    // Print the result matrix
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<result[row][col]<<" ";
        }
        cout<<endl;
    }
}