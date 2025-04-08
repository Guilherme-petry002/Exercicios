
void main() {
    float bterreno, yterreno, bcasa, ycasa;
    float areaCasa, areaTerreno, areaLivre, porcentagemLivre;

    printf("Informe a dimensão x do terreno (em metros): ");
    scanf("%f", &bterreno);

    printf("Informe a dimensão y do terreno (em metros): ");
    scanf("%f", &yterreno);

    printf("Informe a dimensão x da casa (em metros): ");
    scanf("%f", &bcasa);

    printf("Informe a dimensão y da casa (em metros): ");
    scanf("%f", &ycasa);

    areaTerreno = bterreno * yterreno;
    areaCasa = bcasa * ycasa;
    areaLivre=areaTerreno - areaCasa;
    porcentagemLivre = (areaLivre / areaTerreno) * 100;

    printf("Área do terreno: %.2f m²\n", areaTerreno);
    printf("Área da casa: %.2f m²\n", areaCasa);
    printf("Área livre do terreno: %.2f m²\n", areaLivre);
    printf("Porcentagem livre do terreno: %.2f\n", porcentagemLivre);

}
