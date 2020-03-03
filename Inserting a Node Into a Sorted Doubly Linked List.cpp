DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data)
{
    DoublyLinkedListNode *temp=head, *temp2, *newNode=(DoublyLinkedListNode *)malloc                                                (sizeof(DoublyLinkedListNode));
    newNode->next=NULL;
    newNode->prev=NULL;
    newNode->data=data;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        if(temp->data >= data )
        {
            if(cnt==1)
            {
                temp->prev=newNode;
                newNode->next=temp->next->prev;
                head=newNode;
                break;
            }
            temp2=temp->prev;
            temp->prev=newNode;
            newNode->next=temp2->next;
            newNode->prev=temp2;
            temp2->next=newNode;
            break;
        }
        if(temp->next==NULL)
        {
            temp->next=newNode;
            newNode->prev=temp->prev->next;
            break;
        }
        temp=temp->next;
    }
    return head;
}
//https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?isFullScreen=false
