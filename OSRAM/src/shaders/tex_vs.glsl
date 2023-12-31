#version 330 core

layout (location = 0) in vec4 position;
layout (location = 1) in vec4 m_Color;
layout (location = 2) in vec2 texCord;

uniform mat4 m_M = mat4(1.0f);
uniform mat4 m_V = mat4(1.0f);
uniform mat4 m_P = mat4(1.0f);

out vec4 Color;
out vec2 TexCord;

void main()
{
	gl_Position = (m_P * m_V * m_M) * position;
	//Color = m_Color;
	TexCord = texCord;
}