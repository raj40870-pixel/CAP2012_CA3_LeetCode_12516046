// Student Name: Kamaljit
// Registration Number: 12516046
// Problem: LeetCode 026 - Remove Duplicates from Sorted Array

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k]) {
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1;
    }
};
