#include "game.h"

Game::Game(){
	srand(time(NULL));//setup seed value for random number sequence

	correctNumber = rand()%1000 + 1;//1-1000

	tries = 0;
}

void Game::StartGame(){//easy game 
	int guess = 0;
	while(guess != correctNumber && tries < 15){//In the easy game level players have 15 time chances
		cout<<"\nEnter your estimated number between 1 and 1000: ";
		cin>>guess;

		if(guess != correctNumber){
			testNumber(guess);
			tries++;
		}
	}


	if(guess == correctNumber && tries < 15){//If the player wins after the show
		cout<<" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
		cout<<" @                                                       @ "<<endl;
		cout<<" @                Congratulate, You win !                @ "<<endl;
		cout<<" @                     You are great !                   @ "<<endl;
		cout<<" @                                                       @ "<<endl;
		cout<<" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
	}
	else{//If the player loses will be displayed
		cout<<"\nThe correct number was "<<correctNumber<<endl;
		cout<<"Better luck next time!"<<endl;
	}
}

void Game::NormalGame(){
	int guess = 0;
	while(guess != correctNumber && tries <12){//In the normal game level players have 12 time chances
		cout<<"\nEnter your estimated number between 1 and 1000: ";
		cin>>guess;

		if(guess != correctNumber){
			testNumber(guess);
			tries++;
		}
	}
	if(guess == correctNumber && tries < 12){//If the player wins after the show
		cout<<" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
		cout<<" @                                                       @ "<<endl;
		cout<<" @                Congratulate, You win !                @ "<<endl;
		cout<<" @                     You are great !                   @ "<<endl;
		cout<<" @                                                       @ "<<endl;
		cout<<" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
	}
	else{//If the player loses will be displayed
		cout<<"\nThe correct number was "<<correctNumber<<endl;
		cout<<"Better luck next time!"<<endl;
	}
}

void Game::HardGame(){
	int guess = 0;
	while(guess != correctNumber && tries <10){//In the hard game level players have 10 time chances
		cout<<"Enter your estimated number between 1 and 1000: ";
		cin>>guess;

		if(guess != correctNumber){
			testNumber(guess);
			tries++;
		}
	}
	if(guess == correctNumber && tries < 10){//If the player wins after the show
		cout<<" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
		cout<<" @                                                       @ "<<endl;
		cout<<" @                Congratulate, You win !                @ "<<endl;
		cout<<" @                     You are great !                   @ "<<endl;
		cout<<" @                                                       @ "<<endl;
		cout<<" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
	}
	else{//If the player loses will be displayed
		cout<<"\nThe correct number was "<<correctNumber<<endl;
		cout<<"Better luck next time!"<<endl;
	}

}

void Game::testNumber(int num){//Players enter the number is too large or too small will give tips
	if(num < correctNumber)
		cout<<"Your estimated is less than the secret number"<<endl;
	else
		cout<<"Your estunated is more than the secret number"<<endl;
}