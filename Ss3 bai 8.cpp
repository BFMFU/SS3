#include <stdio.h>

int main() {
    int num, reversed = 0;
    
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("So nhap vao không phai là so nguyen co 4 chu so !\n");
        return 1; 
    }
    while (num != 0) {
        int Number = num % 10; 
        reversed = reversed * 10 + Number; 
        num = num/10; 
    }

    printf("So nghich dao là: %d\n", reversed);

    return 0;
}

