#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hang;
    int cot;
    int* data;
} Matrix;

void nhap_ma_tran(Matrix* matran) {
    printf("Nhap so hang va so cot cua ma tran: ");
    scanf("%d %d", &matran->hang, &matran->cot);

    matran->data = (int*)malloc(matran->hang * matran->cot * sizeof(int));

    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < matran->hang; i++) {
        for (int j = 0; j < matran->cot; j++) {
            scanf("%d", &matran->data[i * matran->cot + j]);
        }
    }
}

void in_ma_tran(Matrix matran) {
    for (int i = 0; i < matran.hang; i++) {
        for (int j = 0; j < matran.cot; j++) {
            printf("%d ", matran.data[i * matran.cot + j]);
        }
        printf("\n");
    }
}

Matrix cong_ma_tran(Matrix matran1, Matrix matran2) {
    // Kiểm tra điều kiện để cộng hai ma trận
    if (matran1.hang != matran2.hang || matran1.cot != matran2.cot) {
        printf("Hai ma tran khong cung kich thuoc!\n");
        // Trả về một ma trận rỗng hoặc xử lý lỗi theo cách khác
        Matrix matran_rong;
        matran_rong.hang = 0;
        matran_rong.cot = 0;
        matran_rong.data = NULL;
        return matran_rong;
    }

    Matrix ket_qua;
    ket_qua.hang = matran1.hang;
    ket_qua.cot = matran1.cot;
    ket_qua.data = (int*)malloc(ket_qua.hang * ket_qua.cot * sizeof(int));

    for (int i = 0; i < ket_qua.hang; i++) {
        for (int j = 0; j < ket_qua.cot; j++) {
            ket_qua.data[i * ket_qua.cot + j] = matran1.data[i * matran1.cot + j] + matran2.data[i * matran2.cot + j];
        }
    }

    return ket_qua;
}

Matrix tru_ma_tran(Matrix matran1, Matrix matran2){
    if (matran1.hang != matran2.hang || matran1.cot != matran2.cot) {
        printf("Hai ma tran khong cung kich thuoc!\n");
        // Trả về một ma trận rỗng hoặc xử lý lỗi theo cách khác
        Matrix matran_rong;
        matran_rong.hang = 0;
        matran_rong.cot = 0;
        matran_rong.data = NULL;
        return matran_rong;
    }

     Matrix ket_qua;
    ket_qua.hang = matran1.hang;
    ket_qua.cot = matran1.cot;
    ket_qua.data = (int*)malloc(ket_qua.hang * ket_qua.cot * sizeof(int));

    for (int i = 0; i < ket_qua.hang; i++) {
        for (int j = 0; j < ket_qua.cot; j++) {
            ket_qua.data[i * ket_qua.cot + j] = matran1.data[i * matran1.cot + j] - matran2.data[i * matran2.cot + j];
        }
    }

    return ket_qua;


}
Matrix nha_ma_tran(Matrix matran1, Matrix matran2){
    if (matran1.hang != matran2.cot) {
        printf("Hai ma tran khong cung kich thuoc!\n");
        // Trả về một ma trận rỗng hoặc xử lý lỗi theo cách khác
        Matrix matran_rong;
        matran_rong.hang = 0;
        matran_rong.cot = 0;
        matran_rong.data = NULL;
        return matran_rong;
    }

     Matrix ket_qua;
    ket_qua.hang = matran1.cot;
    ket_qua.cot = matran2.hang;
    ket_qua.data = (int*)malloc(ket_qua.hang * ket_qua.cot * sizeof(int));

    for (int i = 0; i < ket_qua.hang; i++) {
        for (int j = 0; j < ket_qua.cot; j++) {
            ket_qua.data[i * ket_qua.cot + j] = matran1.data[i * matran1.cot + j] - matran2.data[i * matran2.cot + j];
        }
    }

    return ket_qua;
    

}