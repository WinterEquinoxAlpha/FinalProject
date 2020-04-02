#include "functions.h"
#include "..\..\include\FinalProject\FinalProjectLib.h"

void fillBoard(gs_battleship game)
{
	gs_checkers_setSpaceState(game, gs_battleship_space_patrol2, 0, 0, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_patrol2, 0, 0, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_submarine3, 0, 1, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_submarine3, 0, 1, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_submarine3, 0, 1, 2);
	gs_checkers_setSpaceState(game, gs_battleship_space_destroyer3, 0, 2, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_destroyer3, 0, 2, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_destroyer3, 0, 2, 2);
	gs_checkers_setSpaceState(game, gs_battleship_space_battleship4, 0, 3, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_battleship4, 0, 3, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_battleship4, 0, 3, 2);
	gs_checkers_setSpaceState(game, gs_battleship_space_battleship4, 0, 3, 3);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 0, 4, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 0, 4, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 0, 4, 2);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 0, 4, 3);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 0, 4, 4);

	gs_checkers_setSpaceState(game, gs_battleship_space_patrol2, 1, 0, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_patrol2, 1, 0, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_submarine3, 1, 1, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_submarine3, 1, 1, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_submarine3, 1, 1, 2);
	gs_checkers_setSpaceState(game, gs_battleship_space_destroyer3, 1, 2, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_destroyer3, 1, 2, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_destroyer3, 1, 2, 2);
	gs_checkers_setSpaceState(game, gs_battleship_space_battleship4, 1, 3, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_battleship4, 1, 3, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_battleship4, 1, 3, 2);
	gs_checkers_setSpaceState(game, gs_battleship_space_battleship4, 1, 3, 3);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 1, 4, 0);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 1, 4, 1);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 1, 4, 2);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 1, 4, 3);
	gs_checkers_setSpaceState(game, gs_battleship_space_carrier5, 1, 4, 4);
}