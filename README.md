# Workshop in C

## 0bjectif

Nous allons écrire des programmes C simples en utilisant les connaissances des types de données, des opérateurs, des fonctions printf et scanf.

## Pré-requis

- Types de données en langage C : Vous devez avoir une compréhension solide des types de données en C, y compris les entiers (int), les caractères (char), et les valeurs booléennes (int utilisé comme booléen).

- Opérateurs en langage C : Une connaissance des opérateurs de comparaison (==, !=, <, >, <=, >=), des opérateurs logiques (&&, ||, !), et de l'opérateur d'assignation (=) est nécessaire pour évaluer des conditions et prendre des décisions.

- Formatage de la sortie à l'aide de printf() en C : Vous devrez utiliser printf() pour afficher des résultats à l'utilisateur de manière lisible. Assurez-vous de comprendre comment formater correctement les données à l'aide de spécificateurs de format tels que %d, %c, %s, et autres.

- Saisie à l'aide de scanf() en C : Pour obtenir des données d'entrée de l'utilisateur, vous utiliserez scanf()

## Challenges

### Challenge 1 : Affichage Informations
Écrivez un programme en C qui va te permettre d'afficher vos informations personnelles : Nom, prénom , Age , Sexe et numéro de téléphone. Les données sont saisies à partir du clavier.

### Challenge 2 : Affichage Température
Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud) La formule :

C = (F-32)/1.8
### Challenge 3 : Calcule et affichage résultat en format décimal
a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant l’interface homme/machine. (a/b donne le quotient de la division, a%b donne le reste de la division)

### Challenge 4 : Moyenne et somme de 4 nombres
Écrivez un programme en C pour trouver la somme et la moyenne de quatre nombres. Prenez les entrées de l'utilisateur final. Explication : Soit trois nombres a, b et c alors, Somme = (a+b+c) et, Moyenne = somme/3

### Challenge 5 : Distance entre deux points
Ecrivez un programme C pour trouver la distance entre deux points donnés. La formule de distance est dérivée du théorème de Pythagore. Pour trouver la distance entre deux points (x1, y1) et (x2, y2), il suffit d'utiliser les coordonnées de ces paires ordonnées et d'appliquer la formule. Formule de distance Supposons que nous ayons deux points M et N, dont les coordonnées sont respectivement (x1, y1) et (x2, y2). Leur distance peut être représentée par MN et peut être calculée selon la formule ci-dessous, Le premier point (M):- (x1, y1) Deuxième point (N) : (x2, y2) Distance (MN):- √((x2-x1)² + (y2-y1)²) Exemple:- M = (4, 8) N = (12, 14) Alors la distance entre M et N est MN = √((12-4)² + (14-8)²) = √(64 + 36) = √(100) = 10

### Challenge 6 : Circonférence d'un cercle
Écrivez un programme pour trouver la circonférence d'un cercle. Prenez le rayon du cercle en entrée de l'utilisateur. La formule pour, la circonférence du cercle = 2πr ; où r est le rayon.

### Challenge 7 : Nombre entier à trois chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à trois chiffres dans l'ordre inverse sans utiliser la boucle. Par exemple, si le nombre entier est 234, son inverse est 432.

### Challenge 8 : Affichage de la valeur octale et hexadécimale équivalente
Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal. Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal.


## II. Les Conditions

Pré-requis:
- Connaissance des Types de Données : Comprendre les types de données en C, en particulier les entiers (int) et les caractères (char).

- Opérateurs de Comparaison : Être capable d'utiliser les opérateurs de comparaison tels que ==, !=, <, >, <=, >= pour évaluer des conditions.

- Structures Conditionnelles : Savoir comment utiliser les structures conditionnelles if, else if, et else pour exécuter du code en fonction de certaines conditions.

- Instruction switch-case : Avoir une compréhension de base de l'instruction switch pour gérer plusieurs cas possibles.

- Opérateurs Logiques : Connaître les opérateurs logiques tels que && (ET logique), || (OU logique) et ! (NON logique) pour combiner des conditions.

- Entrée/Sortie en C : Être capable de demander à l'utilisateur d'entrer des données à l'aide de scanf() et d'afficher des résultats avec printf().

- Conversions de Type : Comprendre comment effectuer des conversions de type au besoin.

- Boucles (le cas échéant) : Si les ### Challenges nécessitent des boucles (for, while), connaître leur fonctionnement.

### Challenge 1 : Paire ou Impaire
Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire

### Challenge 2 :
Ecrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.

### Challenge 3 :
Ecrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, il renvoie le triple de leur somme.

### Challenge 4 : Equation deuxième degré
Écrivez un programme C qui permet de calculer les solutions possible d’une équation 2ème degré.

### Challenge 5 : Programme guidé par menu pour convertir l'année
Ecrire un programme C piloté par menu pour convertir une année donnée en,

Mois
Jours
Heures
Minutes
Secondes Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire). 1 an = 365 jours 1 mois = 30 jours
### Challenge 6 :
Ecrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro, alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal à zéro.

### Challenge 7 :
Écrivez un programme pour vérifier si le caractère donné est un alphabet majuscule ou non en utilisant l'instruction conditionnelle if-else en C. Les lettres majuscules vont de 'A' à 'Z'. Les valeurs ASCII de 'A' et 'Z' sont respectivement 65 et 90. Si la valeur ASCII d'un caractère est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.

### Challenge 8 :
Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses notes. S’il a une moyenne strictement inférieure a 10, il est recalé. S’il a une moyenne entre 10 (inclus) et 12, il obtient la mention passable. S’il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien. S’il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien. S’il a une moyenne supérieure a 16 (inclus) il obtient la mention très bien. Ecrire les instructions nécessaires.

### Challenge 9 :
Ecrire un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non. Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.

### Challenge 10 :
Ecrire un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format suivant: 15-Septembre-2012.

### Challenge 11:
Ecrire un programme C qui affiche d'une manière aléatoire un des jours de la semaine.

## III. Les Boucles:

### Challenge 1: table de multiplication
Ecrire un algorithme qui demande un nombre à l’utilisateur, puis affiche sa table de multiplication de 1 à 10

### Challenge 2: pyramide d'étoile
      *
     ***
    *****
    
Écrire le programme pour avoir un pyramide d'étoile, le nombre des lignes à composer est demandé à l’utilisateur.(chaque ligne doit avoir un nombre premier d'étoiles.

### Challenge 3 :
Écrire un programme C qui lit un entier puis détermine s'il est premier ou non. On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs différents; 1 et lui-même. Ex: 2, 3, 7, 17, 101 sont tous premiers, et 4, 10, 27 ne le sont pas.

### Challenge 4 :
Écrire un programme C qui lit une série d'entiers positifs inférieurs à 100 terminée par 0. Et qui doit négliger toute entrée strictement supérieure à 100. Puis calcule et affiche la somme et le max des éléments de cette série.

### Challenge 5:
Écrire un programme C qui lit un entier et l'affiche inversée. On choisira de ne pas afficher chiffre par chiffre mais de construire l'entier inversé puis l'afficher. Ex: si l'entrée est 12345 on doit afficher l'entier 54321.