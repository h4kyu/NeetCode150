class Solution {
public:
    /*
    sort nums in increasing order.
    initialize 3 pointers — 
    lower at index 0, 
    middle at index 1, 
    upper at index n.
    initialize vector<vector<int>> triplets
    1. increment upper downward
    while upper > lower, 
    if nums[upper] + nums[lower] + nums[middle] < 0
        ++middle
    else if nums[upper] + nums[lower] + nums[middle] = 0
        add [lower, middle, upper] to triplets
    else
        --upper
        middle = lower + 1
    
    2. increment lower upward
    while upper > lower, 
    if nums[upper] + nums[lower] + nums[middle] < 0
        ++middle
    else if nums[upper] + nums[lower] + nums[middle] = 0
        add [lower, middle, upper] to triplets
    else
        ++lower
        middle = lower + 1
    */
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
    }
};
