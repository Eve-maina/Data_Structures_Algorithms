#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool getCycle (struct Node *head)
{
    if (head==NULL||head->next=NULL)
    {
        return false;
    }
    struct Node *fast=head->next;
    struct Node *slow=head;

    while (fast!=NULL && fast->next!=NULL)
    {
        if (fast==slow)
        {
            return true;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;
}

