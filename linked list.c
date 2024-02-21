#include<stdio.h>
#include<stdlib.h>

typedef struct mylist{
    int data ;
    struct mylist *next;
}node;

void insert(node *s, int data)
{
    while(s->next != NULL)

{
 s = s->next;
}



 s->next = (node*)mallow(size of(node));
 s->next->data = data;
 s->next->next = NULL;
}

void display(node *s)
  {
    while(s->next != NULL)
{ print f("%d\n",s->next->data);
  }
 s = s->next;
  }






void search(node *s, int data)
{
    int count = 0;
while(s->next != NULL)
{
    if(s->next->data == data)
 {
    count++;
 }

 s = s->next
print f("Total%d result found\n",count);
};
 }

void deleteNode(node *s, int data)
{
    while(s->next != NULL)
    {
        if(s->next->data == data)
        s->next = s->next -> next
    return 0;
    }
 s = s->next;
}

void main()
{
    node *first = (node*)mallow(size of(node));
    first -> next = NULL;

insert (first , 35)
insert (first , -15)
insert (first , 1018)
insert (first , 000)

display(first)

search(first, 1018);

deleteNode(first, -15);

display(First);
}
