/*
Copyright 2020 Michael Kashian & Jason Kmieciak

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

Name: FinalProjectLib.h
Discription: Contains the foreward declerations of functions and variables used in main.cpp; Libaray header file
Contributors: Michael Kashian & Jason Kmieciak
*/

#ifndef FINALPROJECTLIB_H
#define FINALPROJECTLIB_H

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

//-----------------------------------------------------------------------------
// DECLARATIONS

#define GS_BATTLESHIP_PLAYERS				2
#define GS_BATTLESHIP_BOARD_WIDTH			10
#define GS_BATTLESHIP_BOARD_HEIGHT			10

enum gs_battleship_space_state
{
	// invalid space state
	gs_battleship_space_invalid = -1,

	// states visible to both players
	gs_battleship_space_open,			// space is open and unguessed
	gs_battleship_space_miss,			// space was guessed and missed
	gs_battleship_space_hit,			// space was guessed and hit

	// states hidden from opponent player
	gs_battleship_space_patrol2,		// 2-unit patrol boat
	gs_battleship_space_submarine3,		// 3-unit submarine
	gs_battleship_space_destroyer3,		// 3-unit destroyer
	gs_battleship_space_battleship4,	// 4-unit battleship
	gs_battleship_space_carrier5,		// 5-unit carrier
};
#ifndef __cplusplus
typedef		enum gs_battleship_space_state	gs_battleship_space_state;
#endif	// !__cplusplus

// battleship game state
typedef		unsigned char					gs_battleship_index;
typedef		gs_battleship_space_state		gs_battleship[GS_BATTLESHIP_PLAYERS][GS_BATTLESHIP_BOARD_WIDTH][GS_BATTLESHIP_BOARD_HEIGHT];


#define	GS_VALIDATE_COORDINATE(x,y,z,w,h,d)		(x < w && y < h && z < d)
#define GS_BATTLESHIP_VALID(p,x,y)				GS_VALIDATE_COORDINATE(x,y,p,GS_BATTLESHIP_BOARD_WIDTH,GS_BATTLESHIP_BOARD_HEIGHT,GS_BATTLESHIP_PLAYERS)

/*
@breif   Returns the state of the given board space
@input   gs_battleship const game - the battleship gameboard, gs_battleship_index const player - the player who is using the board, gs_battleship_index const xpos = the x position of the square, gs_battleship_index const ypos - the y position of the square
@return  gs_battleship_space_state - the state of the space
*/
gs_battleship_space_state gs_checkers_getSpaceState(gs_battleship const game, gs_battleship_index const player, gs_battleship_index const xpos, gs_battleship_index const ypos);

/*
@breif   Sets the state of the given board space
@input   gs_battleship const game - the battleship gameboard, gs_battleship_space_state const state - the state you want to set the square to, gs_battleship_index const player - the player who is using the board, gs_battleship_index const xpos = the x position of the square, gs_battleship_index const ypos - the y position of the square
@return  gs_battleship_space_state - the new state of the space
*/
gs_battleship_space_state gs_checkers_setSpaceState(gs_battleship game, gs_battleship_space_state const state, gs_battleship_index const player, gs_battleship_index const xpos, gs_battleship_index const ypos);

/*
@breif   Resets the gameboard
@input   gs_battleship game - the battleship gameboard to reset
@return  gs_battleship_index - the index
*/
gs_battleship_index gs_battleship_reset(gs_battleship game);

/*
@breif   Prints the board to the screen
@input   gs_battleship const game - the battleship gameboard, gs_battleship_index const player - the player whose turn it is, bool showTargeting - whether or not to draw both boards
@return  void
*/
void gs_battleship_printBoard(gs_battleship const game, gs_battleship_index const player, bool showTargeting);

/*
@breif   Checks to see if the given ship can be placed on the board
@input   gs_battleship const game - the battleship gameboard, gs_battleship_index const player - the player whose turn it is, int& row - the row of the square, int& col - the column of the square
@return  void
*/
void gs_battleship_checkShipSet(gs_battleship const game, gs_battleship_index const player, int& row, int& col);

/*
@breif   Updates the board to include the locations of the placed ships
@input   gs_battleship const game - the battleship gameboard, gs_battleship_index const player - the player whose turn it is, int& row - the row of the square, int& col - the column of the square
@return  void
*/
void gs_battleship_setShips(gs_battleship game, gs_battleship_index const player, int& row, int& col);

/*
@breif   Checks to see if the given move is a valid one
@input   gs_battleship const game - the battleship gameboard, gs_battleship_index const player - the player whose turn it is, int& row - the row of the square, int& col - the column of the square
@return  void
*/
void gs_battleship_checkMove(gs_battleship game, gs_battleship_index const player, int& row, int& col);

/*
@breif   Checks to see if the game is over
@input   gs_battleship const game - the battleship gameboard
@return  int - a numerical value representing who lost (0 = not over, 1 = player 0, 2 = player 1)
*/
int gs_battleship_checkOver(gs_battleship game);

/*
@breif   Checks to see if a player's ship has been sunk
@input   gs_battleship const game - the battleship gameboard, gs_battleship_index const player - the player whose turn it is, bool activeShips[10] - an array the storing which ships are still alive
@return  void
*/
void gs_battleship_sunkShip(gs_battleship const game, gs_battleship_index const player, bool activeShips[10]);

#endif``