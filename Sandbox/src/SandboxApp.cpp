#include <Glamour.h>

class Sandbox : public Glamour::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Glamour::Application* Glamour::CreateApplication() {
	return new Sandbox();
}

// when adding reference of glamour to sandbox the .lib file doesnt show in command line under linker in sandbox properties
// .ilk is not found in the glamour bin folder