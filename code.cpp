#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rev(vector<int>&arr,int s,int e){
        while(s<=e){
            int t=arr[s];
            arr[s++]=arr[e];
            arr[e--]=t;
            
        }
    }
    void rotate(vector<int>& nums, int k) {
        int sz=nums.size();
        k=k%(sz);
        rev(nums,0,sz-k-1);
        rev(nums,sz-k,sz-1);
        rev(nums,0,sz-1);
        
    }
};

