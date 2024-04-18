#pragma once

#include "../MainSystem/Window.hpp"
#include <vector>
#include <string>
#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>


namespace GraphicsSystem{
    class Shader {
    public:
	    unsigned int id;

	    Shader(unsigned int id);
	    ~Shader();

	    void use();
    };

    extern Shader* load_shader(std::string vertexFile, std::string fragmentFile);
}