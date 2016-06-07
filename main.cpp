
/*
 * main.cpp
 * Alexander Hernandez Quezada
 *  Matricula: 20112500
 *
 */

#include <iostream>
#include <ostream>
using namespace std;

double apples;
double oranges;
double banana;
double watermelons;
double wallet = 1000;

float userchoice;

int main()
{
while (wallet>=0){

    cout << "\n welcom friend\n";
    cout << "menu:\n\n";
    cout << "1  Apples $30\n";
    cout << "2  oranges $15\n";
    cout << "3  Cherries $20\n";
    cout << "4  banana $10\n";
    cout << "5  watermelons $25\n";
}
cout << "you have\n"<< apples << "apples\n" << oranges<< "oranges\n" << Cherries << "Cherries\n"<< banana <<"banana\n" << watermelons <<"watermelons\n";

cout <<"your available credit is $"<<  wallet;
cout <<"Type in the number that represents the fruit you want or type 6 to check out.\n\n " ;

cin >> userchoice;
if (userchoice==1){
    wallet= wallet-30;
    apples++;
}
if (userchoice==2){
    wallet= wallet-15;
    oranges++;
}
if (userchoice==3){
    wallet= wallet-20;
    Cherries++;
}
if (userchoice==4){
    wallet= wallet-10;
    banana++;
}
if (userchoice==5){
    wallet= wallet-25;
    watermelons++;
}
if (userchoice==6){
    cout << "\n Thank you for shopping\n";
    cin.get();
    return 0;

}

	cin.get();
	return 0 ;
}
