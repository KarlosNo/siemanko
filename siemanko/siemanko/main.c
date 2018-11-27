#include <stdio.h>					// dyrektywy preprocesora zaczynaj¹ sie od #
#include "extern_zmienna_plik.h"

int global = 19; // zmienna zadeklarowana globalnie (kazda zmienna globalna jest zarazem statyczna)
#define DUPA2

#define PI 3.14
#define print_pi() printf("PI: %f", PI);


void operatory_logiczne();
void function_zmienna_statyczna();
void function_zmienna_wykla();
void wskazniki();

void main()
{

	printf("Siemanko\n------------------------\n");

	printf("Zmienna extern: %d\n------------------------\n", extern_zmienna); // o chuj chodzi ze bez externa w "extern_zmienna_plik.h" tez dziala

	printf("Zmienna globalna: %d\n------------------------\n", global);
	#ifdef DUPA		//dyrektywa, jesli zdefiniowana dupa to wyswietl
		printf("Zmienna globalna: %d\n------------------------\n", global);
	#endif

	function_zmienna_statyczna();	// wywo³anie funkcji ze zmienn¹ statyczna
	function_zmienna_statyczna();

	printf("\n------------------------\n");

	function_zmienna_wykla();		// wywo³anie funkcji ze zmienn¹ zwykla
	function_zmienna_wykla();

	printf("\n------------------------\n");

	print_pi();

	printf("\n------------------------\n");

	operatory_logiczne();

	printf("\n------------------------\n");

	wskazniki();


	printf("\n\n");
	system("pause");
	return 0;
}
/*-------------------------------------------------------------------------------------------*/
void function_zmienna_statyczna()
{
	static int var = 0;
	var++;
	printf("Zmienna statyczna: %d", var);
}
/*-------------------------------------------------------------------------------------------*/
void function_zmienna_wykla()
{
	int var1 = 0;
	var1++;
	printf("Zmienna zwykla: %d", var1);
}
/*-------------------------------------------------------------------------------------------*/
void operatory_logiczne()
{
	int v1 = 1, v2 = 2;

	if (v1 == 1 && v2 == 2)
	{
		printf("if &&\n");
	}

	if (v1 == 1 || v2 == 144)
	{
		printf("if ||");
	}
}
/*-------------------------------------------------------------------------------------------*/
void wskazniki() // a co to jest referencja?
{
	int Dupa2 = 10;
	int *PointerToDupa2 = &Dupa2;	
	//int* PointerToDupa2 = &Dupa2;?

	printf("adres Dupa2: %p \n", PointerToDupa2);
	printf("adres Dupa2: %p \n", &Dupa2);
	printf("wartosc Dupa2: %d \n", *PointerToDupa2);

	*PointerToDupa2 = 12;
	printf("adres Dupa2: %p \n", PointerToDupa2);
	printf("adres Dupa2: %p \n", &Dupa2);
	printf("wartosc Dupa2: %d \n", *PointerToDupa2);

}