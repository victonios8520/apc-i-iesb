#include <stdio.h>

int main(int argc, char const *argv[])
{
    long int seguidores, seguidores_futuro;
    float percentual_mes;

    scanf("%ld", &seguidores);
    scanf("%f", &percentual_mes);

    seguidores_futuro = seguidores + seguidores * percentual_mes;

    printf("%ld\n", seguidores_futuro);

    return 0;
}
