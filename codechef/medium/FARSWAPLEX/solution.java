import java.util.*;

class Codechef
{
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0)
        {
            int n = sc.nextInt();

            int a[] = new int[n];

            for(int i = 0; i < n; i++)
            {
                a[i] = sc.nextInt();
            }

            boolean swapped = true;

            while(swapped)
            {
                swapped = false;

                for(int i = 0; i < n - 1; i++)
                {
                    if(a[i] > a[i + 1] &&
                       a[i] - a[i + 1] > 1)
                    {
                        int temp = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = temp;

                        swapped = true;
                    }
                }
            }

            for(int i = 0; i < n; i++)
            {
                System.out.print(a[i] + " ");
            }

            System.out.println();
        }
    }
}