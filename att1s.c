#include <stdio.h>

int main(){

    int v1,v2,v3,v4,v5; 
    int rs, rs2, rs3,rsf;

    
    printf("Digite o primeiro numero abaixo\n");
    scanf("%d",&v1);

    printf("Digite o segundo Número abaixo\n");
    scanf("%d",&v2);

    rs= v1+v2;
    
printf("O resultado da soma dos numeros é igual %d, agora, digite um numero que ira subtrair esse resultado\n",rs);
scanf("%d", v3);

rs2 = rs-v3;

printf("O resultado da subtração dos valores é igual a %d, agora digite o numero que ira dividir o resultado dessa operação\n", rs2);
scanf("%d",v4);

rs3= v4 % rs2;

printf("O resultado da divisao é igual a %d, agora, digite o valor que ira multplicar o valor atual\n", rs3);
 scanf("%d", v5);

printf("O resultado final das operações entao é %d\n", rsf);

return 0;

}