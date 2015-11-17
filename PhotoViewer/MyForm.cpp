#include "MyForm.h"
#include "PhotoList.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	PhotoList Starter;
	Starter.start();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PhotoViewer::MyForm form;
	Application::Run(%form);
}