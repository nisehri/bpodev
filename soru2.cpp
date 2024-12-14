#include <iostream>

int main(){
int a,b,c,d,e,g;  //öncelikle degisken tanimliyoruz
float f,t;
printf("Birinci ifadenin payini ve paydasini giriniz : ");  //kullanicidan verileri istiyoruz
scanf("%d %d",&a,&b);
printf("Ikinci ifadenin payini ve paydasini giriniz : ");
scanf("%d %d",&c,&d);
printf("---------------------------------------------------\n");  //estetik görünmesi önemli
f = (float)(a*c) / (b*d);
printf("   %d      %d \n ----- X -----  =   %.3f \n   %d      %d   \n\n",a,c,f,b,d);   //carpma islemi icin bir tasari
e = (float)(a*d)+(b*c);  //paydalarla paylari capraz sekilde carpiyoruz
g = (float)(b*d); //paydaları carpiyoruz
t = (float)g / e; //birbirine bölüyoruz
printf("   %d      %d          %d  \n ----- + -----  =  ----- = %.3f \n   %d      %d          %d",a,c,e,t,b,d,g); //toplama islemi icin bir tasarı

return 0;

}