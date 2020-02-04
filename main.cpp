#include <iostream> // Inclut la bibliothèque iostream (affichage de texte)
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "math.h"


using namespace std; // Indique quel espace de noms on va utiliser

string mixedWord(string word)
{

    int wordSize = word.size();
    int randomNumber = rand() % wordSize;
    string newWord;
    while (wordSize != 0)
    {

            newWord+=word[randomNumber];
            word.erase(randomNumber,1);
            wordSize = word.size();
            randomNumber = rand() % wordSize;

    }


    return newWord;
}



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
    srand(time(0));
    string initialWord;
    string tryWord;

    cout << "Hello player 1, please choose a word :"<<endl;
    cin>>initialWord;

    do{
        cout << "Hello player 2, guess the word : "<<mixedWord(initialWord)<<endl;
        cin>>tryWord;
    if (tryWord == initialWord)
      {
         cout << "Congrats! you found it :)"<<endl;
      }
      else
      {
         cout << "wrong, sorry. Try again : "<<mixedWord(initialWord)<<endl;
      }


    }while(tryWord != initialWord);



    return 0; // Termine la fonction main et donc le programme
}

