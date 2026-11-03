class Solution {
public:
    int minMoves(vector<int>& nums) {
        int largest =0;
        int count=0;
    for(int i =0; i<nums.size(); i++){
     largest = max(nums[i],largest);
    }
     for(int i =0; i<nums.size(); i++){
     if(nums[i]!= largest){
        count += largest - nums[i];
     }
    }
     return count;
 }
};