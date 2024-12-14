#include <iostream>

int main(){
    char a; //karakter atiyoruz ki harfler üzerinden islem yapalım 
    printf("Harfinizi giriniz: ");  //kullanicidan veriyi istiyoruz
    scanf("%c",&a);
    if (a >= 'a' && a <= 'z') {  //a ile z arasindaki tüm kucuk harfleri  && operatoruyle alabiliyoruz
        printf("sayiniz kucuk harf \n");
    }
    if (a >= 'A' && a <= 'Z') {  //A ile Z arasindaki tüm büyük harfleri && operatörüyle yine alıyoruz
        printf("sayiniz buyuk harf \n");
    }
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){  //eger girilen harf sesli bir harf ise ekrana yazdiriyoruz 
        printf("sayiniz sesli harftir.");
    }
    if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){ // || operatoru bize herhangi biri dogruysa if'in icindeki komutu calistirtmaya yariyor
        printf("sayiniz sesli harftir.");} 

    else{  //yukarıdakilerin dışındaki herhangi bir harf sessiz harfe tekabul eder
            printf("sayiniz sessiz harftir");
        }
        return 0;
    
  
    }