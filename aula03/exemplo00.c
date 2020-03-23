#include <stdio.h>

int main(int argc, char const *argv[])
{
    int qtd_leite, qtd_ovos;

    scanf("%d %d", &qtd_leite, &qtd_ovos);

    if (qtd_ovos){
        printf("%d leite\n", 12);
    }else{
        printf("%d leite\n", qtd_leite);
    }

    return 0;
}
