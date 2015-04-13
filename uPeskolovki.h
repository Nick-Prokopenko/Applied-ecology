//---------------------------------------------------------------------------

#ifndef uPeskolovkiH
#define uPeskolovkiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include "WinSkinData.hpp"
#include "WinSkinForm.hpp"
//---------------------------------------------------------------------------
class TPeskolovki : public TForm
{
__published:	// IDE-managed Components
        TADOConnection *ADOConnection1;
        TADOTable *ADOTable1;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TDBEdit *DBEdit1;
        TDBEdit *DBEditW;
        TDBEdit *DBEditK;
        TDBEdit *DBEditQ;
        TDBEdit *DBEditD;
        TDBEdit *DBEditP;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *EditW;
        TEdit *EditK;
        TEdit *EditQ;
        TEdit *EditD;
        TEdit *Edit7;
        TCheckBox *CheckBox1;
        TLabel *Label7;
        TCheckBox *CheckBox2;
        TLabel *Label8;
        TEdit *EditP;
        TEdit *Edit10;
        TEdit *Edit11;
        TEdit *Edit12;
        TLabel *Label9;
        TImage *Image1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn4;
        TBitBtn *BitBtn3;
        TBitBtn *Export;
        TTimer *Timer1;
        TTimer *Timer2;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *H;
        TLabel *Label16;
        TComboBox *ComboH;
        TBitBtn *BtnClean;
        TEdit *find;
        TSpeedButton *Count2;
        TTimer *Timer3;
        TTimer *Timer4;
        TLabel *Label11;
        TShape *Shape1;
        TStatusBar *StatusBar1;
        TLabel *Label17;
        TLabel *lblCounter;
        TLabel *Label10;
        TSkinData *SkinData1;
        TWinSkinForm *Form;
        TTimer *Timer5;
        void __fastcall findChange(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall ClearClick(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall Count2Click(TObject *Sender);
        void __fastcall DBEdit1Change(TObject *Sender);
        void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall Timer4Timer(TObject *Sender);
        void __fastcall BitBtn3MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall BitBtn4MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn2MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall ExportMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall findMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Edit10MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall CheckBox1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall CheckBox2MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Edit11MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Edit12MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBGrid1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditWMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditKMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditQMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditDMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditPMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBEdit1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Count2MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall BtnCleanMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Label17Click(TObject *Sender);
        void __fastcall ExportClick(TObject *Sender);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall Timer5Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPeskolovki(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPeskolovki *Peskolovki;
//---------------------------------------------------------------------------
#endif
