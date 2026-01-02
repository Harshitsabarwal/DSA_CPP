#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // // create vector, declare
    // vector<int> v;
    // vector,int>v1(5,1); // 5 elements, all initialized to 1
    // // size and capacity
    // cout <<"size of v:"<<v.size()<<endl;
    // cout <<"capacity of v:"<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // cout <<"size of v:"<<v.size()<<endl;
    // cout <<"capacity of v:"<<v.capacity()<<endl;
    // // update value
    // v[1]=5;
    // cout<<"Size of v1:"<<v1.size()<<endl;
    // cout<<"Capacity of v1:"<<v1.capacity()<<endl;
    // v1.push_back(6);
    // cout<<"Size of v1:"<<v1.size()<<endl;
    // cout<<"Capacity of v1:"<<v1.capacity()<<endl;

    // Delete value from vector
    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(5);
    // vnew.push_back(6);
    // vnew.pop_back(); // removes last element
    // cout<<"Size of vnew:"<<vnew.size()<<endl;
    // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;

    // // remove any element
    // vnew.erase(vnew.begin(),vnew.begin()+1); // removes first element
    // cout<<"Size of vnew:"<<vnew.size()<<endl;
    // cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;

    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }

    // // insert element
    // vnew.insert(vnew.begin()+1,10); // inserts 10 at the beginning
    // cout<<endl;

    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }

    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(12);
    // arr.push_back(21);
    // arr.push_back(122);
    // cout<<arr[0]<<endl; // first element
    // cout<<arr.front()<<endl; // first element
    // cout<<arr[arr.size()-1]<<endl; // last element
     
    // cout<<arr.back()<<endl; // last element

    // // copy value of one vector to another
    // vector<int>a;
    // a = arr;
    // cout<<a.size();
    // cout<<endl;

    vector<int>ans;
    ans.push_back(1);
    ans.push_back(5);  
    ans.push_back(7);
    ans.push_back(18);
    ans.push_back(17);

    // sort in incresing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
        cout<<endl;
    }
    // sort in decreasing order
    sort(ans.rbegin(),ans.rend());



}