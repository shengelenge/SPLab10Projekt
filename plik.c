#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {

	int liczba; // szukana liczba
		srand( time( NULL ) );
		liczba = rand()%100;
	
	int x=-1; // liczba podana przez uzytkownika	
	printf("Zgadnij liczbe\n");
		do{
      scanf("%d", &x);
		  if (x>liczba) {
		  printf("szukana liczba jest mniejsza\n");
		  }
		    if (x<liczba){
		    printf("szukana liczba jest wienksza\n");	
		    }
		      if(x==liczba){
		      printf("zgadles");
          break;
		      }
		} while ( x !=liczba);
return 0;

}
