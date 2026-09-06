public static String reverseWords(String s) {
    //write code here...
    String[] c=s.trim().split("\\s+");
    int left=0,right=c.length-1;
    while(left<right)
    {
        String temp=c[left];
        c[left]=c[right];
        c[right]=temp;
        left++;
        right--;
    }
    return String.join(" ",c);
}
