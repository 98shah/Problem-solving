class Solution {
public:
    bool check(vector<int>& nums) {
        bool response = true;
        int count = 0; 
        for(int i=1; i < nums.size(); i++){
            if(nums[i] < nums[(i-1)]){
                count++;
            }
        }
        
        if(1 < count ) response = false;
        if(nums[(nums.size()) - 1] > nums[0] && count != 0) response = false; 
        return response;
    }
};