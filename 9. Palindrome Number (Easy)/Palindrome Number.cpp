#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int a=x;
        if(a!=0){
        while(a>0){
        
        int b=a%10;
        rev=(rev*10)+b;
        
        a=(a/10);
        }
        }
        return rev==x;
        
    }
};