typedef SinglyLinkedListNode Node ;
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    Node *temp = head , *temp2;
    int i = 1 ;
    if( position == 0 )
    {
        head = head->next;
        free (temp) ;
    }
    else{
        i=1;
        while( i++ < position ) temp = temp->next ;
        temp2 = temp->next;
        temp->next=temp2->next;
        free (temp2);
    }
    return head ;
}
//https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
