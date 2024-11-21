#include <stdio.h>

int main() {
    int so, tong = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    if (so < 1000 || so > 9999) {
        printf("Vui long nhap mot so nguyen co 4 chu so!\n");
        return 1; 
    }

    while (so > 0) {
        tong += so % 10; 
        so /= 10;        
    }

    printf("Tong cac chu so cua so da nhap la: %d\n", tong);

    return 0;
}

