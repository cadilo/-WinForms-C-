#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(/*array<String^>^ args*/)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    our_calc::MyForm Form;
    Application::Run(% Form);
}
