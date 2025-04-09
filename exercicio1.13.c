/*Altere o seu programa anterior para também dizer quanto tempo falta até o fim do dia.
Dê o tempo que falta em segundos, e depois apresente o tempo em horas, segundos e minutos.*/

int main(){

    int horas, minutos, segundos, TtSegundos, segundosFim;
    int segundosTotalDia = 86400;
    int horasDia, minutosDia, segundosDia;


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

    horasDia = segundosFim / 3600;
    segundosFim %= 3600;
    minutosDia = segundosFim / 60;
    segundosDia = segundosFim % 60;
    

    printf("Você digitou %d:%d:%d\n", horas, minutos, segundos);
    printf("Já se passarm %ds desde o inicio do dia\n", TtSegundos);
    printf("Faltam %ds até o fim do dia\n", segundosTotalDia - TtSegundos);
    printf("%d segundos equivalem a %dh:%dm:%ds\n", segundosFim, horasDia, minutosDia, segundosDia);

    return 0;

}