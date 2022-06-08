#include<bits/stdtr1c++.h>
using namespace std;

class Solution{


public:
    void merge(vector <int> &nums1 ,int m,vector<int> &nums2, int n){

        int i=m+n,p1=m-1,p2=n-1;

        while(p2>=0)
        {
            if(p1>=0 && nums1[p1]>nums2[p2])
            {
                nums1[i--]=nums2[p1--];
            }
            else{
                nums1[i--]=nums2[p2--];
            }
        }

    }


};

int main(){
    vector<int> nums1,nums2;
    int m,n,inp,inp2;
    cout<<"Enter the array nums 1 : "<<endl;
    while(cin>>inp)
    {
        nums1.push_back(inp);
    }
    cout<<"Enter the array nums 2 : "<<endl;
    while(cin>>inp2)
    {
        nums2.push_back(inp2);
    }
    Solution solution;
    solution.merge(nums1,nums1.size(),nums2,nums2.size());
    cout<<endl;
    m=nums1.size();
    for(int i=0;i<m;i++)
    {
        i==m-1?cout<<nums1[i]<<" ":cout<<nums1[i]<<" , ";
    }
    return 1;
}