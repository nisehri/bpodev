#include <iostream>

int main(){
    int a,b,c,d,e,f,g,h,m,n,toplam,adet;
    printf("10 adet pozitif tamsayi giriniz: ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&m,&n);

    if(a%2==1){
        toplam = toplam + a;
        adet = adet + 1;
    }
    if(b%2==1){
        toplam = toplam + b;
        adet = adet + 1;
    }
    if(c%2==1){
        toplam = toplam + c;
        adet = adet + 1;
    }
    if(d%2==1){
        toplam = toplam + d;
        adet = adet + 1;
    }
    if(e%2==1){
        toplam = toplam + e;
        adet = adet + 1;
    }
    if(f%2==1){
        toplam = toplam + f;
        adet = adet + 1;
    }
    if(g%2==1){
        toplam = toplam + g;
        adet = adet + 1;
    }
    if(h%2==1){
        toplam = toplam + h;
        adet = adet + 1;
    }
    if(m%2==1){
        toplam = toplam + m;
        adet = adet + 1;
    }
    if(n%2==1){
        toplam = toplam + n;
        adet = adet + 1;
    }

    printf("Toplam : %d",(toplam/adet));

}