#include "GameEngine.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
    GameEngine engine;

    if (!engine.init(hInstance, 800, 600))
        return 0;

    engine.run();
    return 0;
}
