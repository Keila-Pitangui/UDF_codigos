# UDF_codigos

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 float uva, pessego, banana= 2.5; 
 int quantBanana, quantUva, quantPessego, produto, contador;
 int resp1, resp2, resp3;
 float subTotal1, subTotal2, subTotal3, imposto, valorFinal1, valorFinal2, valorFinal3, valorCompra;

int main (){

imposto = 0.05;
contador =
resp1 = 0;
banana = 2.50;
uva = 6.5;
pessego = 10.20;

	while (contador==1) 
	{
    printf("Qual produto voce deseja comprar? \n");
	printf("[1] - Banana \n");
	printf("[2] - Uva \n");
	printf("[3] - Pessego \n");
    scanf("%d", &produto); 
    
      if (produto==1) 
	   {
		printf("quantos kilos de banana voce deseja?\n");
        scanf("%d", &quantBanana);
        subTotal1 = banana * quantBanana;
        printf("O valor total sem imposto e R$ %.2f: \n ", subTotal1);
        valorFinal1 = subTotal1 + (subTotal1 * 0.05);
        printf("O valor total com imposto e R$ %.2f\n ", valorFinal1);
        printf("Deseja comprar mais algum produto? Digite 1 para SIM ou 0 para NAO. \n");
        scanf("%d", &contador);
	}

	 if (produto==2) 
	   {
		printf("quantos kilos de uva voce deseja?\n");
        scanf("%d", &quantUva);
        subTotal2 = uva * quantUva;
        printf("O valor total sem imposto e R$ %.2f \n ", subTotal2);
        valorFinal2 = subTotal2 + (subTotal2 * 0.05);
        printf("O valor total com imposto e R$ %.2f\n ", valorFinal2);
        printf("Deseja comprar mais algum produto? Digite 1 para SIM ou 0 para NAO. \n");
        scanf("%d", &contador);
		}
		
		else if (produto==3)
		{
			printf("Quantos kilos de pessego deseja comprar?\n");
            scanf("%d", &quantPessego);
            subTotal3 = pessego * quantPessego;
            printf("O valor total sem imposto e R$ %.2f\n ", subTotal3);
            valorFinal3 = subTotal3 + (subTotal3 * 0.05);
            printf("O valor total com imposto e R$ %.2f\n", valorFinal3);
            printf("Deseja comprar mais algum produto? Digite 1 para SIM ou 0 para NAO \n");
            scanf("%d", &contador);
      }
      
      if (contador==0)
      {
      	valorCompra= valorFinal1+valorFinal2+valorFinal3;
      	printf("O valor da sua compra e %.2f \n", valorCompra);
      	printf("Obrigada por sua compra!\nVolte sempre :)");
	  }
      
      
}
}
