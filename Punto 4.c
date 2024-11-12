#include <stdio.h>

// Punto 4

// Codigo del alumno: Yamil Ian Luque
// Link de Git personal: https://github.com/Samuel7Luque
// Link del Git grupal (Lider: Gabriel Alan Quiroz): https://github.com/matecebado357/Trabajo-Grupal-de-Laboratorio-de-Programacion.git

void linea(char simbolo)
{

	for (int i = 0; i < 20; i++)
	{

		printf("%c", simbolo);
    }
    printf("\n");
}

int main()
{
    linea('#');
    linea('*'); 
    
    return 0;
}