#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Function Protoype

int computerChoice();
int userChoice();
void checkWinner(int userChoices, int computerChoices);

int main()
{
    int user = userChoice();
    int computer = computerChoice();

    switch (user)
    {
    case 1:
        printf("KAMU MEMILIH BATU\n");
        break;
    case 2:
        printf("KAMU MEMILIH KERTAS\n");
        break;
    case 3:
        printf("KAMU MEMILIH GUNTING\n");
    }

    switch (computer)
    {
    case 1:
        printf("COMPUTER MEMILIH BATU\n");
        break;
    case 2:
        printf("COMPUTER MEMILIH KERTAS\n");
        break;
    case 3:
        printf("COMPUTER MEMILIH GUNTING\n");
    }

    checkWinner(user, computer);

    return 0;
}

// Function untuk menghasilkan output berupa input dari lawan (dalam hal ini komputer)
int computerChoice()
{
    srand(time(NULL));
    int max = 3;
    int min = 1;
    int computerChoice = (rand() % (max - min + 1)) + min;

    return computerChoice;
}

// Function untuk menyimpan output dari pengguna
int userChoice()
{
    int inputUser = 0;

    do
    {
        printf("--- PERMAINAN BATU GUNTING KERTAS ---\n");
        printf("1. Batu\n");
        printf("2. Gunting\n");
        printf("3. Kertas\n");
        printf("Ketikkan Pilihan Anda (1-3): ");
        scanf("%d", &inputUser);
    } while (inputUser < 1 || inputUser > 3);

    return inputUser;
}

// Function untuk mengecek siapa yang menang
void checkWinner(int userChoices, int computerChoices)
{
    if (userChoices == computerChoices)
    {
        printf("SERI!");
    }
    else if ((userChoices == 1 && computerChoices == 3) ||
             (userChoices == 2 && computerChoices == 1) ||
             (userChoices == 3 && computerChoices == 2))
    {
        printf("KAMU MENANG");
    }
    else
    {
        printf("KAMU KALAH");
    }
}