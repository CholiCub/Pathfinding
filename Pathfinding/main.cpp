#include"raylib.h"
//------------------------------------------------------------------------------------
// Global Variables Declaration
//------------------------------------------------------------------------------------
static const int CELL_SIZE = 30;
static const int CELL_COUNT = 25;
static const float OFFSET = 75;

int main()
{
	InitWindow(2 * OFFSET + CELL_COUNT * CELL_SIZE, 2 * OFFSET + CELL_COUNT * CELL_SIZE, "Pathfinding - TOOLS USED: Raylib, C++, and Git");
	SetTargetFPS(60);

	//game loop
	while (WindowShouldClose() == false)
	{
		BeginDrawing();
		//Update
		
		//Draw
		DrawRectangle(OFFSET, OFFSET, CELL_COUNT * CELL_SIZE, CELL_COUNT * CELL_SIZE, WHITE);
		ClearBackground(WHITE);
		DrawRectangleLinesEx(Rectangle{ OFFSET - 5,OFFSET - 5, (float)CELL_SIZE * CELL_COUNT + 10, (float)CELL_SIZE * CELL_COUNT + 10 }, 5, BLACK);
		// Grid lines
		for (int i = 0; i < CELL_COUNT * CELL_SIZE / CELL_SIZE; i++)
			DrawLineV({ CELL_SIZE * i + OFFSET, OFFSET }, { CELL_SIZE * i + OFFSET, GetScreenHeight() - OFFSET }, BLACK);

		for (int i = 0; i < CELL_COUNT * CELL_SIZE / CELL_SIZE; i++)
			DrawLineV({ OFFSET,CELL_SIZE * i + OFFSET }, { GetScreenWidth() - OFFSET,CELL_SIZE * i + OFFSET }, BLACK);

		DrawText("Pathfindins", OFFSET - 5, 20, 40, BLACK);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}