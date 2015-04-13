//---------------------------------------------------------------------------

#ifndef uAerotenkiH
#define uAerotenkiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <jpeg.hpp>
#include <ComCtrls.hpp>
#include "WinSkinData.hpp"
#include "WinSkinForm.hpp"
//---------------------------------------------------------------------------
class TAerotenki : public TForm
{
__published:	// IDE-managed Components
        TADOConnection *ADOConnection1;
        TADOTable *ADOTable1;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TDBEdit *DBEdit1;
        TDBEdit *DBEditQ;
        TDBEdit *DBEdith;
        TDBEdit *DBEditBH;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TEdit *EditUdRashod;
        TEdit *EditT;
        TEdit *EditQv;
        TEdit *EditS;
        TEdit *EditV;
        TEdit *EditL;
        TEdit *EditHpoln;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TEdit *EditQ;
        TEdit *Edith;
        TEdit *EditBH;
        TEdit *EditDv;
        TEdit *EditTv;
        TEdit *EditQvv;
        TEdit *EditSv;
        TEdit *EditVv;
        TEdit *EditLv;
        TEdit *EditHpolnV;
        TEdit *Edit1;
        TLabel *Label7;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn1;
        TSpeedButton *Count;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TImage *Image1;
        TStatusBar *StatusBar1;
        TBitBtn *Clear1;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label5;
        TTimer *Timer1;
        TTimer *Timer2;
        TLabel *Label6;
        TDBEdit *DBEditLa;
        TDBEdit *DBEditK;
        TDBEdit *DBEditJ;
        TEdit *EditLa;
        TEdit *EditK;
        TEdit *EditJ;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *lblCounter;
        TSkinData *SkinData1;
        TWinSkinForm *Form;
        TTimer *Timer3;
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Clear1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
        void __fastcall DBEdit1Change(TObject *Sender);
        void __fastcall CountClick(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Label6Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall BitBtn3MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn4MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn2MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Edit1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Label6MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditQMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EdithMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditBHMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditLaMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditKMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditJMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBGrid1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditDvMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditTvMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditQvvMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditSvMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditVvMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditLvMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditHpolnVMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall Timer3Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAerotenki(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAerotenki *Aerotenki;
//---------------------------------------------------------------------------
#endif
