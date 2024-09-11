#include <stdio.h>

int main(){
    float n1,n2,n3,n4,rsf;

    printf("Digite a nota do aluno do 1 bimestre: \n");
     scanf("%f",&n1);

    printf("Digite a nota do aluno do 2 bimestre: \n");
     scanf("%f",&n2);

    printf("Digite a nota do aluno do 3 bimestre: \n");
     scanf("%f",&n3);

    printf("Digite a nota do aluno do 4 bimestre: \n");
     scanf("%f",&n4);
    
    rsf = (n1 + n2 + n3 + n4) / 4;
    
    if (rsf >= 6){
     printf("Aprovado\n");   
    }

    else
    {
     printf("Reprovado\n");   
    
    }

return 0;

}