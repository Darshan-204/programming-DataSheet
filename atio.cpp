class Solution {
    public:
        int myAtoi(string s) {
             int i=0;
           long int ans=0;
          int sig=1;
            while(s[i]==' ')
                i++;
            if(s[i]=='-'){
                sig=-1;
            i++;}
            else if(s[i]=='+'){
                sig=1;
                i++;}
               long int max=2147483647;
            
        while (s[i] >= '0' && s[i] <= '9') {
            // handling overflow test case
            if (ans> INT_MAX / 10
                || (ans == INT_MAX / 10 && s[i] - '0' > 7)) {
                if (sig == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
                    ans=ans*10+(s[i++]-'0');
            }
            return ans*sig; 
        }
    };