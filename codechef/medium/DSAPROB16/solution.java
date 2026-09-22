import java.util.*;

public class Main {
    public static void sortArrayByParity(int[] nums) {
        // Write your code here
        int n=nums.length;
        int res[]=new int[n];
        int idx=0;
        for (int num : nums) {
            if (num % 2 != 0) {
                res[idx++] = num;
            }
        }
        for(int num : nums){
            if(num%2==0)
                res[idx++]=num;
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=res[i];
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] nums = new int[N];
        for (int i = 0; i < N; i++) {
            nums[i] = scanner.nextInt();
        }

        sortArrayByParity(nums);

        for (int num : nums) {
            System.out.print(num + " ");
        }
    }
}