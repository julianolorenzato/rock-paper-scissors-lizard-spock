#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void chooseWinner(int player_option, int pc_option);

int main()
{
    srand(time(NULL));

    int option;

    char again;

    do
    {
        int comp = (rand() % 3 + 1);

        printf("%d", comp);

        printf("Escolha a opção 1.Pedra 2.Papel 3.Tesoura 4.Lagarto 5.Spock\n");
        scanf("%d", &option);

        chooseWinner(option, comp);

        printf("Quer jogar denovo? s/n\n");
        scanf("%s", &again);

    } while (again == 's');
}

void chooseWinner(int player_option, int pc_option)
{
    if (player_option == 1)
    {
        if (pc_option == 1)
        {
            printf("PC: Pedra\n");
            printf("Empatou\n");
        }
        if (pc_option == 2)
        {
            printf("PC: Papel\n");
            printf("Perdeu\n");
        }
        if (pc_option == 3)
        {
            printf("PC: Tesoura\n");
            printf("Ganhou\n");
        }
        if (pc_option == 4)
        {
            printf("PC: Lagarto\n");
            printf("Ganhou\n");
        }
        if (pc_option == 5)
        {
            printf("PC: Spock\n");
            printf("Perdeu\n");
        }
    }

    if (player_option == 2)
    {
        if (pc_option == 1)
        {
            printf("PC: Pedra\n");
            printf("Ganhou\n");
        }
        if (pc_option == 2)
        {
            printf("PC: Papel\n");
            printf("Empatou\n");
        }
        if (pc_option == 3)
        {
            printf("PC: Tesoura\n");
            printf("Perdeu\n");
        }
        if (pc_option == 4)
        {
            printf("PC: Lagarto\n");
            printf("Perdeu\n");
        }
        if (pc_option == 5)
        {
            printf("PC: Spock\n");
            printf("Ganhou\n");
        }
    }

    if (player_option == 3)
    {
        if (pc_option == 1)
        {
            printf("PC: Pedra\n");
            printf("Perdeu\n");
        }
        if (pc_option == 2)
        {
            printf("PC: Papel\n");
            printf("Ganhou\n");
        }
        if (pc_option == 3)
        {
            printf("PC: Tesoura\n");
            printf("Empatou\n");
        }
        if (pc_option == 4)
        {
            printf("PC: Lagarto\n");
            printf("Ganhou\n");
        }
        if (pc_option == 5)
        {
            printf("PC: Spock\n");
            printf("Perdeu\n");
        }
    }

    if (player_option == 4)
    {
        if (pc_option == 1)
        {
            printf("PC: Pedra\n");
            printf("Perdeu\n");
        }
        if (pc_option == 2)
        {
            printf("PC: Papel\n");
            printf("Ganhou\n");
        }
        if (pc_option == 3)
        {
            printf("PC: Tesoura\n");
            printf("Perdeu\n");
        }
        if (pc_option == 4)
        {
            printf("PC: Lagarto\n");
            printf("Empatou\n");
        }
        if (pc_option == 5)
        {
            printf("PC: Spock\n");
            printf("Ganhou\n");
        }
    }

    if (player_option == 5)
    {
        if (pc_option == 1)
        {
            printf("PC: Pedra\n");
            printf("Ganhou\n");
        }
        if (pc_option == 2)
        {
            printf("PC: Papel\n");
            printf("Perdeu\n");
        }
        if (pc_option == 3)
        {
            printf("PC: Tesoura\n");
            printf("Ganhou\n");
        }
        if (pc_option == 4)
        {
            printf("PC: Lagarto\n");
            printf("Perdeu\n");
        }
        if (pc_option == 5)
        {
            printf("PC: Spock\n");
            printf("Empatou\n");
        }
    }
}