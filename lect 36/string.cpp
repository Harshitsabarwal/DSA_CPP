#include<iostream>
using namespace std;

int main()
{
    // char arr[20];
    // cin>>arr;
    // arr[2] = '\0';
    // cout<<arr;

    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    // cout<<s.size();

    // string s1 = "rohit", s2 = "mohit";
    // string s3 = s1+s2; // or s1.append(s2)
    // cout<<s3;

    // reverse string
    string s = "rohit";
    int start =0 , end = s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++,end--;
    }
    cout<<s;
}