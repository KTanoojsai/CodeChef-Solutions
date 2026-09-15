import java.util.*;

class Solution {
    public List<Integer> findLeaders(int[] nums) {
        List<Integer> leaders = new ArrayList<>();

        if (nums == null || nums.length == 0) {
            return leaders;
        }

        int maxFromRight = Integer.MIN_VALUE;

        for (int i = nums.length - 1; i >= 0; i--) {
            if (nums[i] > maxFromRight) {
                leaders.add(nums[i]);
                maxFromRight = nums[i];
            }
        }

        Collections.reverse(leaders);
        return leaders;
    }
}