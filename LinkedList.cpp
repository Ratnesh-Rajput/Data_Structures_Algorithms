// Remove Nth Node From End of List 
    // Brute Force:
    class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL|| head->next==NULL){return NULL;}
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
       if(count==n){head=head->next;return head;}
        count=count-n;
        while(temp!=NULL){
            count--;
            if(count==0){
               
                break;
            }
            temp=temp->next;
        }
       
        temp->next=temp->next->next;
        return head;
    }
};
