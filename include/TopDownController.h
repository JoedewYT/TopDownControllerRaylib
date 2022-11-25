#include <raylib.h>

struct TopDownController
{
    float x, y;
    int radius;
    int speed;

    void Draw(Color color)
    {
        DrawCircle(x, y, radius, color);
    }

    void Move()
    {
        if (IsKeyDown(KEY_W)) {
            y -= speed * GetFrameTime();
        } if (IsKeyDown(KEY_S)) {
            y += speed * GetFrameTime();
        } if (IsKeyDown(KEY_A)) {
            x -= speed * GetFrameTime();
        } if (IsKeyDown(KEY_D)) {
            x += speed * GetFrameTime();
        }
    }
};