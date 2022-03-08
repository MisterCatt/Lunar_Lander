#include "Game.h"
#include "Screen.h"

const int screenWidth = 800;
const int screenHeight = 600;

Screen screen;



int main(int argc, char *argv[])
{
	bool quit = false;

	while (!quit)
	{
		screen.Display();



		screen.Clear();
	}

	return 0;
}
