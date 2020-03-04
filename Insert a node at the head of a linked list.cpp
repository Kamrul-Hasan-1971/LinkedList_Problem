typedef SinglyLinkedListNode Node ;
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data)
{
    Node *newNode ;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL ;
    newNode-> data = data ;

    if(llist == NULL )
    {
        llist = newNode ;
    }
    else
    {
        newNode->next = llist ;
    }
    return newNode ;
}
//https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
