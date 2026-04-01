#include <Inu.h>

class Sandbox : public Inu::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Inu::Application* Inu::CreateApplication()
{
	return new Sandbox();
}
