class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int s_len = s.length();
        std::string seq = "";
        int seq_len = 0;
        int max_seq = 0;
        char this_char;
        for(int i = 0; i < s_len; i++){
            this_char = s[i];
            size_t placement = seq.find(this_char);
            seq.append(1, this_char);
            if(placement != std::string::npos){
                max_seq = (seq_len > max_seq) ? seq_len : max_seq;
                auto beg_it = seq.begin();
                seq.erase(beg_it, std::next(beg_it, placement+1));
                seq_len = seq.length();
            } else {
                seq_len = seq.length();
            }
        }
        return std::max(seq_len,max_seq); 
    }
};