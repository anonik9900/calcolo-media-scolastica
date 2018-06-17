#include <iostream>
#include<windows.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

int voto0;
int voto1;
int voto2;
int voto3;
int voto4;
int voto5;
int voto6;
int voto7;
int voto8;
int voto9;
int quantita;
int media;

// Questa funzione di tipo void colora il testo in base alla rispota dell'utente
int coloretesto(char a)
{
	switch (a)
	{
	case '1': system("color 8"); break;
	case '2': system("color 9"); break;
	case '3': system("color a"); break;
	case '4': system("color b"); break;
	case '5': system("color c"); break;
	case '6': system("color d"); break;
	case '7': system("color e"); break;
	case '8': system("color f"); break;
	}
	return a;
}

int coloresfondo(char a)
{
	switch (a)
	{
	case '1': system("color nullc"); break;
	}
	return a;
}

int main()

/* Background colours:		Foregorund colours:
	0 = Black				8 = Gray
	1 = Blue				9 = Light Blue
	2 = Green				A = Light Green
	3 = Aqua				B = Light Aqua
	4 = Red				C = Light Red
	5 = Purple			D = Light Purple
	6 = Yellow			E = Light Yellow
	7 = White				F = Bright White
*/


{

    // Dichiarazione caratteri t(testo)  e stringa risposta
	char t;
	string risposta;
	// Richiesta dell'input per il colore del testo
	cout << "Ciao! Di che colore vorresti il testo? " << endl;
	// Colori disponibili da scegliere per il testo
	cout << "1. Grigio\n2. Blu\n3. Verde Chiaro\n4. Celeste\n5. Rosso Chiaro\n6. Viola Chiaro\n7. Giallo Chiaro\n8. Bianco\n";
	// Input per il colore del testo
	cin >> t;
	// Funzione colore testo
	coloretesto(t);
	// Svuotamento console
	system("cls");
	coloretesto(t);


    HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
if(hStdOut==NULL)


    //Titolo programma

    cout << "Calcolo Media Scolastica"<< endl;
    cout << "Calcolo Media Scolastica"<< endl;
    cout << "" <<endl;
    cout << " Sviluppato da Nicholas Impieri" << endl;

    cout << "---------------------------------------";
    cout << ""<<endl;

    cout << ""<<endl;

    //Funzioni
    selezione:

    cout << "Quanti voti hai ? ";
    cin >> quantita;

    cout<<""<<endl;
    cout <<""<<endl;



   if (quantita<=2) {

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN); //stringa che cambia il colore in verde

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout<<"Seleziona il secondo voto ";
    cin>> voto1;
    cout<<""<<endl;

    media = (voto0+voto1)/2;

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
    if (media<=5){
        cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }


    else{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }

   }

 else if (quantita==3){

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout<<"Seleziona il secondo voto ";
    cin>> voto1;
    cout<<""<<endl;

    cout<<"Seleziona il terzo voto ";
    cin>> voto2;
    cout<<""<<endl;

    media = (voto0+voto1+voto2)/quantita;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        if (media<=5){
        cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }

    else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }

 }

 else if (quantita==4){

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout <<"Seleziona il secondo voto ";
    cin >> voto1;
    cout <<""<<endl;

    cout <<"Seleziona il terzo voto ";
    cin >> voto2;
    cout <<""<<endl;

    cout <<"Seleziona il quarto voto ";
    cin >> voto3;
    cout<<""<<endl;

    media =(voto0+voto1+voto2+voto3)/quantita;

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            if (media<=5){
        cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }

    else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }

 }
 else if (quantita==5){

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout <<"Seleziona il secondo voto ";
    cin >> voto1;
    cout <<""<<endl;

    cout <<"Seleziona il terzo voto ";
    cin >> voto2;
    cout <<""<<endl;

    cout <<"Seleziona il quarto voto ";
    cin >> voto3;
    cout<<""<<endl;

    cout<<"Seleziona il quinto voto ";
    cin>> voto4;
    cout<<""<<endl;

    media =(voto0+voto1+voto2+voto3+voto4)/quantita;

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            if (media<=5){
        cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }

    else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }
 }

 else if (quantita==6){

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout <<"Seleziona il secondo voto ";
    cin >> voto1;
    cout <<""<<endl;

    cout <<"Seleziona il terzo voto ";
    cin >> voto2;
    cout <<""<<endl;

    cout <<"Seleziona il quarto voto ";
    cin >> voto3;
    cout<<""<<endl;

    cout<<"Seleziona il quinto voto ";
    cin>> voto4;
    cout<<""<<endl;

    cout<<"Seleziona il sesto voto ";
    cin>> voto5;
    cout<<""<<endl;


    media =(voto0+voto1+voto2+voto3+voto4+voto5)/quantita;

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            if (media<=5){
        cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }

    else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }

 }

 else if (quantita==7){

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout <<"Seleziona il secondo voto ";
    cin >> voto1;
    cout <<""<<endl;

    cout <<"Seleziona il terzo voto ";
    cin >> voto2;
    cout <<""<<endl;

    cout <<"Seleziona il quarto voto ";
    cin >> voto3;
    cout<<""<<endl;

    cout<<"Seleziona il quinto voto ";
    cin>> voto4;
    cout<<""<<endl;

    cout<<"Seleziona il sesto voto ";
    cin>> voto5;
    cout<<""<<endl;

    cout<<"Seleziona il settimo voto ";
    cin>>voto6;
    cout<<""<<endl;


    media =(voto0+voto1+voto2+voto3+voto4+voto5+voto6)/quantita;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
    if (media<=5){
    cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }

    else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }
 }

 else if (quantita==8){

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout <<"Seleziona il secondo voto ";
    cin >> voto1;
    cout <<""<<endl;

    cout <<"Seleziona il terzo voto ";
    cin >> voto2;
    cout <<""<<endl;

    cout <<"Seleziona il quarto voto ";
    cin >> voto3;
    cout<<""<<endl;

    cout<<"Seleziona il quinto voto ";
    cin>> voto4;
    cout<<""<<endl;

    cout<<"Seleziona il sesto voto ";
    cin>> voto5;
    cout<<""<<endl;

    cout<<"Seleziona il settimo voto ";
    cin>>voto6;
    cout<<""<<endl;

    cout<<"Seleziona l'ottavo voto ";
    cin>>voto7;
    cout<<""<<endl;


    media =(voto0+voto1+voto2+voto3+voto4+voto5+voto6+voto7)/quantita;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            if (media<=5){
        cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }

    else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }
 }

 else if (quantita==9){

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout <<"Seleziona il secondo voto ";
    cin >> voto1;
    cout <<""<<endl;

    cout <<"Seleziona il terzo voto ";
    cin >> voto2;
    cout <<""<<endl;

    cout <<"Seleziona il quarto voto ";
    cin >> voto3;
    cout<<""<<endl;

    cout<<"Seleziona il quinto voto ";
    cin>> voto4;
    cout<<""<<endl;

    cout<<"Seleziona il sesto voto ";
    cin>> voto5;
    cout<<""<<endl;

    cout<<"Seleziona il settimo voto ";
    cin>>voto6;
    cout<<""<<endl;

    cout<<"Seleziona l'ottavo voto ";
    cin>>voto7;
    cout<<""<<endl;

    cout<<"Seleziona il nono voto ";
    cin>>voto8;
    cout<<""<<endl;



    media =(voto0+voto1+voto2+voto3+voto4+voto5+voto6+voto7+voto8)/quantita;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            if (media<=5){
        cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }

    else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }
 }

 else if (quantita==10){

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout <<"Seleziona il secondo voto ";
    cin >> voto1;
    cout <<""<<endl;

    cout <<"Seleziona il terzo voto ";
    cin >> voto2;
    cout <<""<<endl;

    cout <<"Seleziona il quarto voto ";
    cin >> voto3;
    cout<<""<<endl;

    cout<<"Seleziona il quinto voto ";
    cin>> voto4;
    cout<<""<<endl;

    cout<<"Seleziona il sesto voto ";
    cin>> voto5;
    cout<<""<<endl;

    cout<<"Seleziona il settimo voto ";
    cin>>voto6;
    cout<<""<<endl;

    cout<<"Seleziona l'ottavo voto ";
    cin>>voto7;
    cout<<""<<endl;

    cout<<"Seleziona il nono voto ";
    cin>>voto8;
    cout<<""<<endl;

    cout<<"Seleziona il decimo voto";
    cin>>voto9;
    cout<<""<<endl;



    media =(voto0+voto1+voto2+voto3+voto4+voto5+voto6+voto7+voto8+voto9)/quantita;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
            if (media<=5){
        cout<<"La tua media non supera il 5, fai attenzione"<<endl;
    }

    else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    cout<<"La tua media e' di: "<<media;

    }

 }


//Fine Medie


/*Note Sviluppatore
==================================================================================
Si ricorda che ovviamente solo i voti del secondo quadrimestre vengono
contati per fare media, perciò per evitare eventuali overflow e/o malfunzionamenti
ho preferito limitare il numero di voti che si possono avere.

Per avere un numero superiori di voti è necessario modificare il sorgente
====================================================================================

SetConsoleTextAttribute(hStdOut,FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN); //Per avere il colore del testo bianco
Fine Note Sviluppatore */


//Errore
else if (quantita>=11){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
    cout<<"errore ! tipo di unita' non supportato prova con un valore piu' basso"<<endl;
    goto  selezione;
}

    return 0;
}
