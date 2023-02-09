class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> a;
        int n=0;
        for(int i=0;i<nums.size();i++){
           
            n+=nums[i];
        a.push_back(n); }
 
       return a;
    }
    
};