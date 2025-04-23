#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern Cyberfox::Application* Cyberfox::CreateApplication();

int main(int argc, char** argv) {

	printf("CyberFox Engine!");

	auto app = Cyberfox::CreateApplication();
	app->Run();

	delete app;
}
	
#endif