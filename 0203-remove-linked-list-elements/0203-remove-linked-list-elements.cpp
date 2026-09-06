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
    ListNode* removeElements(ListNode* head, int val) {
         // remove starting 
         while (head != NULL && head->val == val) {
            head = head->next;
        }
      
        
        // if (head == NULL) {
        //     return NULL;
        // }

        // ListNode*temp = head;
        // head = head->next;

        // delete temp;
        

        // if (head == NULL) {
        //     tail = NULL;
        // }
         ListNode*temp =head;
         
         while (temp != NULL && temp->next != NULL) {

    if (temp->next->val == val) {
        temp->next = temp->next->next;
    }
    else {
        temp = temp->next;
    }
}
            // while(temp->next->val != val){
            //     temp =temp->next;

            // }
            // temp->next =temp->next ->next;

            return head;
        }
        
    
};