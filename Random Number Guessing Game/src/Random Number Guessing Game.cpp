//============================================================================
// Name        : Random.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include  <ctime>
#include <time.h>
#include <cstdlib>
using namespace std;
int main() {
	srand(time(0));
	cout << "Welcome to the random number guessing game." << endl;
	int randnum= (rand()%100 + 1);
	int guesses = 6;
	int guessed;
	cout << "Make a guess." << endl;
	cin >> guessed;

	while ( guesses > 0 && guessed != randnum ){
		guesses --;
		cout << "Unfortunately, that was incorrect." << endl;
		if (guessed < randnum){
			cout << "The number you guessed is smaller than the answer." << endl;
		}
		else{
			cout << "The number you guessed is larger than the answer." << endl;
		}
		cin >> guessed;
	}

	if (randnum == guessed){
		cout << "Congratulations! You have won the game. The number was " << randnum << "." << endl;
	}
	else{
		cout << "I'm sorry, you have not won this game. " << randnum << " was the correct answer. I'm sorry, try again.";
	}
	return 0;

}
