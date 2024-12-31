#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

node* makeNode(int x){
    node* newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void push(node** top, int x){
    node* newNode = makeNode(x);
    if(*top == NULL){
        *top = newNode; return;
    }
    else{
        newNode->next = *top;
        *top = newNode;
    }
}

void pop(node** top){
    if(*top !=NULL){
        
    }
}
int main(){

}
