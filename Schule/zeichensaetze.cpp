#include <cstdio>

int main(int argc, char* argv[])
{
	/* 
	 * Umlaute 
	 */
	const char  AE_BIG = static_cast<char>(142);
	const char  UE_BIG = static_cast<char>(154);
	const char  OE_BIG = static_cast<char>(153);
	const char DOE_BIG = static_cast<char>(157);
	const char      AE = static_cast<char>(132);
	const char      UE = static_cast<char>(129);
	const char      OE = static_cast<char>(148);
	const char     DOE = static_cast<char>(155);

	/*
	 * Sonderzeichen
	 */
	const char  DEGREE = static_cast<char>(248);
	const char  SQUARE = static_cast<char>(253);
	const char   CUBIC = static_cast<char>(252);

	printf("Die %cnderungen reichen v%cllig aus.\n", AE_BIG, OE);
	printf("Temperatur: 32%cC\n", DEGREE);
	printf("%c=121mm,A=123 mm%c,V=124mm%c\n", DOE_BIG, SQUARE, CUBIC);

	getchar();
	return 0;
}