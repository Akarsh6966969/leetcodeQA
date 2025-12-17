#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
             nums[++i]=nums[j];
           
             }

        }
        cout<<"["<<nums[0];
        for(int k=1;k<i+1;k++)
        {
            cout<<","<<nums[k];
        }
        cout<<"]";
        return i+1;
    }
};