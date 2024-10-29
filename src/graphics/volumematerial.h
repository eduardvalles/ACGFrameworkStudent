// VolumeMaterial.h
#pragma once
#include "material.h"
#include "shader.h"

class VolumeMaterial : public Material {
public:
    VolumeMaterial() {
        shader = Shader::Get("shaders/volume_shader.vs", "shaders/volume_shader.fs");
    }

    virtual void apply() {
        shader->enable();
        shader->setUniform("uDensity", 0.5f);  // Example density value, can be made dynamic
    }
};
