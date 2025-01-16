#include <iostream>
using namespace std;
class Solution
{
public:
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {
        int nums1Xor = 0, nums2Xor = 0;
        if (nums1.size() % 2)
            for (auto i : nums2)
                nums2Xor ^= i;
        if (nums2.size() % 2)
            for (auto i : nums1)
                nums1Xor ^= i;
        return nums1Xor ^ nums2Xor;
    }
};