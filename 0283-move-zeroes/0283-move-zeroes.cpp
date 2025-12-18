#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j,k=0,n=nums.size();
    for(int j=0;j<n;j++)
    {
       if(nums[j]!=0){
        continue;
        k=j;
       }
        else
        {k=j;
            while(k<n){
                if(nums[k]!=0){
                 swap(nums[j],nums[k]);
                 break;
                }
                k=k+1;
            }
        }
    }
}
};   