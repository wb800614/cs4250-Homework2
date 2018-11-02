#include "scene.h"

Scene::Scene()
{
	house = new House();
}

Scene::~Scene()
{
	delete house;
}
	

void Scene::InitScene(vec4 * npoints, vec4 * ncolors, int index) 
{
	house -> InitHouse(npoints, ncolors, index);
}