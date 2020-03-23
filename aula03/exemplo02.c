#include <stdio.h>

int main(int argc, char const *argv[])
{
    char comando;
    scanf("%c", &comando);

    switch (comando){
        case 'w':
            printf("cima");
            break;

        case 'a':
            printf("esquerda");
            break;

        case 's':
            printf("baixo");
            break;

        case 'd':
            printf("direita");
            break;

        default:
            printf("comando inválido");
            break;
    }
    printf("\n");
    return 0;
}
