#include "MyForm.h"

using namespace System;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	sis204::MyForm form;
	Application::Run(% form);
}