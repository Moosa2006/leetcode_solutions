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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        int cnt = 0;
        while(temp != nullptr){
            cnt++;
            temp = temp->next;
            slow=slow->next;
            fast = fast->next;
        }
        int mid = cnt/2;
        temp =head;
        while(temp != nullptr){
            mid = mid-1;
            if(mid==0){
                ListNode* middle = temp->next;
                temp->next = temp->next->next;
            
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};