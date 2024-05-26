// Remove Nth Node From End of List 
    // Brute Force:
   
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
// Optimized: single parsing
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL|| head->next==NULL){return NULL;}
        ListNode* fast=head;
        ListNode* slow=head;
        int count=0;
        while(fast->next!=NULL){
            if(count<=n){ count++;
            if(count==n){continue;}
            fast=fast->next;}
            else{
                // cout<<fast->val;
                fast=fast->next;
                // cout<<slow->val;
                slow=slow->next;}
        }
        if(count<n ){return head->next;}
       
        slow->next=slow->next->next;
        return head;
    }
