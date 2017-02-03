#include "menu.h"

void Menu::displayOptions(){
	
	cout<<"\n"<<endl;
	cout<<"  #     #  #####  #      # # #    # # #    ##    ##  #####"<<endl;//Welcome screen GUI
	cout<<"  #  #  #  #      #     #        #      #  # #  # #  #"<<endl;
	cout<<"  # # # #  #####  #     #        #      #  #  #   #  #####"<<endl;
	cout<<"  # # # #  #      #     #        #      #  #      #  #"<<endl;
	cout<<"   #   #   #####  #####  # # #    # # #    #      #  #####"<<endl;
	cout<<"\n"<<endl;
	while(choice !=3){
		cout<<" $$$$$$$$$$$$$$$$$$$$$$$$ M E N U $$$$$$$$$$$$$$$$$$$$$$$$ "<<endl;//menu scrren GUI
		cout<<" |                                                       |"<<endl;
		cout<<" |                     Guessing Number                   |"<<endl;
		cout<<" |                                                       |"<<endl;
		cout<<" |                     PRESS [1]How to play              |"<<endl;
		cout<<" |                     PRESS [2]Select Difficulty        |"<<endl;
		cout<<" |                     PRESS [3]Start Game               |"<<endl;
		cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ "<<endl;

		cin >> choice;
	
		if(choice == 1)
			HowToPlay();
		else if(choice == 2)
			SelectDifficulty();
		else if(choice == 3)
			doGame();

		else if(choice >3 || choice < 1)
			cout<<"Ops , You enter wrong number, Plese try again "<<endl;//if player enter wrong number they output this 
		}
}

void Menu::HowToPlay(){//Instruction screen
	cout<<"\n@@@@@@@@@@@@@@@@@@@@@@ I N S T R U C T I O N @@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<" 1.Chose the difficulty level. "<<endl;
	cout<<" 2.Player will have 15, 12 and 10 time for easy, normal and hard level respectively. "<<endl;
	cout<<" 3.System will pick a number between 1 to 1000 automatically. "<<endl;
	cout<<" 4.Player choose any number from 1 to 1000. "<<endl;
	cout<<" 5.System will show that it is less or more than the secret number to player. "<<endl;
	cout<<" 6.Player need to choose the number under the system hints. "<<endl;
	cout<<" 7.If player win, it will shows 'Congratuation,You win !' and if player cannot choose the secret number,\nsystem will show it to player. "<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"<<endl;
}

void Menu::SelectDifficulty(){//select difficulty screen
	while(choice !=4){
		cout<<"1.Easy Game"<<endl;
		cout<<"2.Normal Game"<<endl;
		cout<<"3.Hard Game"<<endl;
		cout<<"4.Back to menu"<<endl;
	
		cin >> choice;

		if(choice == 1){
			Game g;
			g.StartGame();
		}
		else if(choice == 2){
			Game n;
			n.NormalGame();
		}
		else if(choice == 3){
			Game h;
			h.HardGame();
		}
		else if(choice == 4){
			displayOptions();
		}
		else if(choice >4 || choice < 1)
			cout<<"Ops , You enter wrong number, Plese try again "<<endl;
	}
}
void Menu::doGame(){
	Game* game = new Game();
	game->StartGame();
	delete game;
}