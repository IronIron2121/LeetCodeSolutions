class Solution {
public:
    string convert(string s, int numRows) {
        std::string s_2 = "";
        if(numRows <= 1){
            return s;
        } else{
            int max_gap = ((2*numRows) - 2);
            for(int i = 0; i < numRows; i++){
                int j = i;
                while(j < s.size()){
                    int this_gap = max_gap - (2*j)%max_gap;
                    s_2 += s[j];                    
                    j += this_gap;
                }
            }
        }        
    return s_2;
    }

};