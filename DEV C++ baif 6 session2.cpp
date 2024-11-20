#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("tinh chu vi va dien tich hinh tron\n");
    float bankinh,pi=3.14;
    printf("nhap ban kinh hinh tron: \n");
    scanf("%f",&bankinh);
    float s=pi*bankinh*bankinh;
    float ChuVi=pi*2*bankinh;
    printf("dien tich hinh tron la: %f\n",s);
    printf("chu vi hinh tron la: %f\n",ChuVi);
    printf("\n");
    return 0;
}
