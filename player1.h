#pragma once

#include "player.h"
#include "player1Object.h"

using namespace std;

class player1 : public CRT
{
    public:
        player1(){};

        Uint32 kickTime;

        void initplayer1(BG background);
        void loadChar();
        void loadIMG(SDL_Renderer* renderer);
        void handleEvent(SDL_Event &e);
        void renderSkill(SDL_Renderer* renderer);
        void renderObject(SDL_Renderer* renderer);

        ~player1() {};
};

