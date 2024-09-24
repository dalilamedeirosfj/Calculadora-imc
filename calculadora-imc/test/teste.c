//Chamada das bibliotecas
#include "minunit-master/minunit.h"
#include "../src/calculadora.h" 


// Teste 1: Verifica se o IMC é calculado corretamente para valores normais
MU_TEST(test_calculo_normal) {
    double imc = calculo(200, 2);
    mu_assert_double_eq(50, imc); // O IMC esperado é 50
}

// Teste 2: Verifica se o tratamento para peso zero está funcionando perfeitamente!
MU_TEST(test_peso_zero) {
    double imc = calculo(0, 1.75);
    mu_assert_double_eq(-1, imc); // Espera-se -1 como retorno para peso inválido
}

// Teste 3: Verifica se o tratamento para altura negativa está funcionando
MU_TEST(test_altura_negativa) {
    double imc = calculo(70, -1.75);
    mu_assert_double_eq(-1, imc); // Espera-se -1 como retorno para altura inválida
}
// Teste 4: Verifica se o tratamento para altura grande demais está funcionando
MU_TEST(test_altura_grande_demais) {
    double imc = calculo(70, 175);
    mu_assert_double_eq(-1, imc); // Espera-se -1 como retorno para altura inválida
}

// Conjunto de Testes
MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_calculo_normal);
    MU_RUN_TEST(test_peso_zero);
    MU_RUN_TEST(test_altura_negativa);
	MU_RUN_TEST(test_altura_grande_demais);
}


int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
