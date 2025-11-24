#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct SinhVien{
    ll ma, namsinh, luong;
    string ten;
};

struct node{
    SinhVien data;
    struct node *next;
};

node *makenode(SinhVien s){
    node *newnode = new node;
    newnode->data=s;
    newnode->next=NULL;
    return newnode;
}

void them(node **head, SinhVien s){
    node *temp = *head;
    node *newnode = makenode(s);
    if(*head == NULL){
        *head = newnode;return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data.ma << ' ' << head->data.ten << ' ' <<
        head->data.namsinh << ' ' << head->data.luong << endl;
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        SinhVien s;
        cin >> s.ma >> s.ten >> s.namsinh >> s.luong;
        them(&head, s);
    }
    duyet(head);    
    return 0;
}