#include <stdio.h>
#include <string.h>

int value(char);

int desitkova(char*, int);
 
int main()
{
	//hodnota cisla pro prevod
	char cislo[] = "10";
	//hodnota soustavy ze ktere cislo pochazi
	int soustava = 2;
	printf("Cislo %s v soustave %d je v desitkove soustave %d\n", cislo, soustava, desitkova(cislo, soustava));
	return 0;
}

int value(char c)
{
	if (c >= '0' && c <= '9')
		return (int)c - '0';
	else
		return (int)c - 'A' + 10;
}

int desitkova(char *cislo, int soustava)
{
	int delka = strlen(cislo);
	int pow = 1;
	int num = 0;
	int i;

	for (i = delka - 1; i >= 0; i--)
	{
		if (value(cislo[i]) >= soustava)
		{
			printf("Spatne cislo");
			return 0;
		}

		num = num + (value(cislo[i]) * pow);
		pow = pow * soustava;
	}

	return num;
}