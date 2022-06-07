#include<bits/stdc++.h>
using namespace std;

class N_Queens{
public:
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&leftRow,vector<int>&upperDiagonal,vector<int>lowerDiagonal,int n){

   if(col==n)
   {
       ans.push_back(board);
       return;
   } 

   for(int row=0;row<n;row++)
   {
       if(leftRow[row]==0 && upperDiagonal[n-1 + col-row]==0 && lowerDiagonal[row+col]==0)
       {
           board[row][col]='Q';
           leftRow[row]=1;
           upperDiagonal[n-1+col-row]=1;
           lowerDiagonal[row+col]=1;
           solve(col+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
           board[row][col]='.';
           leftRow[row]=0;
           upperDiagonal[n-1+col-row]=0;
           lowerDiagonal[row+col]=0;
       }
   }


}

public:
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
        board[i]=s;
    }

    vector<int> leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
    solve(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
    return ans;
}
};

int main()
{
    int n;
    vector<vector<string>> ans;
    cout<<"Enter the value of N X N matrix, size of the board."<<endl;
    cin>>n;
    N_Queens NQueens;
    ans=NQueens.solveNQueens(n);
    if(n==0)
    {
        cout<<"Enter a non zero even number"<<endl;
        return 0;
    }
    if(n%2!=0)
       {
            cout<<"Enter an non zero, even number"<<endl;
            return 0;
       }
    for(int i=0;i<ans.size();i++)
    {
          for(int j=0;j<ans[0].size();j++)
          {

              cout<<ans[i][j];
              cout<<endl;

          }
          cout<<endl;
          cout<<endl;
    }

    return 1;
}