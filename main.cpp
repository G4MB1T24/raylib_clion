#include <iostream>
#include <raylib.h>



int main() {
    InitWindow(800 , 900 , "Sim");

    while (!WindowShouldClose()) {
        ClearBackground(BLACK);
        BeginDrawing();
        EndDrawing();
    }
    CloseWindow();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

