typedef SinglyLinkedListNode Node ;

Node* newNode(int data)
{
    Node  *temp ;
    temp = (Node *)malloc(sizeof(Node));
    temp->data = data ;
    temp->next = NULL ;
    return temp ;
}
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{

    Node *temp1 = head1, *temp2=head2, *head=NULL,*ans,*node,*del;


    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1==NULL)
        {
            if(head==NULL)
            {
                head=newNode(temp2->data);
                ans = head ;
            }
            else
            {
                node = newNode(temp2->data);
                head->next = node ;
                head=node;
            }
            del=temp2;
            temp2 = temp2->next;
            free(del);
        }
        else if(temp2==NULL)
        {
            if(head==NULL)
            {
                head=newNode(temp1->data);
                ans = head ;
            }
            else
            {
                node = newNode(temp1->data);
                head->next = node ;
                head=node;
            }
            del=temp1;
            temp1 = temp1->next;
            free(del);
        }
        else
        {
            if(temp1->data > temp2->data)
            {
                if(head==NULL)
                {
                    head=newNode(temp2->data);
                    ans = head ;
                }
                else
                {
                    node = newNode(temp2->data);
                    head->next = node ;
                    head=node;
                }
                del=temp2;
                temp2 = temp2->next;
                free(del);
            }
            else
            {
                if(head==NULL)
                {
                    head=newNode(temp1->data);
                    ans = head ;
                }
                else
                {
                    node = newNode(temp1->data);
                    head->next = node ;
                    head=node;
                }
                del=temp1;
                temp1 = temp1->next;
                free(del);
            }
        }
    }
    return  ans;
}
//https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem
