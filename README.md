<p align="center">
  <img src="https://github.com/byaliego/42-project-badges/blob/main/badges/ft_printf.png?raw=true">
</p>

# Projet Printf

Le projet Printf est un projet de l'école 42 qui consiste à recoder la fonction printf de la bibliothèque standard C. Le but est de comprendre le fonctionnement de cette fonction, d'apprendre à manipuler les arguments de variable, ainsi que de créer un système de formatage de texte efficace.

## Fonctionnalités disponibles

La fonction `ft_printf` a les mêmes fonctionnalités que la fonction `printf` de la bibliothèque standard C, à l'exception de certaines fonctionnalités avancées. Les fonctionnalités disponibles incluent :

- Affichage de chaînes de caractères
- Affichage de caractères
- Affichage d'entiers (decimal, hexadecimal, unsigned)
- Affichage de pointeurs
- Affichage du signe pourcentage

## Utilisation

Pour utiliser la fonction `ft_printf` dans votre projet, vous devez inclure le fichier header "ft_printf.h". Ensuite, vous pouvez utiliser la fonction `ft_printf` comme vous le feriez avec la fonction `printf` de la bibliothèque standard C.

## Compilation

Pour compiler le projet, vous pouvez utiliser le makefile fourni. La commande `make` compilera la librairie et créera un binaire nommé `libftprintf.a`. Vous pouvez ensuite inclure cette bibliothèque dans votre projet en utilisant l'option `-L` suivie du chemin du dossier contenant la bibliothèque et l'option `-lftprintf` lors de la compilation de votre programme.
