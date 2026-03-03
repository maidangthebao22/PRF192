#include <stdio.h>
void show_menu(){
	printf("\n========MAY TINH BO TUI========\n");
	printf("1.Phep cong: +\n");
	printf("2.Phep tru: -\n");
	printf("3.Phep nhan: *\n");
	printf("4.Phep chia: /\n");
	printf("0.Ket thuc\n");
	printf("Chon phep tinh: ");
}
void processor(int choice, float a, float b){
	switch(choice){
		case 1:
			printf("%.0f + %.0f = %.0f\n",a, b, a+b);
			break;
		case 2:
			printf("%.0f - %.0f = %.0f\n",a, b, a-b);
			break;
		case 3:
			printf("%.0f * %.0f = %.0f\n",a, b, a*b);
			break;
		case 4:
			if(b==0){
				printf("Khong the chia cho 0");
			}
			else{
				printf("%.0f / %.0f = %.0f\n",a, b, a/b);
			}
			break;
		case 0:
			printf("Ket thuc!");
			break;
		default:
			printf("Nhap sai! ");
	}
}
int main(){
    int choice;
    float a, b;

    do{
        show_menu();
        scanf("%d", &choice);

        if(choice >=1 && choice <=4){
            printf("Nhap vao a: ");
            scanf("%f", &a);
            printf("Nhap vao b: ");
            scanf("%f", &b);
        }

        processor(choice, a, b);

    }while(choice != 0);
    return 0;
}

