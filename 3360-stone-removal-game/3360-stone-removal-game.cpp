class Solution {
public:
    bool canAliceWin(int n) {
        int alice=10;
        bool win=true;
        while(n>=alice && alice>0){
            n=n-alice;
            alice--;
            win=!win;

        }
        return !win; 
    }
};