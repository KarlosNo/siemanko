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

/*void disp_reference(int& ref_val) {
	printf("Value of reference: %d", ref_val);
	ref_val++;
}*/


// argumenty do funkcji(w jêzyku C) mozna dodawac na dwa sposoby: przez wartosc i przez wskaznik


void disp_copy_val(int val) {
	printf("Value of copy: %d\n", val);
	val++;
}

void disp_pointer_value(int* p_val) {
	printf("Value of copy: %d\n", *p_val);
	*p_val += 1;
}


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

	int int_value = 45;

	disp_copy_val(int_value);

	disp_copy_val(int_value);


	int_value = 90;

	disp_pointer_value(&int_value);

	printf("%d\n", int_value);

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