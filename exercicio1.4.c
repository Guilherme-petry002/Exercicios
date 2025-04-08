/*Escreva um programa que declara duas variáveis inteiras a e b, dandos valores a elas e imprimindo os 
valores. Depois adicione comandos para que o programa troque os valores das variáveis passando o valor 
a para b e vice-versa. imprima de novo para confirmar que deu tudo certo. Seu programa deve ser parecido com este aqui:

    int a = 5;
    int b = 11;
    printf("a: %d,    b: %d\n", a, b );  //Imprime 5 e 11

    //Comandos para trocar a e b

    printf("a: %d, b  b: %d\n", a, b );  //Imprime 11 e 5 (não é para imprimir b)

*/

void main(){

    int a = 5;
    int b = 11;
    printf("a: %d,    b: %d\n", a, b );  //Imprime 5 e 11

    //Troca a e b;
    int temp;
    temp = a; // temp == 5
    a = b; // b == 11
    b = temp; // b == 5
    

    printf("[a == b: %d] e [b == a: %d]", a, b);

}