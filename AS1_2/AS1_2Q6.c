#include <stdio.h>

int main()
{
    float Carlos, Joao;
    int RendaFixa, Poupanca, i, meses, diferenca;
    Carlos = 3000;
    Joao = 1000;
    meses = 0;
    
    while(Joao < Carlos){
        Carlos += Carlos * 0.02;
        Joao += Joao * 0.05;
        meses ++;
    }
            
    diferenca = Joao - Carlos;
    printf("Valor de Carlos: %.2f\n", Carlos);
    printf("Valor de Joao: %.2f\n", Joao);
    printf("Após %d meses, o valor de João é %dR$ superior ao de Carlos.\n", meses, diferenca);

    return 0;
}



