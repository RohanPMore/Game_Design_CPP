#include<iostream>
#include<string>
#include <conio.h>
#include<cstdlib>	//generate random numbers
#include <sstream> //convert string to int
using namespace std;

class Board
{
	public:
		char opponentArray[10][10];
		char userArray[10][10];
		//int col = 10;
	
	void BoardInitialize()
	{
			for(int y = 1; y <= 10; y++)
			{
				for(int x = 1; x <= 10; x++)
				{
				opponentArray[y][x] = '~';
				userArray[y][x] = '*';
				}
			}
			
	}
	
	void BoardDraw()
	{
		cout << "*********************************BATTLESHIP***********GAME**********************************" << endl;
		cout << "***************User******Board**************        ***********Opponent****Board************" << endl;
		cout << "   -----------------------------------------        ----------------------------------------" << endl;
		for(int i = 1; i <= 10; i++)
		{	
			cout << i << "  | ";
			for(int j = 1; j <= 10; j++)
			{
				cout << userArray[i][j] << " | ";
			}
			printf("\t");
			cout << i << "  | ";
			for(int j = 1; j <= 10; j++)
			{
				cout << opponentArray[i][j] << " | ";
			}
		cout << endl << "   ------------------------------------------      -----------------------------------------" <<endl;
		}
		cout << "     A   B   C   D   E   F   J   H   I   K            L   M   N   O   P   Q   R   S   T   U " << endl << endl;
		
	}
};

class ShipPlacing: Board
{
	public:
	//calling invoke Board
	Board B;
	int BowCoord1;
	int BowCoord2;
	int SternCoord1;
	int SternCoord2;
	
	void Aircraft(Board* B)
	{
		if(BowCoord1 == SternCoord1 || BowCoord2 == SternCoord2)
		{
			if(BowCoord1 == SternCoord1)
			{
				for(int i = BowCoord2; i <= SternCoord2; i++)
				{
				
						B->userArray[BowCoord1][i] = 'A';
				}
			}
			else if(BowCoord2 == SternCoord2)
			{
				for(int j = BowCoord1; j <= SternCoord1; j++)
				{
					B->userArray[j][BowCoord2] = 'A';	
				}
			}
		}
		else
		{
			cout << "Invalid Coordinates";
		}
		B->BoardDraw();
	}
	void Submarine(Board* B)
	{
		if(BowCoord1 == SternCoord1 || BowCoord2 == SternCoord2)
		{
			if(BowCoord1 == SternCoord1)
			{
				for(int i = BowCoord2; i <= SternCoord2; i++)
				{
				
						B->userArray[BowCoord1][i] = 'S';
				}
			}
			else if(BowCoord2 == SternCoord2)
			{
				for(int j = BowCoord1; j <= SternCoord1; j++)
				{
					B->userArray[j][BowCoord2] = 'S';	
				}
			}
		}
		else
		{
			cout << "Invalid Coordinates";
		}
		B->BoardDraw();
	}
	void Destroyer(Board* B)
	{
		if(BowCoord1 == SternCoord1 || BowCoord2 == SternCoord2) 
		{
			if(BowCoord1 == SternCoord1)
			{
				for(int i = BowCoord2; i <= SternCoord2; i++)
				{
				
						B->userArray[BowCoord1][i] = 'D';
				}
			}
			else if(BowCoord2 == SternCoord2)
			{
				for(int j = BowCoord1; j <= SternCoord1; j++)
				{
					B->userArray[j][BowCoord2] = 'D';	
				}
			}
		}
		else
		{
			cout << "Invalid Coordinates";
		}
		B->BoardDraw();
	}
	void Frigate(Board* B)
	{
		if(BowCoord1 == SternCoord1 || BowCoord2 == SternCoord2)
		{
			if(BowCoord1 == SternCoord1)
			{
				for(int i = BowCoord2; i <= SternCoord2; i++)
				{
				
						B->userArray[BowCoord1][i] = 'F';
				}
			}
			else if(BowCoord2 == SternCoord2)
			{
				for(int j = BowCoord1; j <= SternCoord1; j++)
				{
					B->userArray[j][BowCoord2] = 'F';	
				}
			}
		}
		else
		{
			cout << "Invalid Coordinates";
		}
		B->BoardDraw();
	}
	ShipPlacing(int bowcoord1, int bowcoord2, int sterncoord1, int sterncoord2)
		{
			BowCoord1 = bowcoord1;
			BowCoord2 = bowcoord2;
			SternCoord1 = sterncoord1;
			SternCoord2 = sterncoord2;
		}
};

