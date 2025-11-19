#include <stdio.h>

double M1;
double m2;

void pedir_masas(void);
double calc_fuerza(void);

int main(void)
{
    int C = 0;
    // Crear menu
    printf("¿Qué deseas calcular?\n1. Fuerza gravitacional\n2. Distancia\n3. Periodo\n4. Frecuencia\n5. Velocidad\n");
    scanf("%i", &C);
    
    if (C == 1)
    {
        pedir_masas();
        double F = calc_fuerza();
        printf("Fuerza gravitacional: %e N\n", F);
    }
    return 0;
}

void pedir_masas(void)
{
    M1 = 0;
    while (M1 <= 0)
    {
        printf("Valor de la masa 1 (kg): ");
        scanf("%lf", &M1);
    }

    m2 = 0;
    while (m2 <= 0)
    {
        printf("Valor de la masa 2 (kg): ");
        scanf("%lf", &m2);
    }
}

double calc_fuerza(void)
{
    double r = 0;

    while (r <= 0)
    {
        printf("Distancia entre las masas (m): ");
        scanf("%lf", &r);
    }

    double G = 6.674e-11;  // Constante gravitatoria
    double F = G * M1 * m2 / (r * r);

    return F;
}
