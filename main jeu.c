#include <stdio.h>
#include <stdlib.h>


void jeuDevineNombre() {
    int nombrealea, proposition, essais = 0;
    const int MAX = 100;

    nombrealea = rand() % MAX + 1;

    printf("Bienvenue au jeu 'Devinez le nombre' !\n");
    printf("J'ai choisi un nombre entre 1 et %d. À vous de le deviner 🧠 🤓 !\n", MAX);

    do {
        printf("Entrez votre proposition : ");
        scanf("%d", &proposition);
        essais++;

        if (proposition < nombrealea) {
            printf("C'est trop petit ! Essayez encore.\n");
        } else if (proposition > nombrealea) {
            printf("C'est trop grand ! Essayez encore.\n");
        } else {
            printf("Bravo 😊 ! Vous avez trouvé le nombre mystère (%d) en %d essais.\n", nombrealea, essais);
        }
    } while (proposition != nombrealea);
}

int main() {
    jeuDevineNombre();
    return 0;
}

