#include "house.h"

House::House()
{
  vertices = new vec4[16]{
      vec4(-1*WALL_WIDTH, FLOOR_HEIGHT,  0.5, 1.0),
      vec4(-1*WALL_WIDTH,  WALL_HEIGHT,  0.5, 1.0),
      vec4( WALL_WIDTH,  WALL_HEIGHT,  0.5, 1.0),
      vec4( WALL_WIDTH, FLOOR_HEIGHT,  0.5, 1.0),
      vec4(-1*WALL_WIDTH, FLOOR_HEIGHT, -0.5, 1.0),
      vec4(-1*WALL_WIDTH,  WALL_HEIGHT, -0.5, 1.0),
      vec4( WALL_WIDTH,  WALL_HEIGHT, -0.5, 1.0),
      vec4( WALL_WIDTH, FLOOR_HEIGHT, -0.5, 1.0),

      vec4(-1*WALL_WIDTH, WALL_HEIGHT, -0.5, 1.0),
      vec4(-1*WALL_WIDTH, FLOOR_HEIGHT, -0.5, 1.0),
      vec4(-1*WALL_WIDTH+room_dimensions[0][0], WALL_HEIGHT, -0.5, 1.0),
      vec4(-1*WALL_WIDTH+room_dimensions[0][0], FLOOR_HEIGHT, -0.5, 1.0),
      vec4(-1*WALL_WIDTH, WALL_HEIGHT, -0.6, 1.0),
      vec4(-1*WALL_WIDTH, FLOOR_HEIGHT, -0.6, 1.0),
      vec4(-1*WALL_WIDTH+room_dimensions[0][0], WALL_HEIGHT, -0.6, 1.0),
      vec4(-1*WALL_WIDTH+room_dimensions[0][0], FLOOR_HEIGHT, -0.6, 1.0),
  };
}

House::~House()
{
  delete this;
}

void House::InitHouse(vec4 * npoints, vec4 * ncolors, int index)
{
	points = npoints;
	colors = ncolors;
	Index = index;

	InitPoints();
}

void House::InitPoints()
{
  for (int i = 0; i < 2; i++)
  {
    MyQuad(1+i*8, 0+i*8, 3+i*8, 2+i*8);
    MyQuad(2+i*8, 3+i*8, 7+i*8, 6+i*8);
    MyQuad(3+i*8, 0+i*8, 4+i*8, 7+i*8);
    MyQuad(6+i*8, 5+i*8, 1+i*8, 2+i*8);
    MyQuad(4+i*8, 5+i*8, 6+i*8, 7+i*8);
    MyQuad(5+i*8, 4+i*8, 0+i*8, 1+i*8);
  }
}

void House::MyQuad(int a, int b, int c, int d)
{
  colors[Index] = vertex_colors[3]; points[Index] = vertices[a]; Index++; 
  colors[Index] = vertex_colors[3]; points[Index] = vertices[b]; Index++;
  colors[Index] = vertex_colors[3]; points[Index] = vertices[c]; Index++;
  colors[Index] = vertex_colors[3]; points[Index] = vertices[a]; Index++;
  colors[Index] = vertex_colors[3]; points[Index] = vertices[c]; Index++;
  colors[Index] = vertex_colors[3]; points[Index] = vertices[d]; Index++;
}

void House::DrawHouse()
{
  glDrawArrays(GL_TRIANGLES, 0, NumVertices);
}
