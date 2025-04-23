#include "Cyberfox.h"

class Sandbox : public Cyberfox::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Cyberfox::Application* Cyberfox::CreateApplication() {
	return new Sandbox();


}