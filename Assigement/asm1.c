#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "products.bin"
struct product{
    int id;
    char name[50];
    float price;
    int quantity;    
};
void menu();
void ghimoi();
void them();
void doc();
void chinhsua();
int kiemtratrung(int id);

void menu(){
    printf("\n===== PRODUCT MANAGEMENT =====\n");
    printf("1. Ghi moi\n");
    printf("2. Them\n");
    printf("3. Doc\n");
    printf("4. Chinh sua\n");
    printf("5. Thoat\n");
    printf("Lua chon: ");
}
void ghimoi(){
    FILE *f = fopen(FILENAME, "wb");
    if(f == NULL){
        printf("Khong mo duoc file\n");
        return;
    }
    int n;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    struct product p;
    for(int i = 0; i < n; i++){
        printf("\nSan pham %d\n", i+1);

        printf("Nhap id: ");
        scanf("%d", &p.id);

        if(kiemtratrung(p.id)){
            printf("ID bi trung!\n");
            i--;
            continue;
        }

        getchar();
        printf("Nhap ten: ");
        fgets(p.name, sizeof(p.name), stdin);

        printf("Nhap gia: ");
        scanf("%f", &p.price);

        printf("Nhap so luong: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct product), 1, f);
    }
    fclose(f);
}
void them(){
    FILE *f = fopen(FILENAME, "ab");
    if(f == NULL){
        printf("Khong mo duoc file\n");
        return;
    }
    struct product p;
    printf("Nhap id: ");
    scanf("%d", &p.id);
    if(kiemtratrung(p.id)){
        printf("ID bi trung!\n");
        fclose(f);
        return;
    }
    getchar();
    printf("Nhap ten: ");
    fgets(p.name, sizeof(p.name), stdin);
    printf("Nhap gia: ");
    scanf("%f", &p.price);
    printf("Nhap so luong: ");
    scanf("%d", &p.quantity);
    fwrite(&p, sizeof(struct product), 1, f);
    fclose(f);
}
void doc(){
    FILE *f = fopen(FILENAME, "rb");
    if(f == NULL){
        printf("Chua co du lieu\n");
        return;
    }
    struct product p;
    printf("\n===== DANH SACH SAN PHAM =====\n");
    while(fread(&p, sizeof(struct product), 1, f)){
        printf("ID: %d\n", p.id);
        printf("Ten: %s", p.name);
        printf("Gia: %.2f\n", p.price);
        printf("So luong: %d\n", p.quantity);
        printf("----------------------\n");
    }
    fclose(f);
}
void chinhsua(){
    FILE *f = fopen(FILENAME, "rb+");
    if(f == NULL){
        printf("Khong mo duoc file\n");
        return;
    }
    int id;
    printf("Nhap id can sua: ");
    scanf("%d", &id);
    struct product p;
    int found = 0;
    while(fread(&p, sizeof(struct product), 1, f)){
        if(p.id == id){
            found = 1;

            getchar();
            printf("Nhap ten moi: ");
            fgets(p.name, sizeof(p.name), stdin);

            printf("Nhap gia moi: ");
            scanf("%f", &p.price);

            printf("Nhap so luong moi: ");
            scanf("%d", &p.quantity);

            fseek(f, -sizeof(struct product), SEEK_CUR);
            fwrite(&p, sizeof(struct product), 1, f);

            printf("Da cap nhat thanh cong!\n");
            break;
        }
    }
    if(!found){
        printf("Khong tim thay ID\n");
    }
    fclose(f);
}
int kiemtratrung(int id){
    FILE *f = fopen(FILENAME, "rb");
    if(f == NULL) return 0;
    struct product p;
    while(fread(&p, sizeof(struct product), 1, f)){
        if(p.id == id){
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}
int main(){
    int chon;
    do{
        menu();
        scanf("%d", &chon);

        switch(chon){
            case 1: ghimoi(); break;
            case 2: them(); break;
            case 3: doc(); break;
            case 4: chinhsua(); break;
            case 5: printf("Thoat chuong trinh\n"); break;
            default: printf("Lua chon khong hop le\n");
        }
    }while(chon != 5);
    return 0;
}