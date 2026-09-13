public static int[] findPair(int[] nums, int target) {
    // Write your code here
    int l=0,r=nums.length;
    for(int i=0;i<nums.length;i++)
    {
        if(nums[l]+nums[r]<target)
        {
            l++;
        }
        if(nums[l]+nums[r]>target)
        {
            r--;
        }
    }
    System.out.println(l,r);
}