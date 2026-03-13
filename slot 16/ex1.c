//Dem so Nguyen am co trong chuoi

#include <stdio.h>  
#include <string.h> 
#include <ctype.h>  

// Hàm ki?m tra m?t ký t? có ph?i là nguyên âm hay không
int isVowel(char c)
{
    // chuy?n ký t? v? ch? thu?ng d? d? ki?m tra
    c = tolower(c);
    // ki?m tra n?u ký t? là a, e, i, o, u
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;   // dúng là nguyên âm
    }
    return 0;       // không ph?i nguyên âm
}
// Hàm d?m s? nguyên âm trong chu?i
int countVowel(char input[])
{
    int count = 0;              // bi?n luu s? nguyên âm
    int length = strlen(input);   // l?y d? dài chu?i

    // duy?t t?ng ký t? trong chu?i
    for (int i = 0; i < length; i++)
    {
        // g?i hàm isVowel d? ki?m tra ký t?
        if (isVowel(input[i]))
        {
            count++;   // n?u là nguyên âm thì tang bi?n d?m
        }
    }
    return count;   // tr? v? t?ng s? nguyên âm
}

// Hàm main - chuong trình chính
int main()
{
    char input[100];   // khai báo chu?i t?i da 100 ký t?
    // nh?p chu?i t? bàn phím
    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    // g?i hàm countVowel d? d?m s? nguyên âm
    int result = countVowel(input);
    // in k?t qu?
    printf("So nguyen am trong chuoi: %d\n", result);
    return 0;   // k?t thúc chuong trình
}