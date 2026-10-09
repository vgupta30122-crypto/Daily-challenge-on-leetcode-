// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         // step 1 -> creat  the deep copy withourt random pointer 
//         Node* dummy = new Node(0);
//         Node* tempC = dummy;
//         Node* temp = head;
//         while(temp){
//             Node* a = new Node(temp->val);
//             tempC ->next = a ;
//              tempC = tempC->next; 
//             temp = temp->next;

//         }
//         Node* duplicate = dummy ->next;
//         // stemp 2 alternate connections 
//         Node* a = head;
//         Node* b = duplicate;
//         dummy = new  Node(-1);
//         Node* tempD  = dummy ;
//         while(a){
           
//             tempD  ->next = a;
//             a = a->next;
//             tempD = tempD ->next;
//              tempD ->next = b;
//             b = b->next;
//             tempD = tempD ->next;

//         }
//         dummy = dummy ->next;
//         // step 3  making alternate connections 
//         Node* t1 = dummy ; // t1 will yraverse in the originsl list 
//         while(t1){
//              Node*t2 = t1 ->next; // t2 is for duolicate  
//             if(t1 ->random) t2 ->random = t1 ->random->next;
//             t1 = t1 ->next ->next;
//         }
//         // step 4 removing the connections 
//         Node* d1 =  new Node(-1);
//         Node* d2 = new Node(-1);
//          t1 = d1 ;
//         Node* t2 = d2;
//         Node* t = dummy;
//         while(t){
//             t1 ->next =t ;
//             t = t ->next;
//             t1 = t1 ->next;
//             t2 ->next =t ;
//             t = t ->next;
//             t2 = t2 ->next;
//         }
//         t1 ->next = NULL;
//         t2 ->next= NULL;
//         d1 = d1->next; // original with random 
//         d2 = d2->next; // duplicate with random
//         return d2;

        



        
        
//     }
// };

 // m2 using map 

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // step 1 -> creat  the deep copy withourt random pointer 
        Node* dummy = new Node(0);
        Node* tempC = dummy;
        Node* temp = head;
        while(temp){
            Node* a = new Node(temp->val);
            tempC ->next = a ;
             tempC = tempC->next; 
            temp = temp->next;

        }
        Node* b = dummy->next;
        Node* a = head;
        // step 2 : make a map of <original , duplicate>

        unordered_map< Node* , Node*> m;
        Node* tempa = a;
        Node* tempb = b;
        while(tempa!= NULL){
            m[tempa] = tempb;
            tempa = tempa->next;
            tempb = tempb->next;

        }
        for(auto x: m){
            Node* o = x.first;
            Node* d = x.second;
            if(o->random!= NULL){
                Node* oRandom =o->random;
                Node* dRandom = m[o->random];
                d->random = dRandom;
            }
          }  
          return  b;
        }  
};

