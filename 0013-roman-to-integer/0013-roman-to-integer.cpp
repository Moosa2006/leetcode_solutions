class Solution {
public:
    int romanToInt(string s) {
        int number = 0;
        if(s[0] == 'I'){
                number = number+1;
            }
            else if(s[0]=='V'){
                
                
                    number = number +5;}
            else if(s[0]=='X'){
                
                    number = number +10;
            }
            else if(s[0]=='L'){
                
                    number = number +50;
            }
            else if(s[0]=='C'){
                     
                    number = number +100;
            }
            else if(s[0]=='D'){
                
                
                    number = number +500;
            }
            else if(s[0]=='M'){
                
                    number = number +1000;}
           


        for(int i=1;i<s.size();i++){

            if(s[i] == 'I'){
                number = number+1;
            }
            else if(s[i]=='V'){
                if(s[i-1] == 'I'){
                    number = number+3;
                }
                else{
                    number = number +5;}
            }
            else if(s[i]=='X'){
                if(s[i-1] == 'I'){
                    number = number+8;
                }
                else{
                    number = number +10;}
            }
            else if(s[i]=='L'){
                if(s[i-1] == 'X'){
                    number = number+30;
                }
                else{
                    number = number +50;}
            }
            else if(s[i]=='C'){
                                if(s[i-1] == 'X'){
                    number = number+80;
                }
                else{
                    number = number +100;}
            }
            else if(s[i]=='D'){
                if(s[i-1] == 'C'){
                    number = number+300;
                }
                else{
                    number = number +500;}
            }
            else if(s[i]=='M'){
                if(s[i-1] == 'C'){
                    number = number+800;
                }
                else{
                    number = number +1000;}
            }
        }
        return number;
        
    }
};