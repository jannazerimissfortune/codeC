#include<bits/stdc++.h>
using namespace std;
// LIFO last in fist out
// stack: push, pop, top, size
int n = 0, stackk[10001];
void push(int x){
    stackk[n]= x;
    ++n;
}
void pop(){
    if(n>=1)
    --n;
}
int top(){
    return stackk[n-1];
}
int size(){
    return n;
}
int main(){
    while(1){
        cout<<"_____________________________\n";
        cout<<"1. push\n";
        cout<<"2. pop\n";
        cout<<"3.top\n";
        cout<<"4.size\n";
        cout<<"0. thoat\n";
        cout<<"_____________________________\n";
        int lc; cin >> lc;
        if(lc == 1){
            int x; cout<<"nhap x=\n"; cin >> x;
            push(x);
        }
        else if(lc==2){
            pop();
        }
        else if(lc==3){
            if(n==0) cout<<"EMPTY\n";
            cout<< top()<<endl;
        }
        else if(lc==4){
            cout <<size(),"\n";
        }
        else{
            break;
        }
    }
}