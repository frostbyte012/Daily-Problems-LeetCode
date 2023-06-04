#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void dfs(vector<vector<int>>& isConnected,int node,vector<bool>&visited)
    {
        //the function is written to run the dfs loop
        
        if(visited[node]) // if visited the the recursion loop won't dig further but return 
            return ; 
        
        visited[node]=true; // if the node is visited then we need to make it true
        
        for(int j=0;j<isConnected.size();j++) // running the loop for all the possible sub parts that are available for exploration
        {
            if(isConnected[node][j]) // if it is connected then we move the recursion in all the possible connected nodes else returns 
            {
                dfs(isConnected,j,visited); //checking the dfs in node's jth connected node
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size(); //taking the size of the nodes existing
        
        vector<bool>visited(n,false); // creating a check list for nodes if they have been visited or not
        
        int numberOfComponents=0; // taking the number of connected components
        
        for(int i=0;i<n;i++)
        {
            if(!visited[i]) // if the node has not been visited then we mark run dfs in it
            {
                numberOfComponents++; // increasing the number of components connected
                
                dfs(isConnected,i,visited); // diving into the nodes connected to i-th node
            }
        }
        
        return numberOfComponents; // finally we return the number of nodes connected
    }
};