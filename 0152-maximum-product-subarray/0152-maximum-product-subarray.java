class Solution {
    public int maxProduct(int[] nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int res = nums[0];

        for(int i = 0; i < nums.length; i++){
            if (nums[i] < 0) {
            int temp = maxProd;
            maxProd = minProd;
            minProd = temp;
        }
            
        maxProd = Math.max(nums[i], nums[i] * maxProd);
        minProd = Math.min(nums[i], nums[i] * minProd);
          res = Math.max(res, maxProd);  
        }
        
         
        return res;
    }
}