class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] res = new int[n];

        int product =1;
        int zeroCount = 0;
        for( int j= 0; j<n; j++){
            if(nums[j] != 0){
            product = product * nums[j];
            }
            else{
                zeroCount++;
            }
        }
        if(zeroCount > 1){
            return new int[nums.length];
        }

        int[] result = new int[nums.length];
        for(int i = 0; i<n; i++){
            if(zeroCount > 0){
                res[i] = (nums[i]== 0) ? product : 0;
            }
            else{
                res[i] = product/nums[i];
            }
            
        }


        return res;
    }
}