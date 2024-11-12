#include <stdio.h>

// Punto 1

// Codigo del alumno: Bautista Pereira Ivan Valdez
// Link de Git personal: https://github.com/Bauti531
// Link del Git grupal (Lider: Gabriel Alan Quiroz): https://github.com/matecebado357/Trabajo-Grupal-de-Laboratorio-de-Programacion.git

float metrosACentimetros(float metros)
{
    return metros * 100;
}

float centimetrosAMetros(float centimetros)
{
    return centimetros / 100;
}

int main()
{
    float metros, centimetros;
    
    printf("Ingrese los metros a convertir: ");
    scanf("%f", &metros);
    printf("%.2f metros son %.2f centimetros.\n", metros, metrosACentimetros(metros));
    
    printf("Ingrese los centimetros a convertir: ");
    scanf("%f", &centimetros);
    printf("%.2f centimetros son %.2f metros.\n", centimetros, centimetrosAMetros(centimetros));
    
    return 0;
}