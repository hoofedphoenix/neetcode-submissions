class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>countmap;
        
        for (int i =0;i<nums.size();i++){
            countmap[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(countmap.count(diff) && countmap[diff]!=i){
                return {i,countmap[diff]};
            }
        }
        return {};  
    }
};