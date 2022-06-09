#include<stdio.h>

int main()
{
	int menu, vista, prazo, valorv, valorp, total1 = 0, total2 = 0;
	do{
	printf("LOJAS\nLPTI\n\n(1) VENDAS A VISTA\n(2) VENDAS A PRAZO\n(3) RELATORIOS DE COMPRAS\n(4) FIM\nOpcao: ");
	scanf("%d", &menu);
	
	if(menu == 1)
	{
		valorv = valorv + 1;
		printf("Digite o valor da compra: ");
		scanf("%d", &vista);
		total1 = total1 + vista;
	}
	if(menu == 2)
	{
		valorp = valorp + 1;
		printf("Digite o valor da compra: ");
		scanf("%d", &prazo);
		total2 = total2 + prazo;
	}
	if(menu == 3)
	{
		printf("Compras\n\nA vista: %d\nTotal: %d\n\nA prazo: %d\nTotal: %d\n", valorv,total1, valorp, total2);
	}
	}while(menu != 4);
}