class oppShipPlacing: Board
{
	public:
	Board B;
	int oppBowCoord1;
	int oppBowCoord2;
	int oppSternCoord1;
	int oppSternCoord2;
	void oppAircraft(Board* B)
	{
		if(oppBowCoord1 == oppSternCoord1 || oppBowCoord2 == oppSternCoord2)
		{
			if(oppBowCoord1 == oppSternCoord1)
			{
				for(int i = oppBowCoord2; i <= oppSternCoord2; i++)
				{
				
						B->opponentArray[oppBowCoord1][i] = 'A';
				}
			}
			else if(oppBowCoord2 == oppSternCoord2)
			{
				for(int j = oppBowCoord1; j <= oppSternCoord1; j++)
				{
					B->opponentArray[j][oppBowCoord2] = 'A';	
				}
			}
		}
		else
		{
			cout << "Invalid Coordinates";
		}
	}
	void oppSubmarine(Board* B)
	{
		if(oppBowCoord1 == oppSternCoord1 || oppBowCoord2 == oppSternCoord2)
		{
			if(oppBowCoord1 == oppSternCoord1)
			{
				for(int i = oppBowCoord2; i <= oppSternCoord2; i++)
				{
				
						B->opponentArray[oppBowCoord1][i] = 'S';
				}
			}
			else if(oppBowCoord2 == oppSternCoord2)
			{
				for(int j = oppBowCoord1; j <= oppSternCoord1; j++)
				{
					B->opponentArray[j][oppBowCoord2] = 'S';	
				}
			}
		}
		else
		{
			cout << "Invalid Coordinates";
		}
	}
	void oppDestroyer(Board* B)
	{
		if(oppBowCoord1 == oppSternCoord1 || oppBowCoord2 == oppSternCoord2) 
		{
			if(oppBowCoord1 == oppSternCoord1)
			{
				for(int i = oppBowCoord2; i <= oppSternCoord2; i++)
				{
				
						B->opponentArray[oppBowCoord1][i] = 'D';
				}
			}
			else if(oppBowCoord2 == oppSternCoord2)
			{
				for(int j = oppBowCoord1; j <= oppSternCoord1; j++)
				{
					B->opponentArray[j][oppBowCoord2] = 'D';	
				}
			}
		}
		else
		{
			cout << "Invalid Coordinates";
		}
	}
	void oppFrigate(Board* B)
	{
		if(oppBowCoord1 == oppSternCoord1 || oppBowCoord2 == oppSternCoord2)
		{
			if(oppBowCoord1 == oppSternCoord1)
			{
				for(int i = oppBowCoord2; i <= oppSternCoord2; i++)
				{
				
						B->opponentArray[oppBowCoord1][i] = 'F';
				}
			}
			else if(oppBowCoord2 == oppSternCoord2)
			{
				for(int j = oppBowCoord1; j <= oppSternCoord1; j++)
				{
					B->opponentArray[j][oppBowCoord2] = 'F';	
				}
			}
		}
		else
		{
			cout << "Invalid Coordinates";
		}
	}
	oppShipPlacing(int oppbowcoord1, int oppbowcoord2, int oppsterncoord1, int oppsterncoord2)
		{
			oppBowCoord1 = oppbowcoord1;
			oppBowCoord2 = oppbowcoord2;
			oppSternCoord1 = oppsterncoord1;
			oppSternCoord2 = oppsterncoord2;
		} 
};

class Attack: Board
{
	public:
	Board BB;
	int attack1;
	int attack2;
	int HIT = 0;
	int MISS = 0;
	
