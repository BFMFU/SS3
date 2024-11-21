#include <stdio.h>

int main() {
    float edge, height, area;

    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &edge);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &height);
    area = 0.5*edge*height;

    printf("Dien tich cua tam giac la: %.2f\n", area);

    return 0;
}

