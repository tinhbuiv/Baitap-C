#include <stdio.h>
int tru2so(int a, int b)
{
    int c = a - b;
    return c;
}
int cong2so(int a, int b)
{
    int c = a + b;
    return c;
}
int nhan2so(int a, int b)
{
    int c = a * b;
    return c;
}
float chia2so(float a, float b)
{
    float c = a / b;
    return c;
}
int main()
{
    int a, b, luachon;
    float ketqua;
    printf("vui long nhap so thu 1 :");
    scanf("%d", &a);
    printf("vui long nhap so thu 2 :");
    scanf("%d", &b);

    printf("nhap lua chon cua ban \n");
    printf("1.phep cong \n");
    printf("2.phep tru\n");
    printf("3.phep nhan\n");
    printf("4.phep chia\n");
    scanf("%d", &luachon);


    if(luachon == 1)
    {
        ketqua = cong2so(a,b);
        printf("Tong 2 so %d va %d la %.0f",a,b,ketqua);
        return 0;
    }

    else if(luachon == 2)
    {
        ketqua = tru2so(a,b);
        printf("Hieu 2 so %d va %d la %.0f", a , b , ketqua);
        return 0;
    }

    else if(luachon == 3)
    {
        ketqua = nhan2so(a,b);
        printf("tich 2 so %d va %d la %.0f", a , b , ketqua);
        return 0;
    }

    if(luachon == 4 && b != 0)
    {
        ketqua = chia2so(a,b);
        printf("Thuong 2 so %d va %d la %.1f", a , b , ketqua);
        return 0;
    }
    else if(luachon == 4 && b == 0)
    {
        printf("Vui long nhap b khac 0");
        return 0;
    }


}


