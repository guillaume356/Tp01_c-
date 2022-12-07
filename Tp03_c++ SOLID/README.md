# Rapport TP3 : Amélioration du projet morpion et puissance 4, avec les concepts S.O.L.I.D.


## Le groupe :
Le groupe est constitué de deux personnes, Guillaume Klein et William Boyard, leur numéro de groupe est le 10.


## Mise en contexte

Lors d’un précédent TP, nous avons dû faire un morpion et un jeu de puissance 4. Ce TP était a réaliser en solitaire.

Suite un a un cours sur les principes S.O.L.I.D, nous avons dû nous mettre en binôme et implanter sur un des projets les principes S.O.L.I.D. Nous avons dû choisir un projet entre les deux.

## Comparaison des solutions :
Solution de Guillaume : 
 - Morpion : Fonctionnelle
 - Puissance 4 : Non fonctionnelle
 - Respect des principes S.O.L.I.D : Non Appliqué
 - Utilisation d'une grille : Oui

Solution de William : 
  - Morpion : Fonctionnelle
 - Puissance 4 : Fonctionnelle
 - Respect des principes S.O.L.I.D : Non Appliqué
 - Utilisation d'une grille : Non

## Choix de la solution

Nous avons choisi la solution de William Boyard, car c’était la solution la plus complète entre les deux. La solution choisie avait un algorithme qui fonctionnait complètement, malgré l’absence des principes S.O.L.I.D.

## Implémentions des Principes solides :

### S/ Responsabilité unique (Single responsibility principle) :

Pour respecter ce principe nous avons dû modifier la conception de la solution :

 - On a mis en place, une classe grille pour les différents jeux. 
 - On a rajouté les classes MorpionsGame et Puissance4Game, qui gère le déroulement du jeu.
 - Les classes Puissance4 et Morpion gères la partie graphique de chaque jeu.

### O/ Ouvert/fermé (Open/closed principle) :

 - On a fait en sorte que l’affichage de la grille, la fonction de fin de partie soient réutilisables pour toute les classes.
### L/ Substitution de Liskov (Liskov substitution principle) :
### I/Ségrégation des interfaces (Interface segregation principle) :
 - Ajout des interfaces : EndGame et GameMode qui gère respectives l’issue de la partie et la partie graphique de chaque jeu.
### D/Inversion des dépendances (Dependency inversion principle) :
