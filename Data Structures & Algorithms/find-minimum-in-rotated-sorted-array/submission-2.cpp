class Solution {
public:
    // Solution 1
    // int findMin(vector<int> &nums) {
    //     return *std::min_element(nums.begin(), nums.end());
    // }

    // Solution 2
    int findMin(vector<int> &nums) {
        int result{nums[0]};
        int left{0}; int right{(int)nums.size()-1};
        while (left < right) {
            int mid{(left+right)/2}; // 中間点ここ
            if (nums[mid] < nums[right]) { // 順番が崩れている場所が含まれるかチェック
                right = mid; // 順番崩れている場所なし -> 探索範囲を別の半分側にする
            } else { // 順番崩れている場所あり -> 現状の探索範囲を更に狭める
                left = mid + 1;
            }
        }
        return nums[left];
    }
};
