/*ARQUIVO CALCULADORA.H*/


// Cálculo do IMC: chamada
double calculo(double p, double a);


// Cálculo do IMC: implementação
double calculo(double p, double a) {
    if (p <= 0 || p > 1000)
    {
        return -1;
    }
    if (a <= 0 || a >= 3.5)
    {
        return -1;
    }
    return (p/(a*a));
}