#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
 
        vector<vector<int>>graph(n,vector<int>());
        vector<bool>visited(n,false);

        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }

        stack<int>st;

        st.push(source);

        while(!st.empty())
        {
            int temp=st.top();

            st.pop();

            if(temp==destination) return true;

            visited[temp]=true;

            for(int i=0;i<graph[temp].size();i++)
            {
                if(!visited[graph[temp][i]])
                  {
                      st.push(graph[temp][i]);
                  }
            }
  
        }


        return false;
        
    }
};