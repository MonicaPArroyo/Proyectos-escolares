#include<conio.h>
#include<stdio.h>

main()
{
    int CAFB, FA, CB, I, J, K;
    
    printf("\nMULTIPLICACI%cN DE MATRICES\n\nNOTA IMPORTANTE:\nLA CANTIDAD DE COLUMNAS EN LA MATRIZ 'A' DEBE SER IGUAL QUE LA CANTIDAD DE FILAS EN LA MATRIZ 'B'\n", 224);
   printf("\nIntroduzca el valor para la cantidad de FILAS en A: ");
    scanf("%i", &FA);
     printf("\nIntroduzca el valor para la cantidad de COLUMNAS en A y FILAS en B: ");
    scanf("%i",&CAFB);
    printf("\nIntroduzca el valor para la cantidad de COLUMNAS en B: ");
    scanf("%i",&CB);
    
    int MATA[FA][CAFB], MATB[CAFB][CB],  MATR[100][100], MATF[100][100];
    
    for(I=1;I<=FA;I++)
    {
        for(J=1;J<=CAFB;J++)
        {
            printf("\nIntroduzca el valor asignado a la casilla %i,%i de la matriz A: ", I, J);
            scanf("%i", &MATA[I-1][J-1]);
        }
    }
    
    for(I=1;I<=CAFB;I++)
    {
        for(J=1;J<=CB;J++)
        {
            printf("\nIntroduzca el valor asignado a la casilla %i,%i de la matriz B: ", I, J);
            scanf("%i", &MATB[I-1][J-1]);
        }
    }
    
    for(I=0;I<FA;I++)
    {
    	for(J=0;J<CB;J++)
    	{
    		for(K=0;K<CAFB;K++)
    		{
				MATF[I][J]=MATA[I][K]*MATB[K][J];
				MATR[I][J]=MATR[I][J]+MATF[I][J];	
			}
		}
	}
    printf("\nMATRIZ A\n\n");
    
    for(I=1;I<=FA;I++)
    {
        for(J=1;J<=CAFB;J++)
        {
            printf("%i\t", MATA[I-1][J-1]);
        }
        printf("\n\n\n\n");
    }
    
    printf("\n\nMATRIZ B\n\n");
    
    for(I=1;I<=CAFB;I++)
    {
        for(J=1;J<=CB;J++)
        {
            printf("%i\t", MATB[I-1][J-1]);
        }
        printf("\n\n\n\n");
    }
    
    printf("\n\nMATRIZ RESULTANTE\n\n");
	
	for(I=1;I<=FA;I++)
    {
        for(J=1;J<=CB;J++)
        {
            printf("%i\t", MATR[I-1][J-1]);
        }
        printf("\n\n\n\n");
    }
    
    getch();
}
