class Solution {
    public int reverse(int x) {
         long ox=x;
        long c;
        long r=0;
        if(x<0){
            c=x*(-1);
        }
        else{
            c=x;
        }
        while(c>0){
            int d=(int)c%10;
            r=r*10+d;
            c=c/10;
            if (r < Integer.MIN_VALUE || r > Integer.MAX_VALUE){
            return 0;
        }
        }

        if(ox<0){
            return (int)r*(-1);
        }
        return (int)r; 
    }
}