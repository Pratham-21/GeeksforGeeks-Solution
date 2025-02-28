class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> res = new HashSet<>();

        for(int num : nums){
            if(res.contains(num)){
                return true;
            }
            res.add(num);
        }
        return false;
    }
}