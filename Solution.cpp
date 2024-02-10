class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int freq[*max_element(nums.begin(), nums.end())+1];
        memset(freq, 0, sizeof(freq));
        for (int& x : nums)
            freq[x]++;
        int sum = 0;
        for (int& x : nums)
            if (freq[x] == 1)
                sum += x;
        return sum;
    }
};
