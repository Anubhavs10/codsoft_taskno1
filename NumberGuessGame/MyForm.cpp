#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew  NumberGuessGame::MyForm()); // Replace with your actual namespace and form name
    return 0;
}