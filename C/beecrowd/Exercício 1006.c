/******************************************************************************
Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. 
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).
09/05/2025
*******************************************************************************/
#include <stdio.h>

int main (void)
{
    double a, b, c;
    scanf("%lf" "%lf" "%lf", &a, &b, &c);
    
    double m_a = a * 2.0;
    double m_b = b * 3.0;
    double m_c = c * 5.0;
    
    double media = ((m_a + m_b + m_c) / 10.0);
    
    printf("MEDIA = %.1lf\n", media);
    
    return 0;
}
