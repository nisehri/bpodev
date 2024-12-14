#include <iostream>

int main(){
    int a,b,c,d,e;  //tam sayi degeri atiyoruz
    printf("Lutfen 4 haneli tamsayi giriniz: "); //kullanicidan veriyi istiyoruz
    scanf("%d",&a);
    b = a/1000;
    c = (a-(b*1000))/100;  //basamakları bulmak icin 10'un kuvvetlerini bölme çıkartma mantığında işlemler uyguluyoruz
    d = (a-(b*1000)-(c*100))/10;
    e = (a-(b*1000)-(c*100)-(d*10))/1;

    printf(" %d tane binlik \n %d tane yuzluk \n %d tane onluk \n %d tane birlik ",b,c,d,e); //kullaniciya istenilen sonucu sunuyoruz

    return 0;

}