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
      ListNode* merge(ListNode*  a, ListNode*  b) {
    // ListNode* tempA= a;
    // ListNode* tempB=b;
    ListNode*c = new ListNode(100);
    ListNode* temp =c;
    while(a!=NULL && b!= NULL) {
        if(a->val <= b->val) {
        //   ListNode* t = new ListNode(tempA->val);
          temp->next =a;
        //   tempC=t; 
           a =a ->next;
          temp = temp ->next; 
        }
        else {
            // ListNode * t =new ListNode(tempB->val);
            temp->next =b;
            // tempC=t;
            b =b ->next;
             temp = temp->next;
        }
    }
    if(a==NULL){
        temp->next = b;

    }
    else { // tempB = NULL 
    temp ->next =  a;



    }
    return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            ListNode* a = arr[arr.size()-1];
            arr.pop_back();
            ListNode* b = arr[arr.size()-1];
            arr.pop_back();
            ListNode*c =  merge(a,b);
            arr.push_back(c);
            

        }
        return arr[0];

        
    }
};

//list node ke under ka code change hai bs 
// ListNode* mergeKLists(vector<ListNode*>& arr) {
//      if(arr.size()==0) return NULL;
//        while(arr.size()>1){
//             ListNode* a = arr[0];
//             arr.erase(arr.begin());
//               ListNode* b = arr[0];
//                arr.erase(arr.begin());
//                  ListNode* c = merge(a,b);
//                  arr.push_back(c);
//        }
//        return arr[0];



    
// }
// };

