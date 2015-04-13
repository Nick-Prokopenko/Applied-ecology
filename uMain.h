//---------------------------------------------------------------------------

#ifndef uMainH
#define uMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <ADODB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include "WinSkinData.hpp"
#include "WinSkinForm.hpp"
//---------------------------------------------------------------------------
class TfrmPDK : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TADOConnection *ADOConnection1;
        TADOTable *ADOTable1;
        TDataSource *DataSource1;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TBitBtn *BtnClean;
        TBitBtn *BitBtn1;
        TImageList *ImageList1;
        TLabel *Label9;
        TTimer *Timer1;
        TTimer *Timer2;
        TSpeedButton *BtnCount;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TLabel *Label1;
        TEdit *find;
        TADOTable *ADOTable2;
        TDBEdit *EditBPK;
        TDataSource *DataSource2;
        TDBEdit *EditVV;
        TDBEdit *EditHlor;
        TDBEdit *EditSulf;
        TDBEdit *EditNitrit;
        TDBEdit *EditNitrat;
        TDBEdit *EditAmon;
        TDBEdit *EditSvinec;
        TDBEdit *EditMed;
        TDBEdit *EditKadmiy;
        TDBEdit *EditRtut;
        TDBEdit *EditOil;
        TDBEdit *EditMaslo;
        TDBEdit *EditSbros;
        TImage *Image2;
        TDBText *DBText1;
        TLabel *Label18;
        TLabel *Label19;
        TGroupBox *GroupBox1;
        TDBText *DBpok;
        TDBText *DBPDK;
        TDBText *DBfcon;
        TDBText *DBfsbrosg;
        TDBText *DBDBfsbrost;
        TDBText *DBpdsg;
        TDBText *DBpdst;
        TDBText *DBprev;
        TDBText *DBproc;
        TSkinData *SkinData1;
        TWinSkinForm *Form;
        TStatusBar *StatusBar1;
        TTimer *Timer3;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TCheckBox *CheckBox1;
        TLabel *lblCounter;
        TLabel *Label2;
    
        void __fastcall BtnCleanClick(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall BtnCountClick(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall EditSbrosChange(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall findChange(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Label19Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall EditSbrosKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall findKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditBPKKeyPress(TObject *Sender, char &Key);
        void __fastcall EditVVKeyPress(TObject *Sender, char &Key);
        void __fastcall EditHlorKeyPress(TObject *Sender, char &Key);
        void __fastcall EditSulfKeyPress(TObject *Sender, char &Key);
        void __fastcall EditNitritKeyPress(TObject *Sender, char &Key);
        void __fastcall EditNitratKeyPress(TObject *Sender, char &Key);
        void __fastcall EditAmonKeyPress(TObject *Sender, char &Key);
        void __fastcall EditSvinecKeyPress(TObject *Sender, char &Key);
        void __fastcall EditMedKeyPress(TObject *Sender, char &Key);
        void __fastcall EditKadmiyKeyPress(TObject *Sender, char &Key);
        void __fastcall EditRtutKeyPress(TObject *Sender, char &Key);
        void __fastcall EditOilKeyPress(TObject *Sender, char &Key);
        void __fastcall EditMasloKeyPress(TObject *Sender, char &Key);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall EditBPKKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditVVKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditHlorKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditSulfKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditNitritKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditNitratKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditAmonKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditSvinecKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditMedKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditKadmiyKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditRtutKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditOilKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall EditMasloKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall DBGrid1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall BitBtn4KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall BitBtn2MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn4MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn3MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BitBtn1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BtnCleanMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Label19MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BtnCountMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image2MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditBPKMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditVVMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall EditHlorMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditSulfMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditNitritMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditNitratMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditAmonMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditSvinecMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditMedMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditKadmiyMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditRtutMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditOilMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditMasloMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditSbrosMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall CheckBox1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall RadioButton1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall RadioButton2MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall findMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Label2MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall DBText1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall EditSbrosKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmPDK(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPDK *frmPDK;
//---------------------------------------------------------------------------
#endif
