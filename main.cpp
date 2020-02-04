#include <iostream> // Inclut la bibliothèque iostream (affichage de texte)
#include <vector>
#include <fstream>
#include "math.h"


using namespace std; // Indique quel espace de noms on va utiliser





/*
Fonction principale "main"
Tous les programmes commencent par la fonction main
*/

int main()
{
    /*string name("Mr. Robot");
    int number;

    cout << "Hello world!" << endl<<"What is your name ?"<<endl; // Affiche un message
    getline(cin, name); //On remplit cette case avec toutela ligne que l'utilisateur a écrit
    cout << "Welcome "<<name<<endl;
    cout<<"What's your number?"<<endl;
    cin>>number;
    cout<<"+2 :"<<ajouteDeux(number)<<endl;*/

    cout << "Hello player 1, please choose a word :"<<endl;
    cin>>word;

    cout << "Hello player 2, guess the word : "<<mixedWord<<endl;
    cin>>tryWord;

    while(tryWord == word) do{
        cout << "wrong, sorry. Try again : "<<mixedWord<<endl;
        cin>>tryWord;
    }

    cout << "Congrats! you found it :)"<<endl;

    return 0; // Termine la fonction main et donc le programme
}

