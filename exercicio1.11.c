/*Escreva um programa que recebe três números inteiros e depois imprime quantos desses números eram ímpares.
Depois adapte seu programa para dizer quantos números são pares. Pode ser útil usar a operação %, que é o resto
da divisão;*/

int main(){

    int a, b, c, impar = 0, par = 0;

    printf("Digite o primeiro: ");
    scanf("%d", &a);

    printf("Digite o segundo: ");
    scanf("%d", &b);

    printf("Digite o terceiro: ");
    scanf("%d", &c);

    printf("num 1: %d, num 2: %d, num 3: %d\n", a, b, c);

    if(a % 2 == 0 ){
        printf("%d é par\n", a);
        par ++;
    } else {
        printf("%d é impar\n", a);
        impar ++;
    }

    if(b % 2 == 0 ){
        printf("%d é par\n", b);
        par ++;
    } else {
        printf("%d é impar\n", b);
        impar ++;
    }

    if(c % 2 == 0 ){
        printf("%d é par\n", c);
        par ++;
    } else {
        printf("%d é impar\n", c);
        impar ++;
    }

    printf("Existem %d números impares e %d números pares;", impar, par);
    

 return 0;
}