/* Name : Djouko Mouafo , Suzie
 Testat 1
 Datum : 25.10.2023

 */
 // Aufgabe Teil a 

#include <stdio.h>
int main() {

	char Eingabe;
	//int summe;
	int zaeler = 0;
	int z1, z2;
	int quersumme = 0;
	int var;
	printf("Geben sie etwas ein \n");


	do {
		// Aufgabe Teil c
		Eingabe = getchar();// eingabe der Benutzer 
		zaeler++; // zaehlt die Anzahl auf Zeichen 
		var = Eingabe - '0'; // wird überprueft , ob eine Buchstabe ein Ziffer ist oder nicht 
		if ((Eingabe <= '9') && (Eingabe >= '0')) {
			quersumme += var;

		}
		putchar(Eingabe);
		// Aufgabe Teil b 
		// oberlaengen-Buchstaben 
		// Wenn die folgenden Zeichen in die Eingabe des Users vorkommt , erhoehen wir den zähler z1 auf 1 
		switch (Eingabe) {
		case 'b':
		case 'd':
		case 'f':
		case 'h':
		case 'k':
		case 'l':
		case 't':
			z1++;
			break;
			// Unterlaengen-Buchstaben 
			// Wenn die folgenden Zeichen in die Eingabe des Users vorkommt , erhoehen wir den zähler z2 auf 1 
		case 'g':
		case 'j':
		case 'p':
		case 'q':
		case 'y':
			z2++;
			break;
		default:

			break;

		}

	} while (Eingabe != EOF);
	printf("\n Die Quersumme ist %i\n", quersumme);
	printf("Die Anzahl gelesener Zeichen ist %i\n", zaeler);
	printf("Die Anzahl oberlaengen-Buchstaben ist %i\n", z1);
	printf("Die Anzahl unterlaengen-Buchstaben ist %i\n", z2);

	/*Schreiben Sie ein Programm, welches Buchstaben vom Eingabestrom
	stdin liest und auf den Ausgabestrom stdout wieder ausgibt, solange
	bis der Benutzer die Eingabe mit STRG-D beendet.*/


	return 0;
}
