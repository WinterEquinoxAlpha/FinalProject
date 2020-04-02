#include "..\..\include\FinalProject\FinalProjectLib.h"
#include "functions.h"

int main()
{
	gs_battleship game;// = { 0 };
	gs_battleship_reset(game);
	gs_battleship_index player = 0;
	int row{};
	int col{};
	bool activeShips[] = { true, true, true, true, true, true, true, true, true, true };

	// Asks each player to input their ship positions
	do
	{
		gs_battleship_printBoard(game, player, false);
		cout << "\nPlayer " << (int)player << ", place your ships" << endl;
		gs_battleship_setShips(game, player, row, col);
		system("pause");
		player++;
		system("CLS");
	} while ((int)player < 2);
	player = 0;
	//fillBoard(game);
	int isGameOver = 0;
	while (isGameOver == 0)
	{
		gs_battleship_printBoard(game, player, true);
		gs_battleship_checkMove(game, player, row, col);
		gs_battleship_sunkShip(game, player, activeShips);
		system("pause");
		system("CLS");
		gs_battleship_printBoard(game, player, true);
		system("pause");
		system("CLS");
		isGameOver = gs_battleship_checkOver(game);
		player = -player + 1;
	}

	if (isGameOver == 1)
	{
		cout << "Player 1 wins!" << endl;
	}
	else
	{
		cout << "Player 0 wins!" << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}