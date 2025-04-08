/*Altere o seu programa anterior para funcionar com uma casa redonda em um terreno redondo. A linguagem C não "Conhece"
 pi, então, você pode criar uma variável float e colocar 3.141592 nela. A = pi*r²*/

 void main(){

const float pi = 3.141592;
float areaTerreno, areaCasa, areaLivre, porcentagemLivre, raioTerreno, raioCasa;

printf("Digite o raio do terreno: ");
scanf("%f", &raioTerreno);

printf("Digite o raio da casa");
scanf("%f", &raioCasa);

areaTerreno = (raioTerreno * raioTerreno) * pi;
areaCasa = (raioCasa * raioCasa) * pi;
areaLivre = areaTerreno - areaCasa;
porcentagemLivre = (areaLivre/areaTerreno)*100;

printf("A área total do terreno é de: %.3fm²\n", areaTerreno);
printf("A área total da casa é de: %.3fm²\n", areaCasa);
printf("A área livre é de: %.3fm²\n", areaLivre);
printf("A área total do terreno é de: %.3f%%\n", porcentagemLivre);

 }