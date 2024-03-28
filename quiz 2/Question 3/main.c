

int reverseList (Node *head)
{
    Node *prev,*next,*current;
    prev=NULL;
    current=head;
    next=NULL;

    while (current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
