#include "registros.h"

void mostrar_registro(unsigned long *reg)
{
	int i;
	for(i=0;i<=12;i++)
	{
		printf("R%d: %d\n", i, reg[i]);
	}
}
