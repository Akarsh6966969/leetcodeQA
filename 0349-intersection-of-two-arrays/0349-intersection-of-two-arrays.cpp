#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()>nums2.size()?nums1.size():nums2.size();
        vector<int> common;
        vector<int> visited(n,0);
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j] && visited[j]==0)
                {
                    common.push_back(nums1[i]);
                    visited[j]=1;
                    break;
                }
            }
        }
        
        vector<int> cam;
        if(common.size() == 0)
            return cam;
        
          cam.push_back(common[0]);
          for(int j=1;j<common.size();j++ )
          { 
            int k=0;int flag=0;
            while(k<cam.size())
            {
               if(cam[k]==common[j])
               {
                flag=1;
                break;
               }
               else
               {
                k++;
               }
            }
            if(flag==0)
            cam.push_back(common[j]);
            
           }




       return cam;
    }
};