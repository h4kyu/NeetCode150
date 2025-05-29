class Solution {
public:
    /*
    sort nums in increasing order.
    initialize 2 pointers — 
    lower at index 0, 
    upper at index n-1.
    initialize vector<vector<int>> triplets
    for i=0 to n-1
        lower = i+1
        if nums[i] > 0
            break
        if (i > 0 && nums[i] == nums[i-1]) 
            continue;
        while upper > lower
            sum = nums[i] + nums[lower] + nums[upper]
            if sum == 0
                add to triplets
                --upper
                ++lower
                Skip duplicates for lower and upper -->
                while (lower < upper && nums[lower] == nums[lower - 1]) ++lower;
                while (lower < upper && nums[upper] == nums[upper + 1]) --upper;
            else if sum > 0
                --upper
            else
                ++lower
    */
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
    }
};
