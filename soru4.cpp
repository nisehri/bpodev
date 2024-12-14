#include <iostream>

int main(){
    float a; //float türünden degisken atiyoruz 
    printf("Sayinizi giriniz: "); //kullanicidan veri girisi talep ediyoruz
    scanf("%f",&a);
    if (a<0){  //sayinin pozitif veya negatif durumunu inceliyoruz
        printf("sayiniz negatif\n");
    }
    if (a>0){
        printf("sayiniz pozitif\n");
    }
    if ((int)a == a){  //birbiri icine gecmis if sayesinde ondalik haricindeki sayilari teklik ciftlik durumlarına göre ayiriyoruz
        if((int)a % 2 == 0)  //mod alma operatoru bize kalanı gosteriyor
        printf("sayiniz cift\n");
        if((int)a % 2 != 0)
            printf("sayiniz tek\n"); 
        }
    if ((int)a == a){  //int türünden esit olup olmaması sayının ondalıklı olup olmadıgının gostergesi.
        printf("sayiniz tamsayi");
    }
    if ((int)a != a){ //esit degildir operatörüyle beraber ondalikli oldugunu anlayabiliriz.
        printf("sayiniz ondalikli sayi");
    }

    return 0;
}