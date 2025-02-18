class Solution {
public:
     void reverse(vector<int>& arr, int start, int end) { // Pass by reference
        while (start < end) { // Correct condition
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
      void Rotateright(vector<int>& arr, int n, int k) { // Pass by reference
        reverse(arr, 0, n - k - 1);
        reverse(arr, n - k, n - 1);
        reverse(arr, 0, n - 1);
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Ensure k is within bounds
        Rotateright(nums, n, k); // Pass nums by reference
    }
   
};