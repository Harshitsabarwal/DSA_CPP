#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<vector<int> >matrix(3,vector<int>(4,1));
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        swap(matrix[i][j],matrix[j][i]);
    }
}