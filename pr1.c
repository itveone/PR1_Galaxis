// Praktikumabgabe
// Per Anhalter durch die Galaxis - Die Frage aller Fragen
// Author: Ahmadi, Mariam (S1, REE)
// Datum: 07.10.2022
// Version: 1 (Erstabgabe)


#include <stdio.h> //Library beinhaltet die Funktion "system"
#include <stdlib.h> //Standardbibliothek


// Protoype(s) so CLANG knows
// that these method(s) exists
int ask_question(void); //Auflistung vom Proto


int main(void) // Hauptprogramm
{

    // Declaring working variables
    int ch;     // var for storing 'try again' input
    // i.e., for do-while loop condition

// Main execution of prompting user and repeat
// Do-while so that the conditional is checked
// AFTER first asking the question


    do
    {
        system("clear"); //Befehl, um das Fenster zu säubern -> Terminalcode in code50 (iPad)

        printf("Hello, User !"); //Willkommensgruß
        printf("\n");

        //Zeigt dem User die Hauptfrage
        int  answer = ask_question();

        if (answer == 42)
        {
            return 0;
        }

        printf("Unfortunately, your answer is wrong. Do you want to try it again? [y/n] ");  //Stellt dem User eine Wiederholungsfrage
        ch = getchar();
    }

    while (ch == 'y'); // Während 'y' (für yes)

    system("clear"); // Befehl, um das Fenster zu säubern
    printf("Thank you for trying !");
    printf("\n");


    // Befehl, bei erfolgreicher Ausführung des Programmes - Resetted das Programm
    return 0;
}


// Implementation of ask_question function
//
// Prompt the user with a question
// and receive input
//
// Respond to user input
// and return input value
int ask_question(void)
{
    // Variable, für den User-Imput deklarieren
    int i;

    //Stellt dem User die Hauptfrage
    printf("What is the answer to everything?\n");

    // Read the users input
    // To-Do: checking the format of the user input
    scanf("%i", &i);

    if (i == 42) //Bedingungsschleife ! Userimput => Schleife antwortet mit printf
    {
        printf("That is correct!"); // Reaktion, auf die richtige Antwort
    }
    else
    {
        printf("No\n"); //Reaktion, auf eine falsche Angabe
    }

    //Eingabepuffer löschen
    while ((getchar()) != '\n') {}

    // return answer for further use
    return i;
}
