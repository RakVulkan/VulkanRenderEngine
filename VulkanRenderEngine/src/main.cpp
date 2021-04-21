#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <stdexcept>
#include <vector>
#include <iostream>
#include "VulkanCore/VulkanRenderer.h"

GLFWwindow* gWindow;
VulkanRenderer gVulkanRenderer;

void initWindow(std::string inWindowName = "Test Window", const int inWidth = 800, const int inHeight = 600)
{
	// Initialise GLFW
	glfwInit();

	// Set GLFW to NOT work with OpenGL
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	gWindow = glfwCreateWindow(inWidth, inHeight, inWindowName.c_str(), nullptr, nullptr);
}

int main()
{
	// Create Window
	initWindow("Test Window", 800, 600);


	// Loop until closed
	while (!glfwWindowShouldClose(gWindow))
	{
		glfwPollEvents();
	}

	// Destroy GLFW window and stop GLFW
	glfwDestroyWindow(gWindow);
	glfwTerminate();

	return 0;
}