#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {

	int liczba; // szukana liczba

	srand(time(NULL));

	liczba = rand() % 101;

	int n;

	do {
        	printf("Podaj cyfre z zakresu od 0 do 100: ");
        	scanf("%d", &n);

        	if (n < liczba)
            		printf("Za mala liczba.\n");
        	else if (n > liczba)
            		printf("Za duza liczba.\n");
	} while (n != liczba);

	printf("Poprawna liczba! Gratualcje!\n");

	return 0;

}
