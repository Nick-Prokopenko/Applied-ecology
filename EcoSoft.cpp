//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("uMain.cpp", frmPDK);
USEFORM("uAbout.cpp", AboutBox);
USEFORM("uSplash.cpp", frmSplash);
USEFORM("uGydro.cpp", frmGydro);
USEFORM("uPeskolovki.cpp", Peskolovki);
USEFORM("uAerotenki.cpp", Aerotenki);
USEFORM("uVar.cpp", frmVar);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TfrmSplash), &frmSplash);
                 Application->CreateForm(__classid(TfrmPDK), &frmPDK);
                 Application->CreateForm(__classid(TAboutBox), &AboutBox);
                 Application->CreateForm(__classid(TfrmGydro), &frmGydro);
                 Application->CreateForm(__classid(TPeskolovki), &Peskolovki);
                 Application->CreateForm(__classid(TAerotenki), &Aerotenki);
                 Application->CreateForm(__classid(TfrmVar), &frmVar);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
