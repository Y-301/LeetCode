class Solution {
public:
    int myAtoi(string s)
    {
        if (s.length() == 0) return 0;
        
        long number = 0;

        int i=0;
        while(s.at(i) == ' '){
            i++;
            if (i>=s.length()) return 0;
        };


        int sign = 0;
        if (s.at(i) == '-'){
            sign = -1;
            i++;
        }else if (s.at(i) == '+'){
            sign = 1;
            i++;
        }

        else if (s.at(i)<'0' || s.at(i)>'9'){
            return 0;
        }
            
        
        for (; i<s.length(); i++){
            char ch = s.at(i);

            if (ch>='0' && ch<='9'){
                int n = ch - 48;
                number = number*10 + n;
                if (number>INT_MAX){
                    number = INT_MAX;
                    if (sign == -1) number = INT_MIN;
                    break;
                }

            }
            else{
                break;
            }
        }

        return (sign == -1 && number!= INT_MIN) ? -number : number;
    }
};