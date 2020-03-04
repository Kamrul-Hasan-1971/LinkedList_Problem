SinglyLinkedListNode *temp,*temp2=head;
temp = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
temp -> next = NULL;
temp -> data = data ;
if(head==NULL)
{
    head=temp;
    return head;
}
while(temp2!=NULL)
{
    if(temp2->next==NULL)
    {
        temp2->next=temp;
        break;
    }
    temp2=temp2->next;
}
return head;
//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
