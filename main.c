#include "raylib.h"

#define APPNAME "Mandelbrot Zoomer"

#define SCREEN_X 1000
#define SCREEN_Y 1000

int main(void)
{
    InitWindow(SCREEN_X, SCREEN_Y, APPNAME);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    
    return 0;
}
