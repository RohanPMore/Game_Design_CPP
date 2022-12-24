#include <iostream>
#include <conio.h> //for getch
using namespace std;

class Board
{
	public:
		char gameArray[10][10];
		int xCoordU1; int yCoordU1;
		int xCoordU2; int yCoordU2;
		//int col = 10;
	
	void BoardInitialize()
	{
		for(int y = 1; y <= 10; y++)
			{
				for(int x = 1; x <= 10; x++)
				{
					gameArray[y][x] = '~';
				}
			}
		
		//setting default elements
		gameArray[5][5] = 'X';
		gameArray[5][6]	= 'Y';
		gameArray[6][5] = 'Y';
		gameArray[6][6]	= 'X';
			
	}
	
	void BoardDraw()
	{
		cout << "______________REVERSI___BOARD___GAME________________" << endl;
		cout << "   -----------------------------------------" << endl;
		for(int i = 1; i <= 10; i++)
		{	
			cout << i << "  | ";
			for(int j = 1; j <= 10; j++)
			{
				cout << gameArray[i][j] << " | ";
			}
		cout << endl << "   ------------------------------------------" <<endl;
		}
		cout << "     A    B   C   D   E   F   G   H   I   J " << endl << endl;
		cout << endl << "User Input = X " << endl << "Enemy Input = Y " << endl;	
	}
	
	void UserInput1()
	{
		// Black = 1; White = 2
		cin.ignore(99, '\n');
		cout << endl << "[Black: X] Please Enter Coordinates: " << endl;
		cin >> xCoordU1 >> yCoordU1;
		gameArray[xCoordU1][yCoordU1] = 'X';

	}
	
	void UserInput2()
	{
		cin.ignore(99, '\n');
		cout << "[Black: Y] Please Enter Coordinates: " << endl;
		cin >> xCoordU2 >> yCoordU2;
		gameArray[xCoordU2][yCoordU2] = 'Y';
	}
	
	void GameLogic()
	{
		for(int y = 1; y <= 10; y++)
		{
			for(int x = 1; x <= 10; x++)
				{
					int i = yCoordU1 + 1 && i < 10;
					if(gameArray[yCoordU1][x] == 'X' && gameArray[i][x] == 'Y')
					{
						for(i; i <= 10; i++)
						{
							if(gameArray[i][x] != 'Y')
							{
							gameArray[i][x] = 'O';
							i = 11;
							}
						}
						
					}
				}	
		}
		
	} 
	
};

	

int main()
{
	int MasterGameRun = 1;
	int SlaveGameRun = 1;
	int UserChoice;
	int EndGameVar = 0;
	while(MasterGameRun == 1)
	{
		cout << "Welcome to Reversi Board Game Designed By Rohan More" << endl;
		cout << endl << endl << "Please press Enter to start Reversi Board Game...";
		getch();
		cout << endl << "Select Amongst The Option: " << endl;
		cout << "1. New Game: " << endl << "2. Load Game: " << endl << "3. Help: " << endl << "4. Exit: " << endl;
		cin >> UserChoice;
		while(SlaveGameRun == 1)
		{
			switch(UserChoice)
			{
				case 1:
					Board board1;
					board1.BoardInitialize();
					board1.BoardDraw();
					while(EndGameVar <= 100)
					{
						board1.UserInput1();
						board1.UserInput2();
						board1.GameLogic();
						EndGameVar = EndGameVar + 2;
						system("cls");
						board1.BoardDraw();
						//board1.EndGame();
						cout << endl << "Press Enter To Continue...";
						getch();
					}
					break;
					
				default:
					cout << "Invalid Input" << endl;
					getch();
					SlaveGameRun = 0;	
			}
			
		}

		
	}

}