#pragma once
/*
* Put your own file documentation here.
*
*/
// includes go below
#include <iostream>
using namespace std;
// these two lines are specific to the SFML graphics library. 
#include <SFML/Graphics.hpp>  
using namespace sf;

// Constants for the game 
const float DISTANCE = 5.0f; // When the ship moves it moves 5 pixels at a time. 
const int WINDOW_WIDTH = 800; // window is 800 pixels wide
const int WINDOW_HEIGHT = 600;// window is 600 pixels vertically "high"

// Game Functions
void moveShip(Sprite& ship); 