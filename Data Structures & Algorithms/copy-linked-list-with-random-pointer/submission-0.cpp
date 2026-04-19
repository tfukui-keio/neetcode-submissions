/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // Strategy
        // 1. Create all node / create hasmap(head: new node)
        // 2. Copy next/random

        // 1. Create all node
        if (!head) return nullptr;
        std::unordered_map<Node*, Node*> mp;
        Node* curr{head};
        while (curr) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // 2. Copy next/random
        curr = head; // もとに戻す
        while (curr) {
            mp[curr]->next = curr->next ? mp[curr->next] : nullptr;
            mp[curr]->random = curr->random ? mp[curr->random]: nullptr;
            curr = curr->next;
        }
        return mp[head];
    }
};
