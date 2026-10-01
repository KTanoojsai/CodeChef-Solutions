class Solution {

    public List<List<Integer>> primeFactorization(int[] numbers) {
        // write your code here 
        List<List<Integer>> result=new ArrayList<>();
        if(numbers == null)
        return result;
        for(int num : numbers)
        {
            List<Integer> factors=new ArrayList<>();
            int temp=num;
            while(temp%2==0)
            {
                factors.add(2);
                temp/=2;
            }
            for(int d=3;(long) d*d<=temp;d+=2)
            {
                while(temp %d==0)
                {
                    factors.add(d);
                    temp/=d;
                }
            }
            if(temp>1)
            {
                factors.add(temp);
            }
            result.add(factors);
        }
        return result;
    }
}
