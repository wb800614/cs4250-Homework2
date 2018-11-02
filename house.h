//******************************************************************* 
//                                                                    
//  Program:     Homework 2
//                                                                     
//  Author:      Wesley Book
//  Email:       wb800614@ohio.edu
//                                                                    
//                                                                    
//  Description: File to hold class declaration of the house class
//                                                                    
//  Date:        November 1, 2018
//                                                                    
//*******************************************************************
#ifndef HOUSE
#define HOUSE

#include <Angel.h>
#include <iostream>
#include <stdlib.h>

class House
{
public:
	House();
	~House();
	void InitHouse(vec4 * points, vec4 * colors, int index); 
	void DrawHouse();

	const int NumVertices = 36*2;
private:
	//Constants
	const GLfloat WALL_WIDTH = 0.02;
	const GLfloat WALL_HEIGHT = 0.75;
	const GLfloat FLOOR_HEIGHT = -0.20;
	const GLfloat room_dimensions[6][2] = {
		{0.75,0.75},
		{0.75,0.75},
		{0.75,0.75},
		{0.75,0.75},
		{0.75,0.75},
		{0.75,0.75}
	};

	vec4 * points;
	vec4 * colors;
	vec4 * vertices;
	
	vec4 vertex_colors[8] = {
	    vec4(0.0, 0.0, 0.0, 1.0),  // black
	    vec4(1.0, 0.0, 0.0, 1.0),  // red
	    vec4(1.0, 1.0, 0.0, 1.0),  // yellow
	    vec4(0.0, 1.0, 0.0, 1.0),  // green
	    vec4(0.0, 0.0, 1.0, 1.0),  // blue
	    vec4(1.0, 0.0, 1.0, 1.0),  // magenta
	    vec4(1.0, 1.0, 1.0, 1.0),  // white
	    vec4(0.0, 1.0, 1.0, 1.0)   // cyan
	};
	int Index;
	void InitPoints();
	void MyQuad(int a, int b, int c, int d);
	
};

#endif