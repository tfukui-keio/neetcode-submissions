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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Strategy
        // 1. create vector nodes by push_back every component
        // 2. delete the target component
        // 3. Update next ptr;

        std::vector<ListNode*> nodes;
        // In order to avoid changin entry point, create curr pointer.
        ListNode* curr{head};
        while (curr) {
            nodes.push_back(curr);
            curr = curr->next;
        }

        int delete_idx{(int)nodes.size()-n};
        std::cout << delete_idx << std::endl;
        if (delete_idx == 0) return nodes[1];
        else if (delete_idx == ((int)nodes.size()-1)) {
            nodes[delete_idx-1]->next=nullptr;
            return head;
        } else {
            nodes[delete_idx-1]->next = nodes[delete_idx+1];
            return head;
        }
    }
};
