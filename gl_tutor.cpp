// gl_tutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <SDL2/SDL.h>

#undef main

int main()
{
    SDL_Window* _window = SDL_CreateWindow("Basic GL window", 65, 65, 1280, 720, SDL_WINDOW_OPENGL);

    SDL_GLContext _context = SDL_GL_CreateContext(_window);

    SDL_Event _event;
    while (1) {
        bool _break = false;
        while (SDL_PollEvent(&_event)) {

            if (_event.type == SDL_KEYDOWN) {
                if (_event.key.keysym.sym == SDLK_ESCAPE) {
                    _break = true;
                }
            }

            if (_event.type == SDL_QUIT)
                _break = true;
        }
        if (_break)
            break;
    }

    // quitting time
    SDL_Quit();
    SDL_DestroyWindow(_window);
    SDL_GL_DeleteContext(_context);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
