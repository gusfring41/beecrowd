#include <stdio.h>

int main()
{

    double valor; scanf("%lf", &valor);

    int valor_notas = valor*1;
    double valor_notas_fix = valor_notas;

    int notas_100 = valor_notas/100;
    valor_notas = valor_notas%100;
    int notas_50 = valor_notas/50;
    valor_notas = valor_notas%50;
    int notas_20 = valor_notas/20;
    valor_notas = valor_notas%20;
    int notas_10 = valor_notas/10;
    valor_notas = valor_notas%10;
    int notas_5 = valor_notas/5;
    valor_notas = valor_notas%5;
    int notas_2 = valor_notas/2;
    valor_notas = valor_notas%2;
    
    int parte_decimal = ((valor - valor_notas_fix)*100 + valor_notas*100);
    
    int moedas_100 = parte_decimal/100;
    parte_decimal = parte_decimal%100;
    int moedas_50 = parte_decimal/50;
    parte_decimal = parte_decimal%50;
    int moedas_25 = parte_decimal/25;
    parte_decimal = parte_decimal%25;
    int moedas_10 = parte_decimal/10;
    parte_decimal = parte_decimal%10;
    int moedas_5 = parte_decimal/5;
    parte_decimal = parte_decimal%5;
    int moedas_1 = parte_decimal;


    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", notas_100, notas_50, notas_20, notas_10, notas_5, notas_2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01", moedas_100, moedas_50, moedas_25, moedas_10, moedas_5, moedas_1);
}