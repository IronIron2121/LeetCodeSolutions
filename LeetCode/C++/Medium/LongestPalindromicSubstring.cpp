class Solution {
public:
    string longestPalindrome(string s) {
        int s_len = s.length();
        // quick return string if it's empty or a single character
        if(s.empty() || s_len == 1){
            return s;
        };

        int pal_start=0, pal_end=0, max_length=0;

        for(int i=0; i < s_len;){
            int j=i, k=i;
            while(k != s.length()-1 && s[k] == s[k+1]){
                k++;
                cout << "PLUS PLUS: J, K == " << j << k << endl;

            }
            i = k+1;

            while(k <= s.length()-1 && j > 0 && s[k+1] == s[j-1]){
                cout << s[k] << "is equal to " << s[j] << endl;
                k++;
                j--;
            }

            int this_pal_length = (k-j);

            if(this_pal_length >= max_length){
                std::cout << "NEW MAX: J,K == " << j << " " << k << std::endl;
                max_length = this_pal_length;
                pal_start = j;
                pal_end = k;

            }
        }
        std::cout << "LEAVING NOW: START, END = " << pal_start << pal_end << endl;
        return s.substr(pal_start, ((pal_end+1)-pal_start));
    }
};