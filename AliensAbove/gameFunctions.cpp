#include "gameHeader.h"
/*
* Put your own file documentation here.
* you can delete other comments if you want to. 
*/

// note: a Sprite represents an image on screen. A sprite knows and remembers its own position
// ship.move(offsetX, offsetY) adds offsetX, offsetY to 
// the current position of the ship. 
// x is horizontal, y is vertical. 
// 0,0 is in the UPPER LEFT of the screen, y increases DOWN the screen
     
/*
*  moveShip - This function is called to handle a keyPress event. 
*     Keyboard input is detected and ship is moved.
*   ** Part of the lab is to also handle firing a missile **
*  INPUT: The ship sprite is passed.  This merely a drawn object on the screen.
*  RETURN: None
*/
void moveShip(Sprite& ship)
{
	/*
	 *  This first If-then-else-if Block handles 
	 */
	if (Keyboard::isKeyPressed(Keyboard::Key::Left))
	{
		// left arrow is pressed: move our ship left 5 pixels ( this is -5 pixels to go left)
		// 2nd parm is y direction. We don't want to move up/down, so it's zero.
		ship.move({ -DISTANCE, 0 });
	}
	else if (Keyboard::isKeyPressed(Keyboard::Key::Right))
	{
		// right arrow is pressed: move our ship right 5 pixels
		ship.move({ DISTANCE, 0 });
	}
	

}

