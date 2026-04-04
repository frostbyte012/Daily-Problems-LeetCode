#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        //Time Complexity : O(n)
        // Space Complexity : O(n)
        queue<int> q;
        vector<int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                if (a.size() == 0)
                {
                    a.push_back(nums[i]);
                    if (!q.empty() && q.front() < 0)
                    {
                        a.push_back(q.front());
                        q.pop();
                    }
                    continue;
                }
                if (a.back() < 0)
                {

                    a.push_back(nums[i]);
                    if (!q.empty() && q.front() < 0)
                    {
                        a.push_back(q.front());
                        q.pop();
                    }
                }
                else
                {
                    q.push(nums[i]);
                }
            }
            
            else if (nums[i] < 0)
            {
                if (a.size() != 0 && a.back() > 0)
                {
                    a.push_back(nums[i]);
                    if (!q.empty() && q.front() > 0)
                    {
                        a.push_back(q.front());
                        q.pop();
                    }
                }
                else
                {
                    q.push(nums[i]);
                }
            }
        }

        while (!q.empty())
        {
            a.push_back(q.front());
            q.pop();
        }

        return a;
    }
};