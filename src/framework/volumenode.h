#pragma once
#include "scenenode.h"

class VolumeNode : public SceneNode {
public:
    float density;  // Density of the volume

    VolumeNode(float density = 1.0f) : density(density) {}

    // Custom render function for volume rendering
    virtual void render(Camera* camera) override {
        // Call a specific volume shader or technique here
        // This will eventually involve custom shaders for volume rendering
        applyVolumeShader();
    }

private:
    void applyVolumeShader() {
        // Implement shader or OpenGL logic for volume rendering
    }
};
