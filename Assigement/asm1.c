#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "products.bin"

struct product{
    int id;
    char name[50];
    float price;
    int quantity;
}product;

void menu();
void writeProducts();
void appendProducts();
void readProducts();
void modifyProduct();
int checkDuplicate(int id);


void menu(){
    printf("\n-- Product Management System --\n");
    printf("1. Write Products\n");
    printf("2. Append Products\n");
    printf("3. Read Products\n");
    printf("4. Modify Product\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}


int checkDuplicate(int id){
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

void writeProducts(){
    FILE *f = fopen(FILENAME, "wb");
    if(f == NULL){
        printf("Cannot open file!\n");
        return;
    }

    int n;
    printf("Enter the number of products to write: ");
    scanf("%d", &n);

    struct product p;
    for(int i = 0; i < n; i++){
        printf("\nEnter details for product %d:\n", i+1);

        printf("Product ID: ");
        scanf("%d", &p.id);

        if(checkDuplicate(p.id)){
            printf("Duplicate ID! Re-enter.\n");
            i--;
            continue;
        }

        getchar();
        printf("Product Name: ");
        fgets(p.name, sizeof(p.name), stdin);
        p.name[strcspn(p.name, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &p.price);

        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct product), 1, f);
    }

    fclose(f);
    printf("\nProducts have been written to the file successfully.\n");
}


void appendProducts(){
    FILE *f = fopen(FILENAME, "ab");
    if(f == NULL){
        printf("Cannot open file!\n");
        return;
    }

    int n;
    printf("Enter the number of products to append: ");
    scanf("%d", &n);

    struct product p;
    for(int i = 0; i < n; i++){
        printf("\nEnter details for product %d:\n", i+1);

        printf("Product ID: ");
        scanf("%d", &p.id);

        if(checkDuplicate(p.id)){
            printf("Duplicate ID! Re-enter.\n");
            i--;
            continue;
        }

        getchar();
        printf("Product Name: ");
        fgets(p.name, sizeof(p.name), stdin);
        p.name[strcspn(p.name, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &p.price);

        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct product), 1, f);
    }

    fclose(f);
    printf("\nProducts have been appended to the file successfully.\n");
}

void readProducts(){
    FILE *f = fopen(FILENAME, "rb");
    if(f == NULL){
        printf("No data available.\n");
        return;
    }

    struct product p;

    printf("\nReading products from the file:\n");
    printf("-----------------------------------------------------\n");
    printf("%-15s %-20s %-8s %-10s\n", "Product ID", "Product Name", "Price", "Quantity");
    printf("-----------------------------------------------------\n");

    while(fread(&p, sizeof(struct product), 1, f)){
        printf("%-15d %-20s %-8.2f %-10d\n",
               p.id, p.name, p.price, p.quantity);
    }

    printf("-----------------------------------------------------\n");

    fclose(f);
}

void modifyProduct(){
    FILE *f = fopen(FILENAME, "rb+");
    if(f == NULL){
        printf("Cannot open file!\n");
        return;
    }

    int id;
    printf("Enter the Product ID to modify: ");
    scanf("%d", &id);

    struct product p;
    int found = 0;

    while(fread(&p, sizeof(struct product), 1, f)){
        if(p.id == id){
            found = 1;

            printf("Product found. Enter new details:\n");

            getchar();
            printf("New Product Name: ");
            fgets(p.name, sizeof(p.name), stdin);
            p.name[strcspn(p.name, "\n")] = 0;

            printf("New Price: ");
            scanf("%f", &p.price);

            printf("New Quantity: ");
            scanf("%d", &p.quantity);

            fseek(f, -sizeof(struct product), SEEK_CUR);
            fwrite(&p, sizeof(struct product), 1, f);

            printf("Product updated successfully.\n");
            break;
        }
    }

    if(!found){
        printf("Product ID not found.\n");
    }

    fclose(f);
}


int main(){
    int choice;

    do{
        menu();
        scanf("%d", &choice);

        switch(choice){
            case 1: writeProducts(); break;
            case 2: appendProducts(); break;
            case 3: readProducts(); break;
            case 4: modifyProduct(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    }while(choice != 5);

    return 0;
}