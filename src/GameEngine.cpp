#include "GameEngine.h"

bool GameEngine::init(HINSTANCE hInstance, int width, int height)
{
    return true;
}

void GameEngine::run()
{
}

LRESULT CALLBACK GameEngine::WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    return DefWindowProc(hwnd, msg, wParam, lParam);
}

void GameEngine::handleInput()
{
}

void GameEngine::update(float dt)
{
}

void GameEngine::render()
{
}
