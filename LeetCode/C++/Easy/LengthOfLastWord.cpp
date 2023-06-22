class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length(), lolw=0;
        char t_c;
        for(int i=len-1; i>=0; i--){
            t_c = s[i];
            if(t_c != ' '){
                lolw += 1;
            } else if (t_c == ' ' && lolw){
                return lolw;
            }
        }
        return lolw;
    }
};