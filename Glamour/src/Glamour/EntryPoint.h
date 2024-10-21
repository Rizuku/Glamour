#pragma once

#ifdef GL_PLATFORM_WINDOWS

extern Glamour::Application* Glamour::CreateApplication();

int main(int argc, char** argv) {
	auto app = Glamour::CreateApplication();
	app->Run();
	delete app;
}

#endif