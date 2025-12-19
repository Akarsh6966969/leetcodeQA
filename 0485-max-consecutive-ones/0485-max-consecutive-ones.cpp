#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
    int max=0,i=0,j=0;
   for(int i=0;i<n;i++)
   {
    int count=0;
    while(i<n && nums[i]!=0){
      count++;
      i++;
      }
   if(max<count)
   max=count;
   
    }
    return max;
}
};