#include <stdio.h>

int main()
{
    int i, peso;
    float minutos, horas;
    
    peso = 50000;
    
    for (i = 1; i<=peso; i++){
        
        printf("peso = %d\n", peso);
        if(peso == 0){
            break;
        }
        else{
            
        peso -= 500;
        minutos += 3;
        printf("minutos = %.2f\n", minutos);
        horas = minutos/60;
        printf("horas = %.2f\n", horas);
        
        }
    }
    
    printf("A pedra de gelo irá derreter completamente em %.2f horas", horas);
    
    return 0;
    
}