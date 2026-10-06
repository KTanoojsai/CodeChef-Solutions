class Solution {
    public int first(int arr[],int key)
    {
        int l=0,h=arr.length-1,res=-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(key==arr[m])
            {
                h=m-1;
                res=m;
            }
            else if(key<arr[m])
                h=m-1;
            else 
                l=m+1;
        }
        return res;
    }
    public static int last(int arr[],int key)
    {
        int l=0,h=arr.length-1,res=-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(key==arr[m])
            {
                l=m+1;
                res=m;
            }
            else if(key<arr[m])
                h=m-1;
            else
                l=m+1;
        }
        return res;
    }
    public int[] searchRange(int[] arr, int key) {
        // write your code here 
        int firstpos=first(arr,key);
        if(firstpos==-1)
            return new int[]{-1,-1};
        int lastpos=last(arr,key);
            return new int[] {firstpos,lastpos};
    }
}
