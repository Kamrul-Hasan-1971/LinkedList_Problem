SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

            SinglyLinkedListNode *prev=NULL ,*next;

            while(head!=NULL)
            {
                next = head->next ;
                head->next=prev;
                prev=head;
                head = next;
            }

        return prev;
}
//https://www.hackerrank.com/challenges/reverse-a-linked-list/problem
