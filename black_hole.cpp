#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    glfwInit();

    GLFWwindow* window =
        glfwCreateWindow(800, 600, "black hole", NULL, NULL);

    glfwMakeContextCurrent(window);

    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}