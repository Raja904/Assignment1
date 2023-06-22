/*I have solved all these questions on leetcode you may check my solutions from there also
https://leetcode.com/rajeev_121/
And I am writting here only the class of the solution*/
#include <bits/stdc++.h>
using namespace std;
// Q1 Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
       
        for(int i = 0; i < nums.size(); i++){
            if(m.find(target - nums[i]) == m.end())
                m[nums[i]] = i;
            else
                return {m[target - nums[i]], i};
        }
 
        return {-1, -1};
    }
};

// Q2 Remove Element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]!=val)
                v.push_back(nums[i]);
        }
        nums = v;
        return v.size();
    }
};

// Q3 Search Inserted Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int l = 0, r=n-1,mid=(l+r)/2;
        while(l<=r){
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l = mid+1;
            else
                r=mid-1;
            mid = (l+r)/2;
        }

        if(l==r&&nums[l]>target)
            return l;
        else
            return l;
    return mid;
    }
};

// Q4 Plus One
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int l = 0, r=n-1,mid=(l+r)/2;
        while(l<=r){
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l = mid+1;
            else
                r=mid-1;
            mid = (l+r)/2;
        }

        if(l==r&&nums[l]>target)
            return l;
        else
            return l;
    return mid;
    }
};

// Q5 Merge Sorted Array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        for(int i=0; i<n; i++){
            nums1[m+i]=nums2[i];
        } 
        sort(nums1.begin(),nums1.end());
    }
};

//Q6 Contains Duplicate
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        if(s.size()==nums.size())
            return false;
        else
            return true;
    }
};

// Q7 Move Zeroes
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        if(s.size()==nums.size())
            return false;
        else
            return true;
    }
};

// Q8 Set Mismatch
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        vector<int> arr;
        arr.assign(n+1,0);
        for(int i=0; i<n; i++){
            arr[nums[i]]++;
        }
        for(int i=1; i<=n; i++){
            if(arr[i]==2)
                v.push_back(i);
        }
        for(int i=1; i<=n; i++){
            if(arr[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};