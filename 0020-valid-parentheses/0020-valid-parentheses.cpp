class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        int n = s.length();

        unordered_map<char,char> brac{
            {'(',')'},{'{','}'},{'[',']'}
        };
        for(int i=0;i<n;i++){
            char c=s[i];
            if(brac.count(c)){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char topElement = st.top();
                if(brac[topElement]!=c){
                    return false;
                }

                st.pop();
            }

        }
        
        return st.empty();
    }
};