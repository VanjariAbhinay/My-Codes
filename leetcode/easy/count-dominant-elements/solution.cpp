class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        
        int n = nums.size();
        int last_num = nums[0];
        if(n==1) return 1;
        
        int count =0;
        for(int i =1;i<n-1;i++){
            float avg = nums[i-1]+nums[i+1]/2;
            if(nums[i]>=avg){
                count++;
            }
            last_num = nums [i];
        }
        return count;
    }
};