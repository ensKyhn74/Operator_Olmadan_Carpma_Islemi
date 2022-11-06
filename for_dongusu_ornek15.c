#include <stdio.h>
// klavyeden 2 sayı girilir ve  * operatorü olmadan çarpma işlemi yapılır

int main() 

{
 
 int x,y;
 int i;
 int sonuc = 0;
 
 printf("1.sayiyi girin: ");
 scanf("%d",&x);

 printf("2.sayiyi girin: ");
 scanf("%d",&y);
 
 for(i = 1 ; i <= x ; i++)
 {
  sonuc += y;  
 }
  
 printf("%d",sonuc);
   
 return 0;

}