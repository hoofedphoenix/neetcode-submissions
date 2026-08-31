class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> countmap;



for(int i=0;i<nums.size();i++){

    int diff=target - nums[i];
    if(countmap.find(diff)!=countmap.end()){return {countmap[diff],i} ;
      
}
countmap.insert({nums[i],i});
  }return{};
}};
