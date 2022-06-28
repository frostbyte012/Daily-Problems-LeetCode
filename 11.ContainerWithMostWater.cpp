#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int min_height,left=0,right=height.size()-1,lheight=0,rheight=0,max_area=0;
    while(left<right)
    {
        lheight=height[left];
        rheight=height[right];
        min_height=min(lheight,rheight);
        max_area=max(max_area,min_height*(right-left));
        if(lheight<rheight)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
        
        return max_area;
    }
};