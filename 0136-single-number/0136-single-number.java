class Solution {
    public int singleNumber(int[] nums) {
         Arrays.sort(nums);
        int n = nums.length;
        for(int i =1; i < n; i++){
            if(nums[i-1]==nums[i]){
                i += 1;
            }
            else{
                return nums[i-1];
            }

        }
        return nums[n-1];
    }
}