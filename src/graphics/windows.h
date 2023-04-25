#ifndef WINDOWS_H
#define WINDOWS_H

#include <GLFW/glfw3.h>


typedef struct Window {
  GLFWwindow* window;
} Window;


/* Create a window */
Window* window_create(
  const char* title,
  unsigned short width,
  unsigned short height
);

/* Release any resources and destroy the window */
void window_destroy(Window *window);


#endif /* WINDOWS_H */
