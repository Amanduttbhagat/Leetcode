/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // map<ListNode*, int> m;
        // while(head != nullptr){
        //     if(m.contains(head)){
        //         return true;
        //     }
        //     m.insert(head,head->val);
        //     head = head->next;
        // }
        // return false;
        // if(head == nullptr || head->next == nullptr || head->next->next == nullptr){
        //     return false;
        // }
        // ListNode* t1;
        // ListNode* t2;
        // while(head != nullptr){
        //     t1 = head;
        //     if(head->next == nullptr || head->next->next == nullptr){
        //         return false;
        //     }
        //     t2 = head->next->next;
        //     if(t1 == t2){
        //         return true;
        //     }
        //     head = head->next;
        // }
        // return false;
            if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
        return false;
    }

    ListNode* t1 = head;
    ListNode* t2 = head;

    while (t2 != nullptr && t2->next != nullptr) {
        t1 = t1->next;
        t2 = t2->next->next;

        if (t1 == t2) {
            return true;
        }
    }

    return false;
    }
};