#include <raylib.h>
#include <TopDownController.h>

int main()
{
    //Initialize window and get some base variables
    InitWindow(800, 600, "Top Down Controller");
    float deltatime = GetFrameTime();
    int WinWidth = GetScreenWidth();
    int WinHeight = GetScreenHeight();

    //Set the player variables
    TopDownController player;

    player.x = WinWidth / 2;
    player.y = WinHeight / 2;
    player.radius = 25;
    player.speed = 200;

    //Main loop
    while(!WindowShouldClose())
    {
        //Check for player input and adjust the position accordingly
        
        player.Move();
        //Start drawing
        BeginDrawing();
        ClearBackground(RAYWHITE);

        player.Draw(BLACK);
        
        EndDrawing();
    }
    
    CloseWindow();
}