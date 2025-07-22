# 📝 holbertonschool-printf

Une implémentation personnalisée de la fonction `printf` en langage C, développée dans le cadre du cursus Holberton School.

## 📋 Table des matières

- [Description](#description)
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Spécificateurs de format supportés](#spécificateurs-de-format-supportés)
- [Structure du projet](#structure-du-projet)
- [Exemples](#exemples)
- [Compilation](#compilation)
- [Tests](#tests)
- [Auteurs](#auteurs)

## 🎯 Description

Ce projet implémente une version simplifiée de la fonction `printf` de la bibliothèque standard C. La fonction `_printf` produit une sortie selon un format spécifié et écrit sur la sortie standard.

## ✨ Fonctionnalités

- ✅ Gestion des spécificateurs de format de base
- ✅ Support des arguments variables
- ✅ Retourne le nombre de caractères imprimés
- ✅ Gestion des erreurs pour les spécificateurs non reconnus
- ✅ Code conforme aux standards de codage Holberton

## 🚀 Installation

```bash
# Cloner le repository
git clone https://github.com/JordannM83/holbertonschool-printf.git

# Naviguer dans le dossier
cd holbertonschool-printf

# Compiler le projet
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf_test
```

## 💻 Utilisation

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("Character: %c\n", 'A');
    _printf("Number: %d\n", 42);
    _printf("Integer: %i\n", -123);
    _printf("Percent sign: %%\n");
    return (0);
}
```

## 📝 Spécificateurs de format supportés

| Spécificateur | Description | Exemple |
|---------------|-------------|---------|
| `%c` | Caractère unique | `_printf("%c", 'A')` → `A` |
| `%s` | Chaîne de caractères | `_printf("%s", "Hello")` → `Hello` |
| `%d` | Entier décimal signé | `_printf("%d", 42)` → `42` |
| `%i` | Entier décimal signé | `_printf("%i", -123)` → `-123` |
| `%%` | Caractère de pourcentage littéral | `_printf("%%")` → `%` |

## 📁 Structure du projet

```
holbertonschool-printf/
├── main.h              # Fichier d'en-tête principal
├── _printf.c           # Fonction principale _printf
├── get_format.c        # Gestionnaire des spécificateurs de format
├── format.c            # Fonctions d'impression pour chaque format
├── _putchar.c          # Fonction pour imprimer un caractère
├── man_3_printf        # Page de manuel
└── README.md           # Ce fichier
```

### Description des fichiers

#### `main.h`
Contient toutes les déclarations de fonctions et la structure `print_t` utilisée pour mapper les spécificateurs aux fonctions.

#### `_printf.c`
Implémente la fonction principale qui :
- Parse la chaîne de format
- Identifie les spécificateurs de format
- Appelle les fonctions appropriées
- Compte les caractères imprimés

#### `get_format.c`
Contient la fonction `get_format_func` qui :
- Recherche le spécificateur dans le tableau de formats
- Retourne un pointeur vers la fonction appropriée

#### `format.c`
Implémente les fonctions d'impression :
- `print_char()` - Imprime un caractère
- `print_string()` - Imprime une chaîne
- `print_percent()` - Imprime le caractère %
- `print_int()` - Imprime un entier (spécificateur %i)
- `print_decimal()` - Imprime un entier décimal (spécificateur %d)

## 🔧 Compilation

Le projet utilise les flags de compilation suivants pour garantir la qualité du code :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o test_printf
```

### Flags utilisés :
- `-Wall` : Active tous les avertissements principaux
- `-Werror` : Traite les avertissements comme des erreurs
- `-Wextra` : Active des avertissements supplémentaires
- `-pedantic` : Respecte strictement le standard C
- `-std=gnu89` : Utilise le standard GNU C89

## ✅ Tests

Pour exécuter les tests :

```bash
# Compiler
make

# Exécuter les tests
./test_printf
```

### Sortie attendue :
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
```

## 🔍 Exemples d'utilisation

### Exemple 1 : Chaînes de caractères
```c
#include "main.h"

int main(void)
{
    int len;
    
    len = _printf("Hello %s, welcome to %s!\n", "Alice", "Holberton");
    _printf("Printed %d characters\n", len);
    
    return (0);
}
```

### Exemple 2 : Caractères et nombres
```c
#include "main.h"

int main(void)
{
    char grade = 'A';
    int score = 95;
    
    _printf("Your grade is: %c\n", grade);
    _printf("Your score: %d points\n", score);
    _printf("Age: %i years old\n", 25);
    _printf("Percentage symbol: %%\n");
    
    return (0);
}
```

### Exemple 3 : Nombres négatifs et zéro
```c
#include "main.h"

int main(void)
{
    int positive = 42;
    int negative = -17;
    int zero = 0;
    
    _printf("Positive: %d\n", positive);
    _printf("Negative: %i\n", negative);
    _printf("Zero: %d\n", zero);
    
    return (0);
}
```

## 🛠️ Fonctionnement interne

### Algorithme principal :

1. **Initialisation** : Setup des variables et de `va_list`
2. **Parsing** : Parcours caractère par caractère de la chaîne de format
3. **Détection** : Identification des spécificateurs (`%c`, `%s`, `%d`, `%i`, `%%`)
4. **Exécution** : Appel de la fonction appropriée pour chaque spécificateur
5. **Comptage** : Suivi du nombre de caractères imprimés
6. **Retour** : Retourne le nombre total de caractères

### Gestion des erreurs :
- Spécificateurs non reconnus : Imprime littéralement `%` + caractère
- Format se terminant par `%` : Arrête le traitement
- Chaîne NULL : Gérée dans `print_string()`

## 🤝 Contribution

Ce projet fait partie du cursus Holberton School. Les contributions sont limitées aux étudiants du projet.

## 📄 Licence

Ce projet est développé à des fins éducatives dans le cadre de Holberton School.

## 👥 Auteurs

- **JordannM83** - *Développeur principal* - [GitHub](https://github.com/JordannM83)

---

*Projet développé avec ❤️ à Holberton School*