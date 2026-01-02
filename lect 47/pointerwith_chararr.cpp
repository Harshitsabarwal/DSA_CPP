#include<iostream>
using namespace std;

int main(){
    char arr[5]="1234";
    char *ptr=arr;
    cout<<ptr<<endl; // Outputs the string starting from the pointer
    cout<<arr<<endl; // Outputs the string starting from the array
    cout<<(void*)ptr<<endl; // Outputs the memory address stored in the pointer
    cout<<(void*)arr<<endl; // Outputs the memory address of the array
    char name ='a';
    char *ptr1=&name;
    cout<<(void*)ptr1<<endl; // Outputs the memory address of the single character
    cout<<(void*)&name<<endl; // Outputs the memory address of the single character
    return 0;
}