#include<iostream>
using namespace std;

void fun3(int n){
    if(n==0){
        cout<<"Happy Independence Day\n";
        return;
    }
    cout<<n<<"days left\n";
    fun3(n-1);
}

int main(){
    int n = 3;
    // Iterative approach
    // for(int i=n;i>0;i--){
    //     cout<<i<<"days left\n";
    // }
    // cout<<"Happy Independence Day\n";
    // return 0;

    // Recursive approach
    fun3(3);
   
}