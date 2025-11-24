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

int size(node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

void pushfront(node **head, int x){
    node *newnode = makenode(x);
    newnode->next=(*head);
    *head =newnode;
}

void pushback(node **head, int x){
    node *temp=*head;
    node *newnode= makenode(x);
    if(*head == NULL){
        *head = newnode; return;
    }
    while(temp ->next !=NULL){
        temp = temp->next;
    }
    temp->next=newnode;
}

void insert(node **head, int k, int x){
    int n = size(*head);
    if(k < 1 || k > n+1){
        return;
    }
    if(k == 1){
        pushfront(head, x);
    }
    node *temp =*head;
    for(int i=1; i<=k-2;i++){
        temp= temp->next;
    }
    node *newnode = makenode(x);
    newnode->next=temp->next;
    temp->next = newnode;
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    node *head =NULL;
    int n; cin >>n;
    for(int i=0; i<n;i++){
        pushback(&head, i);
    }
    duyet(head);
    int k;
    cout << "\nnhap vi tri muon chen: ";
    cin >>k;
    int x; cout << "\nNhap so muon chen: ";
    cin >>x;
    insert(&head, k, x);
    duyet(head);
}

