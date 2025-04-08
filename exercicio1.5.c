/*Escrreva um programa que faz a conversão de temperaturas de Fahrenheit para Celsius, segundo a fórmula conhecida:

C = 5/9*(F-32)

Deu tudo certo? Se nao der certo, deve ter uma explicação. Ou você pode tentar algumas das fórmulas alternativas abaixo:

C = (F-32)*5/9
      ||
C = 5/9.0*(F-32)
      ||
C = 1.0*5/9*(F-32)
      || 
C = 5*1/9*(F-32)*/

int main(){

      float F, C;

      printf("Digite um valor de temperatura em Fahrenheit:");
      scanf("%f", &F);

      C = (F - 32) * 5 / 9;

      printf("%.3f°F equivalem a %.3f°C", F, C);

}