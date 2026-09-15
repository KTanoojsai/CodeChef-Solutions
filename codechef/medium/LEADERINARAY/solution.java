class Solution {
    public List<Integer> findLeaders(int[] nums) {
        // write your code here 
        List<Integer> l=new ArrayList<>();
        if(nums == null||nums.length==0)
            return l;
        int r=nums[nums.length-1];
        l.add(r);
        for (int i = nums.length - 2; i >= 0; i--) {
            if (nums[i] >= r) {
                l.add(nums[i]);
                r = nums[i];
            }
        }
        Collections.reverse(l);
        return l;
    }
}

