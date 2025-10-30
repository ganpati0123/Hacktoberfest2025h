#include <bits/stdc++.h>
using namespace std;

struct Node{ int val; Node* next; Node(int v):val(v),next(NULL){} };

Node* middle(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    cout<<middle(head)->val;
}
