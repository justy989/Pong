//
//  tffunctions.h
//  Pong
//
//  Created by Thomas Foster on 7/27/18.
//  Copyright © 2018 Thomas Foster. All rights reserved.
//

#ifndef tffunctions_h
#define tffunctions_h

#include <stdio.h>
#include <SDL2/SDL.h>

typedef enum { COLLISION_NONE, COLLISION_HOR, COLLISION_VERT } collision_t;
typedef enum { false, true } bool;

typedef struct
{
	int width, height;
} sizetype;


typedef struct
{
	int x,y;
} point_t;


typedef struct
{
	point_t origin;
	sizetype size;
} rect_t;


typedef struct
{
	int right, left, top, bottom;
} box_t;



point_t MakePoint(int x, int y);
sizetype 	MakeSize(int w, int h);
rect_t 	MakeRect(int x, int y, int w, int h);

void 	RectToSDL(SDL_Rect *sdlrect, rect_t *tfrect);
void 	MakeBoxFromRect(box_t *destbox, rect_t const *srcrect);

bool tfRectCollision(rect_t *aRect, rect_t *bRect);

#endif /* tffunctions_h */
