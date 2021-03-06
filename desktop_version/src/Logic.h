#ifndef LOGIC_H
#define LOGIC_H

#include "Graphics.h"
#include "Game.h"
#include "Entity.h"
#include "UtilityClass.h"
#include "Music.h"
#include "Map.h"

void titlelogic(Graphics& dwgfx, Game& game, entityclass& obj, UtilityClass& help, musicclass& music, mapclass& map);

void maplogic(Graphics& dwgfx, Game& game, entityclass& obj,  musicclass& music, mapclass& map, UtilityClass& help);

void gamecompletelogic(Graphics& dwgfx, Game& game, entityclass& obj,  musicclass& music, mapclass& map, UtilityClass& help);

void gamecompletelogic2(Graphics& dwgfx, Game& game, entityclass& obj,  musicclass& music, mapclass& map, UtilityClass& help);

void towerlogic(Graphics& dwgfx, Game& game, entityclass& obj,  musicclass& music, mapclass& map, UtilityClass& help);

struct SpriteState {
    int x;
    int y;
    int w;
    int h;
    int df;
};

struct SWNState {
    bool swn;
    int playable;
    bool dead;
    int timer;
    SpriteState player;
    int proj_n;
    SpriteState proj[50];
    int lines_n;
    SpriteState lines[2];
};

SWNState gamelogic(Graphics& dwgfx, Game& game, entityclass& obj,  musicclass& music, mapclass& map, UtilityClass& help);

#endif /* LOGIC_H */
