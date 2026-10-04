# TDs_CPLUSPLUS

Premier TD de C++ composé de deux exercices.

## Architecture

```text
TDs_CPLUSPLUS/
└── TD1/
    ├── README.md
    ├── ExerciceI/
    │   ├── main.cpp
    │   ├── premier_header.hpp
    │   ├── premier_header.cpp
    │   ├── my_classe.hpp
    │   └── my_classe.cpp
    │
    └── ExerciceII/
        ├── main.cpp
        ├── Complexe2D.hpp
        └── Complexe2D.cpp
```

## Affichage dans l'Exercice II

Dans le `main`, des `if` sont utilisés lors de l'affichage des nombres complexes afin de gérer le signe de la partie imaginaire.

Cela permet d'éviter des affichages incorrects ou peu lisibles avec des combinaisons de signes comme `+-`, `-+` ou encore `+ -`, etc. et d'afficher directement le signe adapté à la valeur de la partie imaginaire.

## Compilation et exécution

### Exercice I

Si les commandes sont à lancer depuis le dossier `TD1` :

```bash
cd ExerciceI
```

Compiler :

```bash
g++ main.cpp premier_header.cpp my_classe.cpp -o exerciceI
```

Exécuter :

```bash
./exerciceI
```

### Exercice II

Après l'Exercice I, revenir dans le dossier `TD1` :

```bash
cd ..
```

Puis entrer dans le dossier `ExerciceII` :

```bash
cd ExerciceII
```

Compiler :

```bash
g++ main.cpp Complexe2D.cpp -o exerciceII
```

Exécuter :

```bash
./exerciceII
```