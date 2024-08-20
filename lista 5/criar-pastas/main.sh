#!/bin/bash

# Verifica se pelo menos um argumento foi passado
if [ $# -eq 0 ]; then
    echo "Uso: $0 <numero_da_pasta> [<numero_da_pasta> ...]"
    exit 1
fi

# Muda para o diretório pai
cd ..

# Loop através de todos os argumentos passados
for numero in "$@"; do
    nome_pasta="atividade${numero}"

    # Verifica se a pasta já existe
    if [ -d "$nome_pasta" ]; then
        echo "A pasta '$nome_pasta' já existe. Pulando..."
    else
        # Cria a pasta
        mkdir -p "$nome_pasta"

        # Cria o arquivo main.c dentro da pasta
        cat <<EOL > "$nome_pasta/main.c"
#include <stdio.h>

int main() {
    printf("Hello, World!\\n");
    return 0;
}
EOL

        echo "Pasta '$nome_pasta' e arquivo 'main.c' criados com sucesso."
    fi
done
