DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

        DoublyLinkedListNode *prev = NULL  , *temp;

        while(head!=NULL)
        {
            temp= head->next ;
            head->next = prev ;
            head->prev = temp ;
            prev = head ;
            head=temp;
        }
        return prev;
}
//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem
