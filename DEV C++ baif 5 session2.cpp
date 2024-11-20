#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("tinh s v? chu vi hinh chu nhat\n");
    float Dai,Rong;
    printf("nhap Dai: \n");
    scanf("%f",&Dai);
    printf("nhap Rong: \n");
    scanf("%f",&Rong);
    float s=Dai*Rong;
    float ChuVi=(Dai+Rong)*2;
    printf("dien tich hcn la: %f\n",s);
    printf("chu vi hcn la: %f\n",ChuVi);
    printf("\n");
    return 0;
}
