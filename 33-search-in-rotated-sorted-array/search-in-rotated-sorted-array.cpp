class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        if (n == 0) return -1;
        if (n == 1) return nums[0] == target ? 0 : -1;
        
        int low = 0, high = n - 1;
        
        // Finding the index of the smallest element (pivot)
        while (low < high) {
            int mid = (low + high)>>1;
            
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else if (nums[mid] < nums[high]) {
                high = mid;
            } else {
                high--; // Handle duplicates
            }
        }
        
        int pivot = low;
        low = 0;
        high = n - 1;
        
        // Regular binary search after determining the pivot
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int real_mid = (mid + pivot) % n;
            
            if (nums[real_mid] == target) {
                return real_mid;
            } else if (nums[real_mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return -1;
    }
};
