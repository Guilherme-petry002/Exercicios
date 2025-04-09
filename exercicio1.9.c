/*Escreva um programa para um terminal de um banco, que recebe um valor inteiro R e determina o número
de notas de 100, 50, 10, 5, e 1 reais necessárias para pagar a quantia R.
Faça de forma que número de notas usado seja o menor possível.*/

void main(){

int R, restoCem, restoCinquenta, restoDez, restoCinco, restoUm;

printf("Digite uma quantia: ");
scanf("%d", &R);

restoCem = R / 100;
R %= 100;
restoCinquenta = R / 50;
R %= 50;
restoDez = R / 10;
R %= 10;
restoCinco = R / 5;
R %= 5;
restoUm = R / 1;
R %= 1;

printf("100:%d, 50:%d, 10:%d, 5:%d, 1:%d\n", restoCem, restoCinquenta, restoDez, restoCinco, restoUm);

}

