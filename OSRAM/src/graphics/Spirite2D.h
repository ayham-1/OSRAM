#pragma once
#include "buffer/VAO.h"
#include "buffer/IBO.h"
#include "Shaders.h"

#include <GLM/glm.hpp>

using namespace OSRAM::GRAPHICS::BUFFER;
namespace OSRAM {
	namespace GRAPHICS {
		class Spirite2D
		{
		public:
			struct DATA 
			{
				glm::vec2 _center;
				glm::vec2 _size;
				glm::vec4 _color;
			};
			Spirite2D(DATA data, Shaders *shader);
			~Spirite2D();
			
			void Draw();
		private:
			VAO *m_VAO;
			IBO *m_IBO;
			DATA m_Data;
			Shaders *m_Shader;

			GLubyte ind[6] = { 0,1,2, 3,1,2 };
			float *m_vertices;
		};
	}
}