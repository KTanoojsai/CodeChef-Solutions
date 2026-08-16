import java.util.*;
class Codechef 
{
    public static int gcd(int a, int b) 
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0)
        {
            int n = sc.nextInt();
            int g = 0;
            for (int i = 0; i < n; i++) 
            {
                int x = sc.nextInt();
                g = gcd(g, x);
            }
            if (g == 1)                System.out.println(-1);
            else 
            {
                int ans = g;
                for (int i = 2; i * i <= g; i++) 
                {
                    if (g % i == 0) 
                    {
                        ans = i;
                        break;
                    }
                }
                System.out.println(ans);
            }
        }
   }
}