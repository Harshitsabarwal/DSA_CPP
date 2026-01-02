#include <iostream>
using namespace std;

void printj(int arr[][4], int i, int j){
    // column wise print
    for(int col = 0; col < j; col++){
        for(int row = 0; row < i; row++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
        // switch i,j with row,col
    }
}

int main(){
    // create a 2D array
    int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

    // Print the 2D array values row-wise
    for(int i = 0; i < 3; i++){ //i=rows
        for(int j = 0; j < 4; j++){ //j=columns
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //return 0;

    // print all the values in arr col wise , function call
    printj(arr,3,4);

    // find an element in 2D array
    int x=7;
    for (int rwo=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==x){
                cout<<"Element found at index yes"<<row<<","<<col<<endl;
            }
        }
        cout<<"Element not found"<<endl; 
    }

}

// print row index with maximum sum
