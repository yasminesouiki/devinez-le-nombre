# devinez-le-nombre

## Fonctionnement :
1- L'ordinateur génère un nombre aléatoire entre 1 et 100.
2- Le joueur entre une proposition.
3- Le programme compare la proposition avec le nombre aléatoire :
  Si la proposition est trop petite, le programme demande d'essayer encore.
  Si la proposition est trop grande, il fait la même chose.
  Si la proposition est correcte, le joueur gagne et le programme affiche le nombre d'essais.

## Explication du code :
- rand() % 100 + 1 génère un nombre aléatoire entre 1 et 100.
- La boucle do...while permet de continuer à demander une proposition tant que l'utilisateur n'a pas trouvé le nombre secret.
À chaque tentative, l'ordinateur donne un indice pour dire si le nombre à deviner est plus grand ou plus petit.
