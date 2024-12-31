#include<stdio.h>
#include<string.h>

struct bk{
    char title[200];
    int quantyti;
    int isbn;
    float price;
    float total;

};
typedef struct bk bk;

int demChuSo(int n) {
    int dem = 0;
    while (n != 0) {
        n /= 10;
        dem++;
    }
    return dem;
}

int demKyTuSoThuc(float num) {
    char str[20]; // Mảng ký tự để lưu chuỗi
    sprintf(str, "%.10f", num); // Chuyển đổi số thực thành chuỗi, với 10 chữ số sau dấu phẩy
    int count = 0;
    while (str[count] != '\0') { // Đếm đến khi gặp ký tự null
        count++;
    }
    return count;
}

int main(){
    bk books[100];
    float vat =1.1;
    float pay =0;
    int n;
    int maxLenTitle=5;
    int maxLenISBN=4;
    int maxLenQty=3;
    int maxLenPrice=5;
    int maxLenTotal=5;

    printf("nhập số lượng sách đã mua: ");
    scanf("%d",&n);
    getchar();
    // nhập dữ liêu
    for(int i=0;i<n;i++){

        printf("tên sách %d: ",i);
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0;

        printf("số lượng sách %d: ",i);
        scanf("%d",&books[i].quantyti);

        // do {
        // printf("Nhập vào số lượng sách %d: ",i);
        // if (scanf("%d", &books[i].quantyti) != 1) {
        //     printf("Nhap sai dinh dang. Vui long nhap lai!\n");
        //     // Xóa bộ nhớ đệm để tránh vòng lặp vô hạn
        //     while (getchar() != '\n');
        // }
        // } while (scanf("%d", &books[i].quantyti) != 1);

        printf("mã số sách %d: ",i);
        scanf("%d",&books[i].isbn);

        printf("giá sách %d: ",i);
        scanf("%f",&books[i].price);
        getchar();
        // tính total
        books[i].total=books[i].quantyti*books[i].price;
        // tính pay
        pay+=books[i].total*vat;
        // tính maxLen
        maxLenTitle=(int)strlen(books[i].title)>maxLenTitle?(int)strlen(books[i].title):maxLenTitle;
        maxLenISBN=demChuSo(books[i].isbn)>maxLenISBN?demChuSo(books[i].isbn):maxLenISBN;
        maxLenPrice=demKyTuSoThuc(books[i].price)>maxLenPrice?demKyTuSoThuc(books[i].price):maxLenPrice;
        maxLenQty=demChuSo(books[i].quantyti)>maxLenQty?demChuSo(books[i].quantyti):maxLenQty;
        maxLenTotal=demKyTuSoThuc(books[i].total)>maxLenTotal?demKyTuSoThuc(books[i].total):maxLenTotal;
    }
    // in dữ liệu
    int k=maxLenISBN+maxLenPrice+maxLenQty+maxLenTotal+maxLenTitle+3*5;
    char str1[100]="";
    char str2[100]="";
    memset(str2,'_',k);
    memset(str1,'_',k+6);
    //
    printf(" %s\n",str1);//srt1 ="--------------------------------------------"
    printf("%-*s|\n",k+6+1,"|");

    printf("%-*s%-*s|\n",3,"|",k+7-3,"BK BookSeller");

    // printf("%-*s|\n",k+6+1,"|");
    printf("%-*s|\n",k+6+1,"|");
    printf("%-*s|\n",k+6+1,"|");
    printf("%-*s%-*s%-*s%-*s%-*s%-*s|\n",3,"|",maxLenQty+3,"Qty",maxLenISBN+3,"ISBN",maxLenTitle+3,"Title",maxLenPrice+3,"Price",maxLenTotal+4+3,"Total");
    printf("%-*s%s    |\n",3,"|",str2);
    //
    for(int i=0;i<n;i++){
        printf("%-*s%-*d%-*d%-*s%-*.1f%-*.1f|\n",3,"|",maxLenQty+3, books[i].quantyti,maxLenISBN+3, books[i].isbn,maxLenTitle+3, books[i].title,maxLenPrice+3, books[i].price,maxLenTotal+3+4, books[i].total);
    }
    //
    printf("%-*s|\n",k+6+1,"|");
    printf("%-*s|\n",k+6+1,"|");
    // printf("%-*s|\n",k+6+1,"|");
    //
    printf("%-*sVAT: %-*f|\n",3,"|",k-1,vat-1);
    printf("%-*sYou Pay: %-*.1f|\n",3,"|",k-5,pay);
    //
    printf("%-*s|\n",k+6+1,"|");
    printf("|%s|\n",str1);

    return 0;
}