class Solution {

    public List<List<Integer>> primeFactorization(int[] numbers) {
        // write your code here 
        int maxVal=0;
        for(int num: numbers)
        {
            if(num>maxVal)
                maxVal=num;
        }
        int spf[]=new int[maxVal+1];
        for(int i=1;i<=maxVal;i++)
        {
            spf[i]=i;
        }
        for(int i=2;i*i<=maxVal;i++)
        {
            if(spf[i]==i)
            {
                for(int j=i*i;j<=maxVal;j+=i)
                {
                    if(spf[j]==j)
                    {
                        spf[j]=i;
                    }
                }
            }
        }
        List<List<Integer>> l=new ArrayList<>();
        for(int num:numbers)
        {
            List<Integer> factors=new ArrayList<>();
            int temp =num;
            while(temp > 1)
            {
                factors.add(spf[temp]);
                temp/=spf[temp];
            }
            l.add(factors);
        }
        return l;
        
    }
}
