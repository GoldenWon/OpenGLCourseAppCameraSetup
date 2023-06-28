#pragma once

#include <stdio.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>


class MyWindow
{
public:
	MyWindow();
	MyWindow(GLint windowWidth, GLint windowHeight);

	int initialise();

	GLfloat getBufferWidth() { return (GLfloat) bufferWidth; }
	GLfloat getBufferHeight() { return (GLfloat) bufferHeight; }

	bool getShouldClose() { return glfwWindowShouldClose(mainWindow); }

	void swapBuffers() { glfwSwapBuffers(mainWindow); }

	~MyWindow();

private:
	GLFWwindow* mainWindow;

	GLint width, height;
	GLint bufferWidth, bufferHeight;
};

