#include <iostream>

int main(){
    int saat,dakika,saniye,sure,c;
    printf("Ekrana Saat , Dakika , Saniye giriniz: ");
    scanf("%d %d %d",&saat,&dakika,&saniye); 
    printf("Eklenecek sureyi giriniz(saniye): ");
    scanf("%d",&sure);
    printf("---------------------------------------- \n");
    c = sure + saniye;
    if(c>=60){
    c = (c-60);
    dakika = (dakika + 1);
    }
    if(dakika>=60){
    dakika = (dakika-60);
    saat = (saat + 1);
    }

    printf("Yeni zaman: %d : %d : %d",saat,dakika,c);



    


}
