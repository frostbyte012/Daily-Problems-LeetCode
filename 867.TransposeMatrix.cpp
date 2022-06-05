#include<bits/stdc++.h>
using namespace std;
vector <vector<int>> transpose(vector<vector<int>> matrix)
{
     int x=matrix.size(),y=matrix[0].size();
     vector<vector<int>> transpose(y,vector<int>(x));
     for(int i=0;i<x;i++)
     {
         for(int j=0;j<y;j++)
         {
             transpose[j][i]=matrix[i][j];
         }

     }

     return transpose;
}

int main()
{
    vector<vector<int>> matrix ;
    int inp,cout=0;
    cout<<"Enter the matrix elements : "<<endl;
    while(cout++)
    {
        cout<<"Enter the row "<<
        while(cin)
    }
    matrix.push_back(inp);


}