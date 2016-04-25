//
//  brick.hpp
//  Breakout
//
//  Created by Pablo Zebadúa on 23/04/16.
//  Copyright © 2016 Controversial Games. All rights reserved.
//

#ifndef brick_hpp
#define brick_hpp

#include <stdio.h>
#include <GLUT/GLUT.h>
#include <stdlib.h>
#include <cmath>

class Brick
{
    
private:
    int visible;
    int points;
    double coordsX;
    double coordsY;
    float size = 1;

public:
    
    Brick(int p , double x, double y);
    void setX(double x);
    double getX();
    void setY(double y);
    double getY();
    void setVisible(int v);
    int getVisible();
    void setPoints(int p);
    int getPoints();
    void drawBrick();
    float getSizeRight();
    float getSizeLeft();
    float getSizeUp();
    float getSizeDown();

    
};

#endif /* brick_hpp */
