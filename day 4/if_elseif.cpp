#include<iostream>
using namespace std;

// int main()
// {
//     int number;
//     cin>>number;

//     if (number>0)
//     {
//         cout<<"POsitive";

//     }
//     else if(number==0)
//     {
//         cout<<"0";
//     }
//     else
//     {
//         cout<<"negative";

//     }

// }

int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;

    if(num==1)
    cout<<"Mon";
    else if (num==2)
    cout<<"Tue";
    else if (num==3)
    cout<<"wed";
    else if (num==4)
    cout<<"Thu";
    else if (num==5)
    cout<<"fri";
    else if (num==6)
    cout<<"Sat";
    else
    cout<<"sun";
}