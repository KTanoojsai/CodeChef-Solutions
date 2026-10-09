import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    // Helper function to calculate sum of digits
    private static int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int d = sc.nextInt();
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (getDigitSum(a[i]) == d) {
                ans = a[i];
                break;
            }
        }
        System.out.println(ans);
    }
}