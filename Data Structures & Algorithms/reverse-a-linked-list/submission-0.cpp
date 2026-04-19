/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev{nullptr};
        ListNode* curr{head};

        while(curr != nullptr) {
            ListNode* next_ptr = curr->next; // 次へのポインタを保存
            curr->next = prev; // currのnextをprevにしてあげる
            prev = curr;       // その値、currがprevになってくれるので、逆向き
            curr = next_ptr;   // next ptrをcurrにセットし、次の値へ
        }
        return prev;
    }
};
