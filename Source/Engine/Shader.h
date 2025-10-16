#include "glad/glad.h"

class Shader {
public:
	~Shader();

	bool Load(const std::string& filename, GLuint shaderType);

public:
	GLuint m_shader = 0;
};