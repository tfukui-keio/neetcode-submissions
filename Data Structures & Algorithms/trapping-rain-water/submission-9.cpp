class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int left_max = 0, right_max = 0;
        int ans = 0;

        while (left < right) { // two pointersで、左側が右側を超えない範囲で探索
            if (height[left] < height[right]) { // 左側の高さが右より高い場合
                if (height[left] >= left_max) { // 左側の高さが左の最大高さよりも高い場合
                    left_max = height[left]; // 左の最大高さを更新
                } else {
                    ans += left_max - height[left]; // 最大高さである判定ができたら、面積に足す
                }
                left++; // 左をシフト
            } else {
                if (height[right] >= right_max) { // 左と同じことをすればよい
                    right_max = height[right];
                } else {
                    ans += right_max - height[right];
                }
                right--;
            }
        }
        return ans;
    }
};