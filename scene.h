//******************************************************************* 
//                                                                    
//  Program:     Homework 2
//                                                                     
//  Author:      Wesley Book
//  Email:       wb800614@ohio.edu
//                                                                    
//                                                                    
//  Description: File to hold class declaration of the scene class
//                                                                    
//  Date:        November 1, 2018
//                                                                     
//*******************************************************************
#ifndef SCENE
#define SCENE

#include <Angel.h>
#include <iostream>
#include <stdlib.h>
#include "house.h"

class Scene
{
private:
	House * house;
public:
	Scene();
	~Scene();
	void InitScene(vec4 * npoints, vec4 * ncolors, int index);

	//Variables
	const int NumVertices = 36;
};

#endif