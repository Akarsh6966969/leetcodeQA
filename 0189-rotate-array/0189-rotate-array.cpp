#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
   
        int l=k%(nums.size());
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+l);
        reverse(nums.begin()+l,nums.end());

    }
};