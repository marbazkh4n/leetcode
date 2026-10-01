class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;

        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 0)
            zeros++;
            if(nums[i] == 1)
            ones++;
            if(nums[i] == 1)
            twos++;
        }
        fill(nums.begin(), nums.begin() + zeros, 0);

        fill(nums.begin() + zeros, nums.begin() + zeros + ones, 1);

        fill(nums.begin() + zeros + ones, nums.end(), 2);

        for(int i = 0; i <nums.size(); i++){
        cout << nums[i] << " ";
     }
  }
    
};