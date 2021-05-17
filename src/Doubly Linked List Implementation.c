#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int data;
struct node *next;
struct node *prev;
}node;

typedef struct linked_list {
struct node *head;
}linked_list;


node* new_node(int data) {
node *z;
z = malloc(sizeof(struct node));
z->data = data;
z->next = NULL;
z->prev = NULL;

return z;
}


linked_list* new_linked_list(int data) {
node *a; 
a = new_node(data);

linked_list *l = malloc(sizeof(linked_list)); 
l->head = a;

return l;
}

void traversal(linked_list *l) {
node *temp = l->head;

while(temp != NULL) { 
  printf("%d\t", temp->data);
  temp = temp->next;
}

printf("\n");
}


void insert_at_front(linked_list *l, node *n) {
n->next = l->head;
l->head->prev = n;
l->head = n;
}


void insert_at_tail(linked_list *l, node *n) {
node *temp = l->head;

while(temp->next != NULL) {
  temp = temp->next;
}

temp->next = n;
n->prev = temp;
}


void insert_after(node *n, node *a) {
n->next = a->next;
a->next->prev = n;
a->next = n;
n->prev = a;
}


void del(linked_list *l, node *a) {
if(a->prev != NULL) {
  a->prev->next = a->next;
}
else { //node a is head
  l->head = a->next;
}

if(a->next != NULL) {
  a->next->prev = a->prev;
}
free(a);
}

int main() {
linked_list *l = new_linked_list(10);

node *a, *b, *c; 
a = new_node(20);
b = new_node(50);
c = new_node(60);


l->head->next = a;
a->next = b;
b->next = c;

traversal(l);

node *z;

z = new_node(0);
insert_at_front(l, z);
z = new_node(-10);
insert_at_front(l, z);

z = new_node(100);
insert_at_tail(l, z);

z = new_node(30);
insert_after(z, a);
z = new_node(40);
insert_after(z, a->next);
z = new_node(500);
insert_after(z, a->next->next);

traversal(l);

del(l, l->head);
del(l, z);
traversal(l);

return 0;
}