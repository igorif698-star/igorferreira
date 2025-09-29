#include "funcoes.h"

float metabol_masculino(float peso, float altura, float idade) {
    // Coloque aqui a fórmula correta
    return 66.5 + (13.75 * peso) + (5.003 * altura) - (6.755 * idade);
}

float metabol_feminino(float peso, float altura, float idade) {
    return 4447.593 + (9.247 * peso) + (3.098 * altura) - (4.330 * idade);
}