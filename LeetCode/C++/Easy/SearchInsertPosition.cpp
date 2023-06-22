class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int curr_int = 0;
        int arr_size = nums.size();
        int floor = 0;
        int search_range = arr_size;
        int my_index;

        if(nums[0] >= target){
            return 0;
        } else if(nums.back() < target){
            return arr_size;
        } 

        while(search_range > 1){
            search_range = arr_size - floor;
            my_index = floor + (search_range)/2;
            curr_int = nums[my_index];
            if(curr_int == target){
                return my_index;
            } else if(curr_int > target){
                arr_size = my_index;
            } else if(curr_int < target){
                floor = my_index;
            }
        }

        return my_index + 1;
    }
};