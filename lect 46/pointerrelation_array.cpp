#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr; // Pointer to the first element of the array
    cout<<arr<<endl;        // Outputs the address of the first element
    cout<<&arr[0]<<endl;  // Outputs the address of the first element
    cout<<ptr<<endl;

    // saare address ko print kar do
    for(int i=0;i<5;i++){
        cout<<arr+i<<endl; // arr+i is equivalent to &arr[i]
        // print all the values 
        for(int i=0;i<5;i++)
        cout<<*(arr+i)<<endl; // *(arr+i) is equivalent to arr

        // print all the values using pointer
        for(int i=0;i<5;i++)
        cout<<ptr[i]<<endl; // ptr[i] is equivalent to *(ptr+i)

        // print all the address
        for(int i=0;i<5;i++)
        cout<<ptr+i<<endl; // ptr+i is equivalent to &ptr[i])

        //Arithmetic operation ptr++;ptr--;
        for(int i=0;i<5;i++){
            cout<<*ptr<<" ";
            ptr++; // Move to the next integer
        }

        // Addition
        ptr = ptr+3;
        cout<<*ptr<<endl; // Outputs the 4th element
    }
}