	void mictesting(Board* BB)
	{
		if(BB->opponentArray[attack1][attack2] == 'A' || BB->opponentArray[attack1][attack2] == 'S' || BB->opponentArray[attack1][attack2] == 'D' || BB->opponentArray[attack1][attack2] == 'F')
		{
			cout << "Good Shot Captain!" << endl;
			HIT = HIT + 1;	
		}
		else
		{
			cout << "Missed Hit Captain!" << endl;
			MISS = MISS + 1;
		}
		cout << "HIT : " << HIT << " MISS : " << MISS << endl;
	}
	Attack(int Attack1, int Attack2)
	{
		attack1 = Attack1;
		attack2 = Attack2;
	}
	
};

bool check_number(string userInput1) {
   for (int i = 0; i < userInput1.length(); i++)
   if (isdigit(userInput1[i]) == false)
      return false;
      return true;
}


int main()
{
	int gameRunning = 1;
	string userInput1;
	int Userinput1;
	string shipSelect;
	int Shipselect;
	int shipSelectRun = 1;
	int DataInput = 1;
	int bowcoord1;
	int bowcoord2;
	int sterncoord1;
	int sterncoord2;
	int oppbowcoord1;
	int oppbowcoord2;
	int oppsterncoord1;
	int oppsterncoord2;
	int forrand;
	int Attack1;
	int Attack2;
	int GameRun;
	
	//Game
	while (gameRunning == 1)
	{ 
		Board board1;
		cout << "WELCOME TO BATTLESHIP BOARD GAME DESIGNED BY ROHAN MORE" << endl;
		getch();
		system("cls");
		cout << "SELECT AMONGST THE BELOW OPTION TO START THE GAME" << endl << "New Game Press 1: " << endl << "Load Game Press 2: " << endl << "Help Press 3: " << endl << "Exit Press 4: " << endl;
		cin >> userInput1;
		system("cls");
		cout << "Initiating New Game" << endl;
		while(DataInput == 1)
		{
			if(check_number(userInput1))
			{
				stringstream convert(userInput1);
				convert >> Userinput1;
				system("cls");
				switch (Userinput1)
				{
					case 1:
						board1.BoardInitialize();
						board1.BoardDraw();
						getch();
						system("cls");
						while (shipSelectRun == 1)
						{
							cout << "SELECT AMONGST THE BELOW OPTION TO PLACE YOUR SHIP" << endl << "AIRCRAFT Press 1: " << endl << "SUBMARINE Press 2: " << endl << "DESTROYER Press 3: " << endl << "FRIGATE Press 4: " << endl;
							cin >> shipSelect;
							if (check_number(shipSelect))
							{
								stringstream convert1(shipSelect);
								convert1 >> Shipselect;
								if(Shipselect == 1)
								{
									cout << "Please Enter Bow Coordinates: ";
									cin >> bowcoord1 >> bowcoord2;
									cout << "Please Enter Stern Coordinates: ";
									cin >> sterncoord1 >> sterncoord2;
									ShipPlacing userShip = ShipPlacing(bowcoord1, bowcoord2, sterncoord1, sterncoord2);
									userShip.Aircraft(&board1);
									getch();
									system("cls");
								}
								else if(Shipselect == 2)
								{
									cout << "Please Enter Bow Coordinates: ";
									cin >> bowcoord1 >> bowcoord2;
									cout << "Please Enter Stern Coordinates: ";
									cin >> sterncoord1 >> sterncoord2;
									ShipPlacing userShip = ShipPlacing(bowcoord1, bowcoord2, sterncoord1, sterncoord2);
									userShip.Submarine(&board1);
									getch();
									system("cls");
								}
								else if(Shipselect == 3)
								{
									cout << "Please Enter Bow Coordinates: ";
									cin >> bowcoord1 >> bowcoord2;
									cout << "Please Enter Stern Coordinates: ";
									cin >> sterncoord1 >> sterncoord2;
									ShipPlacing userShip = ShipPlacing(bowcoord1, bowcoord2, sterncoord1, sterncoord2);
									userShip.Destroyer(&board1);
									getch();
									system("cls");
								} 
								else if(Shipselect == 4)
								{
									cout << "Please Enter Bow Coordinates: ";
									cin >> bowcoord1 >> bowcoord2;
									cout << "Please Enter Stern Coordinates: ";
									cin >> sterncoord1 >> sterncoord2;
									ShipPlacing userShip = ShipPlacing(bowcoord1, bowcoord2, sterncoord1, sterncoord2);
									userShip.Frigate(&board1);
									shipSelectRun = 0;
									DataInput = 0;
									getch();
									system("cls");
								} 
							}
							else
							{
								cout << "Invalid Input [Select Amongst 1. 2. 3. 4. only]" << endl;
							}	
						}
						break;
					/*case 2:
						cout << "Game Not Yet Designed For This Configuration! Thank You!";
						gameRunning = 0;
						break;
						
					case 3:
						cout << "Welcome to BATTLESHIP BOARD GAME" << endl;
						cout << "1. Ship Placing Rules: "<< endl << "A. Aircraft: Ensure Difference Between Bow Element 1/ Stern Element 1 and Element 2 is equal to 6" << endl << "B. Submarine: Ensure Difference Between Bow Element 1/ Stern Element 1 and Element 2 is equal to 5" << endl << "C. Destroyer: Ensure Difference Between Bow Element 1/ Stern Element 1 and Element 2 is equal to 4" << endl << "D. Frigate: Ensure Difference Between Bow Element 1/ Stern Element 1 and Element 2 is equal to 3" << endl;
						cout << "Press Enter To Return Main Menu" << endl;
						getch();
						break;
						
					case 4:
						cout << "Thank You!";
						gameRunning = 0;
						break;	
					*/
					default:
						cout << "Invalid Input [Option Other Than Main Menu Selection]" << endl;
						cout << "Press Enter To Return Main Menu" << endl;
						getch();
				}
			}
			else
			{
				cout << "Invalid Input [Provide Only Integer Input For Main Menu Option Selection]" << endl;
				getch();
			}
		}
		
		//System Generated Placing For Enemy Ships
	
		forrand = 1 + (rand() % 2);
		oppbowcoord1 = 1 + (rand() % 4);
		oppbowcoord2 = oppbowcoord1;
		switch(forrand)
		{
			case 1:
				oppsterncoord1 = oppbowcoord1;
				oppsterncoord2 = oppsterncoord1 + 6;
				break;
			case 2:
				oppsterncoord2 = oppbowcoord2;
				oppsterncoord1 = oppsterncoord2 + 6;
				break;		
		}
		oppShipPlacing oppshipplacing = oppShipPlacing(oppbowcoord1, oppbowcoord2, oppsterncoord1, oppsterncoord2);
		oppshipplacing.oppAircraft(&board1);
		
		forrand = 1 + (rand() % 2);
		oppbowcoord1 = rand() % 5;
		oppbowcoord2 = oppbowcoord1;
		switch(forrand)
		{
			case 1:
				oppsterncoord1 = oppbowcoord1;
				oppsterncoord2 = oppsterncoord1 + 5;
				break;
			case 2:
				oppsterncoord2 = oppbowcoord2;
				oppsterncoord1 = oppsterncoord2 + 5;
				break;	
		}
		
		oppshipplacing.oppSubmarine(&board1);
		
		forrand = 1 + (rand() % 2);
		oppbowcoord1 = rand() % 6;
		oppbowcoord2 = oppbowcoord1;
		switch(forrand)
		{
			case 1:
				oppsterncoord1 = oppbowcoord1;
				oppsterncoord2 = oppsterncoord1 + 4;
				break;
			case 2:
				oppsterncoord2 = oppbowcoord2;
				oppsterncoord1 = oppsterncoord2 + 4;
				break;	
		}
		
		oppshipplacing.oppDestroyer(&board1);
		
		forrand = 1 + (rand() % 2);
		oppbowcoord1 = rand() % 7;
		oppbowcoord2 = oppbowcoord1;
		switch(forrand)
		{
			case 1:
				oppsterncoord1 = oppbowcoord1;
				oppsterncoord2 = oppsterncoord1 + 3;
				break;
			case 2:
				oppsterncoord2 = oppbowcoord2;
				oppsterncoord1 = oppsterncoord2 + 3;
				break;
		}
	
		oppshipplacing.oppFrigate(&board1);
		
		//Attack
		while(GameRun < 101)
		{
			cout << "Enter Missile Coordinated: " << endl;
			cin >> Attack1 >> Attack2;
			
			Attack attackone = Attack(Attack1,Attack2);
			attackone.mictesting(&board1);
			GameRun = GameRun + 1; 
		}

	}
	
}
   