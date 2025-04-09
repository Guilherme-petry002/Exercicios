/*Altere seu programa anterior para que ele trabalhe com notas de 110, 50 e 10 reais e descubra que 
ele não funciona bem para dar troco de 150 reais, por que deve dar um troco com 5 notas e poderiam
ser apenas 3*/

void main(){

    int R, restoCem, restoCinquenta, restoDez, restoCinco, restoUm;
    
    printf("Digite uma quantia: ");
    scanf("%d", &R);
    
    restoCem = R / 110;
    R %= 110;
    restoCinquenta = R / 50;
    R %= 50;
    restoDez = R / 10;
    R %= 10;
  
    
    printf("110:%d, 50:%d, 10:%d\n", restoCem, restoCinquenta, restoDez, restoCinco, restoUm);
    
    }
    
    