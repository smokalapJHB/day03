#include <unistd.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int nbr;
	ft_ft(&nbr);
	printf("%d\n",nbr)
	return 0;
}
