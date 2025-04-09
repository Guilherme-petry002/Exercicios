/*Escreva um programa que recebe um horário (horas, minutos e segundos) e determina quantos segundos
já se passaram desde que o dia começou.*/

void main(){

    int horas, minutos, segundos, TtSegundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);
    
    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    if(horas < 0 || horas > 23 || minutos < 0 || minutos > 59 || segundos <0 || segundos > 59){
        printf("Você digitou um horário inválido");
    }

    TtSegundos = horas * 3600 + minutos * 60 + segundos;


    printf("Você digitou %d:%d:%d\n", horas, minutos, segundos);
    printf("Já se passarm %ds desde o inicio do dia\n", TtSegundos);

}