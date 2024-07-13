class Solution {
    public int[] twoSum(int[] nums, int target) {
        int length = nums.length;
        // 1 2 4 5 6 16 21  ->  8
        // 2 1, 4 2, 5 4, 6 5, 16 6, 21 16
        // 4 1, 5 2,  
        for (int i = 1; i < length; ++i) {
            for (int j = i; j < length; ++j) {
                if (nums[j] + nums[j - i] == target) {
                    return new int[]{j, j - i};
                }
            }
        }

        return null;
    }
}
