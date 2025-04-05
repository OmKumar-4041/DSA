class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
        // brute force : T.C - O(n2), S.C - 0(1)
        //     for(int i = 0; i<nums.size(); i++) {
        //         for(int j = i+1; j< nums.size(); j++) {
        //             if(nums[i] + nums[j] == target) {
        //                 return {i,j};
        //             }
        //         }
        //     }
    
        // return {};
        // better approach - use hashing map
    
        map<int,int> mpp;
        for(int i = 0; i<nums.size(); i++) {
            int more = target - nums[i]; // how much more we need
    
            // find the more in hash map
    
            if(mpp.find(more) != mpp.end()) { // find if more exists in the map
                return {mpp[more],i};  // if yes means return the index of more and current index
            }
    
            mpp[nums[i]] = i; // else store the element and its index in map
        }
    
        return {}; // return nothing if no elements with target found
        }
    };