class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {if (nums.empty()) return false;
    for (int i = 1; i < nums.size(); i++) {
        int j = i - 1;
        while (j >= 0 && nums[j + 1] < nums[j]) {
            int tmp = nums[j + 1];
            nums[j + 1] = nums[j];
            nums[j] = tmp;
            j--;
        }
    }
   

for(int k=0;k<nums.size()-1;k++){if(nums[k]==nums[k+1]){

    return true;
}




}

return false;}
        
    
};