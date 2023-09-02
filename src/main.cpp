#include <iostream>
#include <raylib.h>

using namespace std;

int main() {

    Color black = Color{ 0, 0, 0, 255 };

    const int screenWidth = 800;
    const int screenHeight = 600;
 
    cout << "Hello World" << endl;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(black);
       

        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}