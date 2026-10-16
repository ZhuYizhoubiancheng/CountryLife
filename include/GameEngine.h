#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <windows.h>

class GameEngine {
public:
    bool init(HINSTANCE hInstance, int width, int height);
    void run();

private:
    static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
    void handleInput();
    void update(float dt);
    void render();

    HWND hwnd = nullptr;
    bool running = false;
};

#endif
