public static String reverseWords(String s) {
    // write your code here 
    String c[]=s.split(" ");
    int left=0,right=c.length-1;
    while(left<right)
    {
        String temp=c[left];
        c[left]=c[right];
        c[right]=temp;
        left++;
        right--;
    }
    return String.join(" ", c);
}