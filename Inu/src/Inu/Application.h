#pragma once

#include"Core.h"
namespace Inu {

	class INU_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();

}
