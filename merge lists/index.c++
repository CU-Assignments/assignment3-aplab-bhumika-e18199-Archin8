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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode * head = nullptr;
            ListNode * temp = nullptr;
            if(list1 == nullptr && list2 == nullptr)
            return nullptr;
    
    
    
            if(list1 == nullptr || list2 == nullptr){
                if(list1 == nullptr)
                return list2;
    
                else
                return list1;
            }
    
            if(list1->val < list2->val){
                head = list1;
                temp = head;
                list1 = list1->next;
            }
            else{
                head = list2;
                temp = head;
                list2 = list2->next;
            }
    
    
            while(list1 != nullptr && list2 != nullptr){
                if(list1->val < list2->val){
                    temp->next = list1;
                    temp = temp->next;
                    list1 = list1->next;
                }else{
                    temp->next = list2;
                    temp = temp->next;
                    list2 = list2->next;
                }
    
            } 
            while(list1 != nullptr){
                temp->next = list1;
                temp = temp->next;
                list1 = list1->next;
            }
    
             while(list2 != nullptr){
                temp->next = list2;
                temp = temp->next;
                list2 = list2->next;
            }
    
            return head;
        }
    };