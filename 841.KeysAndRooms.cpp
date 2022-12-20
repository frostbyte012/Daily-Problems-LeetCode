#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        //Approach 1: Using Brute Force : Limitations this wont traverse dynamically
        // for(int i=0;i<rooms.size();i++)
        // {
        //     auto it=find(rooms[i].begin(),rooms[i].end(),i+1);
        //     if(it==rooms[i].end())
        //     {
        //        if(i!=rooms.size()-1)
        //           return false;
        //     }            
        // }
        //  return true;

       //Approach 2: Using BFS (Bredth First Search)

       vector<bool>visited(rooms.size(),false);

       queue<int>q;

       q.push(0); //starting from room 0;

       while(!q.empty())
       {
           for(int i=0;i<q.size();i++)
           {
               int room=q.front();
               q.pop();
               visited[room]=true;
               for(int element : rooms[room])
                  if(!visited[element])
                     q.push(element);
           }
       }

       return count(visited.begin(),visited.end(),true)==rooms.size();


    }
};