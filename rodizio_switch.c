#include <stdio.h>

int main(){

    int final_placa;

    printf("Digite o Número do final da placa: \n");
     scanf("%d",&final_placa);

     switch(final_placa){

        case 1:
        printf("Número de Rodizio na Segunda-feira");
        break;

         case 2:
        printf("Número de Rodizio na Segunda-feira");
        break;

         case 3:
        printf("Número de Rodizio na Terça-feira");
        break;

         case 4:
        printf("Número de Rodizio na Terça-feira");
        break;

         case 5:
        printf("Número de Rodizio na Quarta-feira");
        break;

         case 6:
        printf("Número de Rodizio na Quarta-feira");
        break;

         case 7:
        printf("Número de Rodizio na Quinta-feira");
        break;

         case 8:
        printf("Número de Rodizio na Quinta-feira");
        break;

         case 9:
        printf("Número de Rodizio na Sexta-feira");
        break;

         case 0:
        printf("Número de Rodizio na Sexta-feira");
        break;

        default:
            printf("Número de placa inexistente");
        break;
     }   
      
        return 0;
     
}

