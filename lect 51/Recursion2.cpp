#include<iostream>
using namespace std;

int main(){
    // print n to 1

    int n = 5;
    for (int i=n;i>0;i--){
        cout<<i<<endl;
    }
    // by recursion
    void printNto1(int n){
        // base case
        if(n==0){
            return;
        }
        cout<<n<<endl;
        printNto1(n-1);
    }
    printNto1(n);
    return 0;
}