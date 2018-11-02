#include "scene.h"

Scene::Scene()
{
	house = new House();
	NumVertices = house -> NumVertices;
}

Scene::~Scene()
{
	delete house;
}
	

void Scene::InitScene(vec4 * npoints, vec4 * ncolors, int index) 
{
	house -> InitHouse(npoints, ncolors, index);
}

void Scene::DrawScene()
{
	house -> DrawHouse();
}