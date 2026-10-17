import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }

            for (int i = 0; i < n; i++) {
                b[i] = scanner.nextInt();
            }
        int maxOm = 0, currentOm = 0;
int maxAddy = 0, currentAddy = 0;

// Calculate maximum streak for Om
for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
        currentOm++;
        maxOm = Math.max(maxOm, currentOm);
    } else {
        currentOm = 0;
    }
}

// Calculate maximum streak for Addy
for (int i = 0; i < n; i++) {
    if (b[i] > 0) {
        currentAddy++;
        maxAddy = Math.max(maxAddy, currentAddy);
    } else {
        currentAddy = 0;
    }
}

// Compare maximum streaks
if (maxOm > maxAddy) {
    System.out.println("Om");
} else if (maxAddy > maxOm) {
    System.out.println("Addy");
} else {
    System.out.println("Draw");
}
       
        }
    }
}
