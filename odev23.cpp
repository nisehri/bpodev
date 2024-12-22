#include <iostream>

int main(){
    int a;

    printf("Gun degeri giriniz (1-7): ");
    scanf("%d",&a);

    if(a==1){
        printf("Girdiginiz deger Pazartesi");
    }

    if(a==2){
        printf("Girdiginiz deger Sali");
    }

    if(a==3){
        printf("Girdiginiz deger Carsamba");
    }

    if(a==4){
        printf("Girdiginiz deger Persembe");
    }

    if(a==5){
        printf("Girdiginiz deger Cuma");
    }

    if(a==6){
        printf("Girdiginiz deger Cumartesi");
    }   

    if(a==7){
        printf("Girdiginiz deger Pazar");
    }

}