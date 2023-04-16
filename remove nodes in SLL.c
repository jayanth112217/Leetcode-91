/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
   if(head==NULL) return head;
    if(head->val == val){
      printf("test1\n");
     while(head->val==val){
       printf("%d\n",head->val);
       head=head->next;
       if(head==NULL)
       return NULL;
     }
     if(head==NULL){
       printf("test");
       return NULL;
     }
    }
    struct ListNode* flag = head;
    while(flag!=NULL){
      if(flag->val == val){
       struct ListNode* temp = head;
       while(temp->next!=flag){
         temp=temp->next;
       }
       temp->next = flag->next;
       flag = temp->next;
      }
      else{
        flag=flag->next;
      }
    }
    return head;
}