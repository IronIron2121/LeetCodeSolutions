class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size(), s2 = nums2.size(), s3 = s1+s2;
        vector<int> m_arr(s3);

        int i=0, j=0, n=0;

        while(i < s1 && j < s2){
            if(nums1[i] < nums2[j]){
                m_arr[n] = nums1[i];
                i++;
            } else{
                m_arr[n] = nums2[j];
                j++;
            }
            n++;
        }

        while(i < s1){
            m_arr[n] = nums1[i];
            i++;
            n++;
        }
        
        while(j < s2){
            m_arr[n] = nums2[j];
            j++;
            n++;
        }

        int medpos = (s3-1) / 2;
        float median;
        
        if(s3 % 2){
            median = m_arr[medpos];
        } else{
            median = (m_arr[medpos] + m_arr[medpos+1]) / 2.0;
        }

        return median;
        
    }
};