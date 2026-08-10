/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//  class ListNode{
//     public:
//     int data;
//     ListNode* next;
//     public:
//     ListNode(int data1,ListNode* next1){
//         data=data1;
//         next=next1;
//     }
//  };
class Solution {
public:
    void deleteNode(ListNode* node) {
        // if(node == NULL) return node;
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
        // return node;
    }
};