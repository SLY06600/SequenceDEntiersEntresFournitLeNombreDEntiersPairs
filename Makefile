# Nom de l'executable
EXEC = bin/SequenceDEntiersEntresFournitLeNombreDEntiersPairs

# Dossier source
SRC = src/main.c

# Compileur et options
CC = gcc
CFLAGS = -Wall

# Règle par defaut : créer l'exécutable
all: $(EXEC)

# Créer l'exécutable
$(EXEC): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

# Supprimer les fichier générés
clean: 
	rm -f $(EXEC)

.PHONY: all clean	
