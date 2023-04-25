#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#endif

#include <GLFW/glfw3.h>
#include "graphics/windows.h"

int main(void) {
  Window *window = window_create("Game of Life", 800, 600);

  /* Loop until the user closes the window */
  while (!glfwWindowShouldClose(window->window)) {
    /* Render here */
    glClear(GL_COLOR_BUFFER_BIT);

    /* Swap front and back buffers */
    glfwSwapBuffers(window->window);

    /* Poll for and process events */
    glfwPollEvents();
  }

  window_destroy(window);
  return 0;
}
