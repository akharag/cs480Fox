#ifndef CAMERA_H
#define CAMERA_H

#include "graphics_headers.h"

class camera
{
  public:
    camera();
    ~camera();
    bool Initialize(int w, int h);
    glm::mat4 GetProjection();
    glm::mat4 GetView();
  
  private:
    glm::mat4 projection;
    glm::mat4 view;
};

#endif /* CAMERA_H */
