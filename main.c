#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("C:\\Users\\thiag\\Desktop\\TesteArquivo\\tabuada.txt","w");

    int i, numero;

    //printf("Informe a tabuada: ");
    //scanf("%d", &numero);

    for(int i = 1; i <= 10;i++ ){
        fprintf(arq,"\n=======================\n");
        fprintf(arq, "*** Tabuada de %d ***\n",i);
        fprintf(arq,"=======================\n");
        for(int j = 1; j <= 10;j++){
            fprintf(arq,"%d x %d = %d\n",i, j, i * j);
        }
        fprintf(arq,"=======================\n");
    }

    fclose(arq);

    return 0;
}
