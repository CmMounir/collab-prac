class Solution {
public:
    int romanToInt(string s) {
        int start = 0;
        int lenght = s.length();
        int sum = 0;
        while(start < lenght) {
            if(s[start] == 'I' && start+1 < lenght && s[start+1] == 'V') {
                sum+= 4;
                start+=2;
            } 
            else if(s[start] == 'I' && start+1 < lenght && s[start+1] == 'X') {
                sum+= 9;
                start+=2;
            }
            else if(s[start] == 'X' && start+1 < lenght && s[start+1] == 'L') {
                sum+= 40;
                start+=2;
            } 
            else if(s[start] == 'X' && start+1 < lenght && s[start+1] == 'C') {
                sum+= 90;
                start+=2;
            }
            else if(s[start] == 'C' && start+1 < lenght && s[start+1] == 'D') {
                sum+= 400;
                start+=2;
            } 
            else if(s[start] == 'C' && start+1 < lenght && s[start+1] == 'M') {
                sum+= 900;
                start+=2;
            }
            else {
                char symbol = s[start];
                switch(symbol) {
                    case 'I' : sum+=1; break;
                    case 'V' : sum+=5; break;
                    case 'X' : sum+=10; break;
                    case 'L' : sum+=50; break;
                    case 'C' : sum+=100; break;
                    case 'D' : sum+=500; break;
                    case 'M' : sum+=1000; break;
                }
                start++;
            }   
        }
        return sum;
    }
};