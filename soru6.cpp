#include <iostream>
#include <math.h>

int main(){
    float delta,a,b,c;  //ondalikli cikma ihtimaline karsin float degiskeni atiyoruz
    float kok1,kok2;
    printf("Denklemin katsayilarini giriniz: ");  //kullanicidan katsayilari istiyoruz 
    scanf("%f %f %f",&a,&b,&c);
    delta = (b*b)-(4*a*c);  //deltayı bulmak icin cesitli matematiksel yontemlerden yararlaniyoruz
    if(delta<0){
        printf("denklemin koklerini bulamam \n");  //sıfırdan kucuk delta icin herhang bir cozum kumesi sunamıyoruz
    }
    if(delta>0){  
    kok1 = (-b-sqrt(delta))/(2*a); //sqrt fonksiyonu sayesinde karekok icine alabiliyoruz bu sayede denklem dogru yaziliyor
    kok2 = (-b+sqrt(delta))/(2*a); 
    }
    printf("Birinci kok: %.2f \nikinci kok: %.2f delta : %.2f ",kok1,kok2,delta);  //kullaniciya son bilgiyi aktariyoruz

    return 0;

}