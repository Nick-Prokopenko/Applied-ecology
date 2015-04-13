//---------------------------------------------------------------------------

#ifndef uGydroH
#define uGydroH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <jpeg.hpp>
#include "WinSkinData.hpp"
#include "WinSkinForm.hpp"
//---------------------------------------------------------------------------
class TfrmGydro : public TForm
{
__published:	// IDE-managed Components
        TDataSource *DataSource1;
        TADOTable *ADOTable1;
        TADOConnection *ADOConnection1;
        TDBGrid *DBGrid1;
        TEdit *find;
        TDBEdit *DBVar;
        TDBEdit *DBQ;
        TDBEdit *DBC;
        TDBEdit *DBP4;
        TDBEdit *DBPg;
        TDBEdit *DBMg;
        TDBEdit *DBD4;
        TDBEdit *DBK;
        TDBEdit *DBA;
        TEdit *Square;
        TEdit *q;
        TEdit *Diam;
        TEdit *Cvih;
        TEdit *R;
        TSpeedButton *Count;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TLabel *lblCounter;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TBitBtn *Clear;
        TImage *Image1;
        TStatusBar *StatusBar1;
        TEdit *H;
        TEdit *t;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TImage *Image3;
        TLabel *Label22;
        TSkinData *SkinData1;
        TWinSkinForm *Form;
        TTimer *Timer1;
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall CountClick(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall ClearClick(TObject *Sender);
        void __fastcall DBVarChange(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall findChange(TObject *Sender);
        void __fastcall Label22Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn3MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn4MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn2MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall RadioButton2MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall RadioButton1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBGrid1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall DBVarMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBQMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBCMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBP4MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBQKeyPress(TObject *Sender, char &Key);
        void __fastcall DBCKeyPress(TObject *Sender, char &Key);
        void __fastcall DBP4KeyPress(TObject *Sender, char &Key);
        void __fastcall DBPgKeyPress(TObject *Sender, char &Key);
        void __fastcall DBMgKeyPress(TObject *Sender, char &Key);
        void __fastcall DBD4KeyPress(TObject *Sender, char &Key);
        void __fastcall DBKKeyPress(TObject *Sender, char &Key);
        void __fastcall DBAKeyPress(TObject *Sender, char &Key);
        void __fastcall HKeyPress(TObject *Sender, char &Key);
        void __fastcall tKeyPress(TObject *Sender, char &Key);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall FormResize(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmGydro(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmGydro *frmGydro;
//---------------------------------------------------------------------------
#endif
