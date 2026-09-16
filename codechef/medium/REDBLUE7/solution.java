import java.util.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) 
        {
            int n = sc.nextInt();
            long[] a = new long[n];
            long total = 0;

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextLong();
                total += a[i];
            }
            Arrays.sort(a);
            long redSum = 0;
            long answer = 0;
            for (int k = 1; k <= n / 2; k++) {
                redSum += a[n - k];
                long blueSum = total - redSum;
                long value = redSum * (n - k)
                           + blueSum * k;
                answer = Math.max(answer, value);
            }
            System.out.println(answer);
        }
    }
}