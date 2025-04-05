class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            //brute force (TLE due to t.c - O(n2), S.C - O(1)
            // for(int i = 0; i<nums.size(); i++) {
            //     for(int j = i+1; j<nums.size(); j++) {
            //         if(nums[i]==nums[j]) return true; 
            //     }
            // }
    
            // return false;
    
            //better approach - use sort to sort array in the beginning t.c - O(n log n) + 0(n)
            // sort(nums.begin(), nums.end()); // O(n log n)
            // for(int i = 1; i<nums.size(); i++) { // O(n-1) ~ 0(n)
            //     if(nums[i-1] == nums[i]) {
            //         return true;
            //     }
            // }
    
            // return false;
    
            // optimal approach use unordered map or unordered set because ordered map takes same 0(nlogn) and 0(n)
    
            // unordered_map<int,int> mpp; 
    
            // for(int i = 0; i< nums.size(); i++) { // for average case takes O(n) but O(n2) due to hash collisions
            //     mpp[nums[i]]++;
            // }
    
            // for(auto it: mpp) { 
            //     if(it.second > 1) {
            //         return true;
            //     }
            // }
    
            // return false;
    
            //use unordered set only T.C - 0(n) && S.C - 0(n)
    
            unordered_set<int> set;
    
            for(int i = 0; i < nums.size(); i++) { // [1,1,1,3,3,4,3,2,4,2] 
                //set.insert(nums[i]); // 1, 3, 4, 2
                 if(set.find(nums[i])!=set.end()) {
                    return true;
                }
                set.insert(nums[i]);
            }
    
            // compare the size between arr and set
    
            //if(set.size() != nums.size()) return true;
    
            return false;
    
            
        }
    };