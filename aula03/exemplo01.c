#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota, presenca;

    scanf("%f %f", &nota, &presenca);

    if (presenca >= 0.75){
        if (nota >= 5){
            printf("aprovado\n");
        }else{
            printf("realizar prova substitutiva\n");
        }
    }else{
        printf("repovado\n");
    }
    return 0;
}
