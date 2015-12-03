#ifndef VertexFormat_H_
#define VertexFormat_H_
#include "glm\glm.hpp"

struct VertexFormat{

	
	glm::vec3 position;
	glm::vec4 color;
	char a;
	short i;
	VertexFormat(const glm::vec3 &iPos, const glm::vec4 &iColor)
	{ 
		position = iPos; 
		color    = iColor;
	}
	VertexFormat()
	{
		
	}
	
};

namespace Rendering
{
 
  struct VertexFormat
  {
     glm::vec3 position;
     glm::vec4 color;
 
     VertexFormat(const glm::vec3 &iPos, const glm::vec4 &iColor)
     {
       position = iPos;
       color = iColor;
    }
 
    VertexFormat() {}
 
  };
}

#endif