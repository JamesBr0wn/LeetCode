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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	ListNode* result = new ListNode(0);
    	ListNode* temp = result;
    	int sum = 0;
        while(l1 != NULL || l2 != NULL){
        	if(l1 != NULL){
        		sum += l1->val;
        		l1 = l1->next;
        	}
        	if(l2 != NULL){
        		sum += l2->val;
        		l2 = l2->next;
        	}
        	temp->next = new ListNode(sum%10);
        	temp = temp->next;
        	sum = sum / 10;
        }
        if(sum){
        	temp->next = new ListNode(sum);
        }
        temp = result->next;
        delete result;
        return temp;
    }
};