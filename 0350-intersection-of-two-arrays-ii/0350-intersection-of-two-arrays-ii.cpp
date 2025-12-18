#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int n=nums1.size()>nums2.size()?nums1.size():nums2.size();
       
        vector <int> common;
        vector<int> visited(n,0);
       
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {     
                if(nums1[i]==nums2[j] && visited[j]==0)
                { 
                    visited[j]=1;
                    common.push_back(nums1[i]);
                    break;
                }
            }
                

            
        }
        return common;
    }
};