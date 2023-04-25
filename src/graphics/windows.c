#include "windows.h"
#include <stdlib.h>


Window* window_create(
  const char* title,
  unsigned short width,
  unsigned short height
) {
  if (!glfwInit()) {
    return NULL;
  }

  GLFWwindow* glfw_window;
  glfw_window = glfwCreateWindow(width, height, title, NULL, NULL);
  if (!glfw_window) {
    glfwTerminate();
    return NULL;
  }

  /* Make the window's context current */
  glfwMakeContextCurrent(glfw_window);

  Window* window = (Window*) malloc(sizeof(Window));
  window->window = glfw_window;

  return window;
}

void window_destroy(Window *window) {
  glfwTerminate();
}
