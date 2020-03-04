typedef SinglyLinkedListNode Node ;
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position)
{
    Node *temp = head, *newNode ;
    newNode = (Node *) malloc(sizeof(Node));
    newNode->next = NULL ;
    newNode->data = data ;
    if( head == NULL )
        head = newNode ;
    else
    {
        int i = 1 ;
        while( position-1 >= i++ )
            temp = temp->next;
        newNode->next=temp->next;
        temp->next= newNode;
    }
    return head ;
}
//https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
