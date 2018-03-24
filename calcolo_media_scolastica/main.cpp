#include <iostream>

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

int main()

{
    //Titolo programma
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

    cout<<"Seleziona il primo voto ";
    cin >> voto0;
    cout<<""<<endl;

    cout<<"Seleziona il secondo voto ";
    cin>> voto1;
    cout<<""<<endl;

    media = (voto0+voto1)/2;

    cout<<"La tua media e' di: "<<media;

   }

 else if (quantita==3){
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

    cout<<"La tua media e' di: "<<media;
 }

 else if (quantita==4){

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

    cout << "La tua media e' di: " <<media;

 }
 else if (quantita==5){

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

    cout << "La tua media e' di: " <<media;
 }

 else if (quantita==6){

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

    cout << "La tua media e' di: " <<media;

 }

 else if (quantita==7){

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

    cout << "La tua media e' di: " <<media;
 }

 else if (quantita==8){

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

    cout << "La tua media e' di: " <<media;
 }

 else if (quantita==9){

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

    cout << "La tua media e' di: " <<media;
 }

 else if (quantita==10){

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

    cout << "La tua media e' di: " <<media;

 }







else if (quantita>=11){
    cout<<"errore ! tipo di unita' non supportato prova con un valore piu' basso"<<endl;
    goto  selezione;
}

    return 0;
}
