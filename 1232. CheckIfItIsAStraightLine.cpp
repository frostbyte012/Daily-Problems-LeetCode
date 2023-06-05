#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        //first we check the value made by using the slope equation DeltaY and DeltaX and calculate slope m=(y2-y1)(x2-x1)
        
                for(int i=0;i<coordinates.size()-2;i++)
        { 
                    
        //here we check the difference in coordinate of all corresssponding points and find if they all are similar if not then we return false
        //we twerk this equation a little bit by multiplying since dividing by xero would create a problem
        // ie m1=m2 for a straight line but that means  m1=(y2-y1)/(x2-x1)=m2=(y4-y3)/(x4-x3)
        // if (x4-x3) or (x2-x1) becomes zero it'll create problem to divide the eqaution so we made : (y2-y1)*(x4-x3)=(y4-y3)*(x2-x1)  
            
                    
                 if(((coordinates[i+1][1]-coordinates[i][1])*(coordinates[i+2][0]-coordinates[i+1][0]))!=((coordinates[i+2][1]-coordinates[i+1][1])*(coordinates[i+1][0]-coordinates[i][0])))// so if they are different we return false
                return false;
                
        }
        //else we return true        
        return true;
        
    }
};


