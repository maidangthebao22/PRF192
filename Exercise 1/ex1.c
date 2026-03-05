#include <stdio.h>

#define MAX 100

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void addValue(int a[], int *n)
{
    if(*n >= MAX)
    {
        printf("Mang da day!\n");
        return;
    }
    int x;
    printf("Nhap gia tri: ");
    scanf("%d", &x);
    a[*n] = x;
    (*n)++;
}

void searchValue(int a[], int n)
{
    int x, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
             printf("Tim thay tai vi tri %d\n", i);
            found = 1;
        }
    }
    if(!found)
        printf("Khong tim thay gia tri\n");
}

void removeFirst(int a[], int *n)
{
    int x;
    printf("Nhap gia tri can xoa: ");
    scanf("%d", &x);
    for(int i = 0; i < *n; i++)
    {
        if(a[i] == x)
        {
            for(int j = i; j < *n - 1; j++)
                a[j] = a[j + 1];

            (*n)--;
            printf("Da xoa lan xuat hien dau tien\n");
            return;
        }
    }
    printf("Khong tim thay gia tri\n");
}

void removeAll(int a[], int *n)
{
    int x;
    printf("Nhap gia tri can xoa: ");
    scanf("%d", &x);
    int i = 0;
    while(i < *n)
    {
        if(a[i] == x)
        {
            for(int j = i; j < *n - 1; j++)
                a[j] = a[j + 1];

            (*n)--;
        }
        else
            i++;
    }
    printf("Da xoa tat ca cac gia tri\n");
}

void printAscending(int a[], int n)
{
    int b[MAX];
    for(int i = 0; i < n; i++)
        b[i] = a[i];
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
    printf("Mang tang dan: ");
    printArray(b, n);
}

void printDescending(int a[], int n)
{
    int b[MAX];
    for(int i = 0; i < n; i++)
        b[i] = a[i];
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(b[i] < b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
    printf("Mang giam dan: ");
    printArray(b, n);
}

int main()
{
    int a[MAX];
    int n = 0;
    int choice;
    do
    {
        printf("\n------ MENU ------\n");
        printf("1. Them gia tri\n");
        printf("2. Tim gia tri\n");
        printf("3. Xoa lan xuat hien dau tien\n");
        printf("4. Xoa tat ca gia tri\n");
        printf("5. In mang\n");
        printf("6. In mang tang dan\n");
        printf("7. In mang giam dan\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: addValue(a, &n); break;
            case 2: searchValue(a, n); break;
            case 3: removeFirst(a, &n); break;
            case 4: removeAll(a, &n); break;
            case 5: printArray(a, n); break;
            case 6: printAscending(a, n); break;
            case 7: printDescending(a, n); break;
        }
    } while(choice != 0);
    
    return 0;
}