#include<bits/stdc++.h>
using namespace std;
struct Student{
    string name, id;
    double gpa;
};
struct NodeSV{
    Student s;
    NodeSV* next;
};
typedef struct NodeSV* sv;
sv makeNode(int x){
    Student s;
    cout<<"Nhap thong tin sinh vien:\n";
    cout<<"Nhap ID:\n";cin >> s.id;
    cout<<"Nhap ten:\n";cin.ignore();
    getline(cin, s.name);
    cout<< "Nhap gpa:";cin>>s.gpa;
    sv tmp = new NodeSV();
    tmp->s = s;
    tmp->next = NULL;
    return tmp;
}

// kiểm tra rỗng
bool empty(sv a){
    return a == NULL;
}
// Đếm số lượng
int Size(sv a){
    int count = 0;
    while(a != NULL){
        a= a->next;
        count++;
    }
    return count;
}
// thêm 1 phần tử vào đầu danh sách liên kết
void insertFirst(sv &a, Student x){
    sv tmp = makeNode(x);
    if(a==NULL){
        a= tmp;
    }  
    else{
        tmp->next = a;
        a = tmp;
    }
}
// thêm 1 phần tử vào cuối danh sách
void insertLast(sv &a, Student x){
    sv tmp = makeNode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        sv p = a;
        while (p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}
// thêm 1 phần tử vào giữa
void insertMiddle(sv &a, Student x, int pos){
    int n = Size(a);
    if(pos <= 0 || pos > n+1){
        cout << "Vi. tri' chen' khong hop. le.!\n";
    }
    if(n==1){
        insertFirst(a , x);
        return;
    }
    else if(n==pos+1){
        insertLast(a, x);
        return;
    }
    sv p = a;
    for(int i = 1; i < pos-1;i++){
        p = p->next;
    }
    sv tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
}
//xoá phần tử ở đầu
void deleteFist(sv &a){
    if(a == NULL) return;
    a = a->next;
}
// xóa phần tử ở cuối
void deleteLast(sv &a){
    if (a==NULL) return;
    sv before =NULL;
    sv after = a;
    while(after->next != NULL){
        before = after;
        after = after->next;
    }
    if(before== NULL){
        a= NULL;
    }
    else{
        before->next=NULL;
    }
}
// xóa phần tử ở giữa
void deleteMiddle(sv &a, int pos){
    if(pos<=0||pos>Size(a)) return;
    sv truoc = NULL;
    sv sau= a;
    for(int i = 1; i  < pos; i++){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc ==NULL){
        a = a->next;
    }
    else{
        truoc->next= sau->next;
    }
}
// in danh sách liên kết 
void in(sv a){
    cout<<"-------------------------\n";
    while(a !=NULL){
        cout << a->s<<" ";
        a= a->next;
    }
    cout<<"\n";
    cout<<"-------------------------\n";
}

void sapxep(sv &a){
    for(sv p = a; p->next != NULL; p= p->next){
        sv min = p;
        for(sv* q = p->next; q!=NULL;q = q->next){
            if(q->s< min->s){
                min = q;
            }
        }
        int tmp = min->s;
        min->s=p->s;
        p->s=tmp;
    }
}
int main(){
    Node* head = NULL;
    bool queen = true;
    while(queen){
    cout<<"------------------MENU------------------\n";
    cout<<"1. chen 1 phan tu vao dau danh sach\n";
    cout<<"2. chen 1 phan tu vao cuoi danh sach\n";
    cout<<"3. chen 1 phan tu vao giua danh sach\n";
    cout<<"4. xoa 1 phan tu dau danh sach\n";
    cout<<"5. xoa 1 phan tu cuoi danh sach\n";
    cout<<"6. xoa 1 phan tu giua danh sach\n";
    cout<<"7. duyet danh sach\n";
    cout<<"8. sap xep ca phan tu trong danh sach lien ket\n";
    cout<<"0. Thoat\n";
    cout<<"-----------------------------------------\n";
    int lc; cin >> lc;
    if(lc == 1){
        int x; cout<< "nhap gia tri can chen:";cin >> x;
        insertFirst(head, x);
    }
    else if(lc==2){
        int x;cout<<"nhap gia tri can chen:"; cin>>x;
        insertLast(head, x);
    }
    else if(lc==3){
        int x; cout<<"nhap gia tri can chen:";cin>>x;
        int pos; cout<<"nhap gia tri chen:";cin>>pos;
        insertMiddle(head, x, pos);

    }
    else if(lc==4){
        deleteFist(head);
    }
    else if(lc==5){
        deleteLast(head);
    }
    else if(lc==6){
        int pos;cout<<"nhap gia tri xoa:";cin>>pos;
        deleteMiddle(head, pos);
    }
    else if(lc==7){
        in(head);
    }
    else if(lc==8){
        sapxep(head);
    }
    else if(lc==0){
        break;
    }
    }
    return 0;
}
