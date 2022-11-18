#include "raylib.h"

int main(void)
{
  const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth, screenHeight, "PMD - 2021");

  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();
    {
      ClearBackground(RAYWHITE);
      DrawText("It works! :)",350, 200, 20, LIGHTGRAY);
    }
    EndDrawing();
  }

  CloseWindow();        // Close window and OpenGL context
  return 0;
}