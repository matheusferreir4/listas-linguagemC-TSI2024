#!/bin/bash

# Verifica se pelo menos um argumento foi passado
if [ $# -eq 0 ]; then
    echo "Uso: $0 <numero_da_pasta>"
    exit 1
fi

# Muda para o diretório pai
cd ..

# Loop através de todos os argumentos passados
for numero in "$@"; do
    nome_pasta="atividade${numero}"

    # Verifica se a pasta existe
    if [ -d "$nome_pasta" ]; then
        cd "$nome_pasta"

        # Verifica se o arquivo main.c inclui math.h
        if grep -q "#include <math.h>" "main.c"; then
            # Compila o arquivo main.c com a flag -lm
            if gcc main.c -o a.out -lm; then
                echo "Compilação bem-sucedida em '$nome_pasta' com -lm."
            else
                echo "Erro na compilação em '$nome_pasta' com -lm."
            fi
        else
            # Compila o arquivo main.c sem a flag -lm
            if gcc main.c -o a.out; then
                echo "Compilação bem-sucedida em '$nome_pasta'."
            else
                echo "Erro na compilação em '$nome_pasta'."
            fi
        fi

        # Executa o programa
        ./a.out

        # Volta para o diretório pai
        cd ..
    else
        echo "A pasta '$nome_pasta' não existe. Pulando..."
    fi
done
