#include<iostream>
#include<vector>



using namespace std;






ListNode* removeElements(ListNode* head, int val) 
{
	if(head == NULL){
            return head;
        }
        ListNode *root = head;
	    ListNode *u = head;
	    while(u -> val  == val){
		    u = u -> next;
            if(u == NULL){
                break;
            }
	    }
	    root = u;
	    while(u != NULL){
            
            while(u -> next != NULL && u -> next -> val == val){
                u -> next = u -> next -> next;
            }
            u = u ->  next;
            
	    }

	    return root;
}      
  



int main(void){

	return 0;

}