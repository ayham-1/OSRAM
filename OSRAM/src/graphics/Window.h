#pragma once
#include <GL\glew.h>
#include <GLFW\glfw3.h>

#include <GLM/glm.hpp>
#include <GLM/gtc/matrix_transform.hpp>

#include <iostream>

namespace OSRAM {
	namespace GRAPHICS {

		class Window
		{
		private:
			Window *INSTANCE;
			
			int m_Width;
			int m_Height;
			std::string m_Title;
			
			GLFWwindow* m_Window;
		public:
			Window(int width, int height, std::string title);
			~Window();

			void Update();

			GLFWwindow* getWindowHandler() { return m_Window; };
			int getWindowWidth() { return m_Width; };
			int getWindowHeight() { return m_Height; };
			Window* getWindowInstance() { return INSTANCE; };

		private:
			void init();
		};
	}
}