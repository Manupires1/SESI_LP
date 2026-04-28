/*11) Leia 10 números e ordene em ordem decrescente.*/

#include <stdio.h>

int main(){
    float numeros[10];
     for(int i= 0; i <9; i++) {
         for(int j = i + 1; j <10; j++) {
             if(vetor[i] > vetor[j]) {
                 temp = vetor[i];
                 vetor[i] = vetor[j];
                 vetor[j] = temp;
                 
             }
         }
     }
   return 0; 
}
 