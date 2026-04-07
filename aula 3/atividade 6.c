/*6) Mostre todos os números ímpares de 1 até 20.*/
 
 #include <stdio.h>

int main() {
for(int i = 1; i <= 20; i++) {
    if(i % 2 != 0)
        printf("%d\n", i);
}
}