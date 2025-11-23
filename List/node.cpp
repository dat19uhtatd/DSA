#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

typedef struct node node;

node *makenode(int x){
    node *newnode = new node;
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
}

void pushfront(node **head, int x){
    node *newnode = makenode(x);
    newnode->next=(*head);
    *head =newnode;
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    node *head =NULL;
    pushfront(&head , 1);
    pushfront(&head , 2);
    pushfront(&head , 3);
    pushfront(&head , 4);
    duyet(head);
}

