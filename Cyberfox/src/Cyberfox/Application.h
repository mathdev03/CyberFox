#pragma once

#include "Core.h"

namespace Cyberfox {
	class CYBERFOX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Definido para o cliente
	Application* CreateApplication();
}
