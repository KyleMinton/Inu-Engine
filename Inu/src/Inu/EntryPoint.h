#pragma once

#ifdef INU_PLATFORM_WINDOWS

extern Inu::Application* Inu::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Inu::CreateApplication();
	app->Run();
	delete app;
}

#endif