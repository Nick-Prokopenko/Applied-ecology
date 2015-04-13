//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "uAbout.h"
#include "stdlib.h"
#include "uMain.h"
#include "uVar.h"
#include "uSplash.h"
#include <ComObj.hpp>
#include <utilcls.h>
#include "Math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "WinSkinData"
#pragma link "WinSkinForm"
#pragma resource "*.dfm"
TfrmPDK *frmPDK;
//---------------------------------------------------------------------------
__fastcall TfrmPDK::TfrmPDK(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TfrmPDK::BtnCountClick(TObject *Sender)
{
if (EditBPK->Text=="")  EditBPK->Text="0";
if (EditVV->Text=="")   EditVV->Text="0";
if (EditSulf->Text=="") EditSulf->Text="0";
if (EditNitrit->Text=="")  EditNitrit->Text="0";
if (EditNitrat->Text=="")  EditNitrat->Text="0";
if (EditAmon->Text=="")    EditAmon->Text="0";
if (EditSvinec->Text=="")  EditSvinec->Text="0";
if (EditMed->Text=="")     EditMed->Text="0";
if (EditKadmiy->Text=="")   EditKadmiy->Text="0";
if (EditRtut->Text=="")      EditRtut->Text="0";
if (EditHlor->Text=="")     EditHlor->Text="0";
if (EditOil->Text=="")      EditOil->Text="0";
if (EditMaslo->Text=="")   EditMaslo->Text="0";
if (EditSbros->Text=="")   EditSbros->Text="0";

 ADOTable1->First();
//амонийные соли
ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditAmon->Text;
DBGrid1->Fields[3]->AsString=EditAmon->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditAmon->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
//---------------
double fld6=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld7=StrToFloat(DBGrid1->Fields[7]->AsString);
//---------------
double perc=0;
perc=fld6*0.01;
double fld8=fld7/perc;

DBGrid1->Fields[8]->AsString=fld8;


//---------------
ADOTable1->Post();

   ADOTable1->Next();

//---------------
//БПК полн.
 ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditBPK->Text;
DBGrid1->Fields[3]->AsString=EditBPK->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=DBGrid1->Fields[3]->AsString*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;

fld8=0;
//---------------
//---------------
double fld61=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld71=StrToFloat(DBGrid1->Fields[7]->AsString);
//---------------
perc=0;
perc=fld61*0.01;
fld8=fld71/perc;

DBGrid1->Fields[8]->AsString=fld8;

//---------------
ADOTable1->Post();
 ADOTable1->Next();

 double a=StrToFloat(EditVV->Text);
/////////////////////////

// ВВ культ
 ADOTable1->Edit();
a=a+0.75;
DBGrid1->Fields[2]->AsString=a;
DBGrid1->Fields[3]->AsString=EditSbros->Text*a;
DBGrid1->Fields[4]->AsString=DBGrid1->Fields[3]->AsString*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------

fld8=0;

//double fld62=StrToFloat(DBGrid1->Fields[6]->AsString);
//double fld72=StrToFloat(DBGrid1->Fields[7]->AsString);
double fld62=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld72=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld62*0.01;
//fld8=fld7/perc;
double fld82=fld72/perc;
DBGrid1->Fields[8]->AsString=fld82;
//---------------
ADOTable1->Post();

  ADOTable1->Next();


// ВВ хоз
   ADOTable1->Edit();
a=a-0.5;
DBGrid1->Fields[2]->AsString=a;
DBGrid1->Fields[3]->AsString=EditSbros->Text*a;
DBGrid1->Fields[4]->AsString=DBGrid1->Fields[3]->AsString*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------

fld8=0;

double fld622=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld722=StrToFloat(DBGrid1->Fields[7]->AsString);

perc=0;
perc=fld622*0.01;
double fld822=fld722/perc;
DBGrid1->Fields[8]->AsString=fld822;



//---------------
ADOTable1->Post();

  ADOTable1->Next();

  //ВВ
  ADOTable1->Edit();
  a=a-0.25;
DBGrid1->Fields[2]->AsString=EditVV->Text;

DBGrid1->Fields[3]->AsString=EditSbros->Text*a;
DBGrid1->Fields[4]->AsString=DBGrid1->Fields[3]->AsString*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;


perc=0;
perc=fld62*0.01;
 fld82=fld72/perc;
DBGrid1->Fields[8]->AsString=fld82;



//---------------
ADOTable1->Post();

  ADOTable1->Next();

//кадмий

 ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditKadmiy->Text;
DBGrid1->Fields[3]->AsString=DBGrid1->Fields[2]->AsString*EditSbros->Text;
DBGrid1->Fields[4]->AsString=DBGrid1->Fields[3]->AsString*0.000001;
DBGrid1->Fields[5]->AsString=DBPDK->Caption*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;

double fld610=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld710=StrToFloat(DBGrid1->Fields[7]->AsString);

perc=0;
perc=fld610*0.01;
fld8=fld710/perc;

DBGrid1->Fields[8]->AsString=fld8;

//---------------
ADOTable1->Post();

   ADOTable1->Next();
//масло

 ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditMaslo->Text;
DBGrid1->Fields[3]->AsString=EditMaslo->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditMaslo->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld613=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld713=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld613*0.01;
fld8=fld713/perc;

DBGrid1->Fields[8]->AsString=fld8;

ADOTable1->Post();
ADOTable1->Next();

//   медь

ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditMed->Text;
DBGrid1->Fields[3]->AsString=EditMed->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditMed->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld69=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld79=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld69*0.01;
fld8=fld79/perc;

DBGrid1->Fields[8]->AsString=fld8;

//---------------
ADOTable1->Post();

   ADOTable1->Next();
//нефть

 ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditOil->Text;
DBGrid1->Fields[3]->AsString=EditOil->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditOil->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld612=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld712=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld612*0.01;
fld8=fld712/perc;

DBGrid1->Fields[8]->AsString=fld8;

//---------------
ADOTable1->Post();

   ADOTable1->Next();

//нитрат

ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditNitrat->Text;
DBGrid1->Fields[3]->AsString=EditNitrat->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditNitrat->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld66=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld76=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld66*0.01;
fld8=fld76/perc;

DBGrid1->Fields[8]->AsString=fld8;


//---------------
ADOTable1->Post();

   ADOTable1->Next();

//нитрит

ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditNitrit->Text;
DBGrid1->Fields[3]->AsString=EditNitrit->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditNitrit->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld65=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld75=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld65*0.01;
fld8=fld75/perc;

DBGrid1->Fields[8]->AsString=fld8;

//---------------
ADOTable1->Post();

   ADOTable1->Next();
//

//Ртуть
   ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditRtut->Text;
DBGrid1->Fields[3]->AsString=EditRtut->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditRtut->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld611=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld711=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld611*0.01;
fld8=fld711/perc;

DBGrid1->Fields[8]->AsString=fld8;

//---------------
ADOTable1->Post();

   ADOTable1->Next();

//Свинец

 ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditSvinec->Text;
DBGrid1->Fields[3]->AsString=EditSvinec->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditSvinec->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld68=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld78=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld68*0.01;
fld8=fld78/perc;

DBGrid1->Fields[8]->AsString=fld8;


//---------------
ADOTable1->Post();

   ADOTable1->Next();

//----------------

//Сульфаты

  ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditSulf->Text;
DBGrid1->Fields[3]->AsString=EditSulf->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditSulf->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld64=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld74=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld64*0.01;
fld8=fld74/perc;

DBGrid1->Fields[8]->AsString=fld8;

//---------------
ADOTable1->Post();

   ADOTable1->Next();

//-------

//Хлориды
  ADOTable1->Edit();
DBGrid1->Fields[2]->AsString=EditHlor->Text;
DBGrid1->Fields[3]->AsString=EditHlor->Text*EditSbros->Text;
DBGrid1->Fields[4]->AsString=EditHlor->Text*EditSbros->Text*0.000001;
DBGrid1->Fields[5]->AsString=DBGrid1->Fields[1]->AsString*EditSbros->Text;
DBGrid1->Fields[6]->AsString=DBGrid1->Fields[5]->AsString*0.000001;
DBGrid1->Fields[7]->AsString=DBGrid1->Fields[4]->AsString-DBGrid1->Fields[6]->AsString;
//---------------
fld8=0;
double fld63=StrToFloat(DBGrid1->Fields[6]->AsString);
double fld73=StrToFloat(DBGrid1->Fields[7]->AsString);
perc=0;
perc=fld63*0.01;
fld8=fld73/perc;

DBGrid1->Fields[8]->AsString=fld8;
//---------------
ADOTable1->Post();
ADOTable1->First();
Timer1->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BtnCleanClick(TObject *Sender)
{
RadioButton2->Checked=true;
}
//---------------------------------------------------------------------------




void __fastcall TfrmPDK::Timer1Timer(TObject *Sender)
{
if (frmPDK->Height<551)


      frmPDK->Height=frmPDK->Height+50;

if (frmPDK->Height>550)
      Timer1->Enabled=False;

}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::Timer2Timer(TObject *Sender)
{
 if (frmPDK->Height>267)

      frmPDK->Height=frmPDK->Height-50;

if (frmPDK->Height<268)
      Timer2->Enabled=False;        
}
//---------------------------------------------------------------------------




void __fastcall TfrmPDK::BitBtn2Click(TObject *Sender)
{

frmSplash->Show();
Close();
//frmPDK->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BitBtn4Click(TObject *Sender)
{
WinExec("hh.exe help.chm", SW_RESTORE); //открывает файл справки, находящийся
}                                       //в папке с программой

//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditSbrosChange(TObject *Sender)
{
BtnCount->Enabled=True;
if (EditSbros->Text=="")
      BtnCount->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BitBtn3Click(TObject *Sender)
{

frmSplash->SpeedButton4->Click();

}
//---------------------------------------------------------------------------



void __fastcall TfrmPDK::findChange(TObject *Sender)
{

if (find->Text=="")  {
ADOTable2->Filter="";}
else {
ADOTable2->Filter="var='"+find->Text+"'";
}
}
//---------------------------------------------------------------------------



void __fastcall TfrmPDK::CheckBox1Click(TObject *Sender)
{

if (frmPDK->CheckBox1->Checked==false)
frmVar->Hide();
 else {
frmVar->Show();
find->Text="";
}
}
//---------------------------------------------------------------------------

















void __fastcall TfrmPDK::Label19Click(TObject *Sender)
{
 ShellExecute(frmSplash->Handle,"open",Label19->Caption.c_str(),NULL,NULL,SW_RESTORE);

}
//---------------------------------------------------------------------------



void __fastcall TfrmPDK::BitBtn1Click(TObject *Sender)
{
if(DBGrid1->Fields[2]->AsString!="")
{
Variant app, ws, range;
const int xlAlignCenter = -4108;
int Row;

double BPK=StrToFloat(EditBPK->Text);
double VV=StrToFloat(EditVV->Text);
double HL=StrToFloat(EditHlor->Text);
double Sulf=StrToFloat(EditSulf->Text);
double Nitrit=StrToFloat(EditNitrit->Text);
double Nitrat=StrToFloat(EditNitrat->Text);
double Amon=StrToFloat(EditAmon->Text);
double Svin=StrToFloat(EditSvinec->Text);
double Med=StrToFloat(EditMed->Text);
double Kad=StrToFloat(EditKadmiy->Text);
double Rtut=StrToFloat(EditRtut->Text);
double Neft=StrToFloat(EditOil->Text);
double Maslo=StrToFloat(EditMaslo->Text);
double Sbros=StrToFloat(EditSbros->Text);

app = CreateOleObject("Excel.Application");
app.OlePropertySet("Visible", true);
app.OlePropertyGet("Workbooks").OleProcedure("Add");
ws = app.OlePropertyGet("Worksheets").OlePropertyGet("Item",1);
ws.OlePropertySet("Name", "Расчет ФС и ПДС");
ws.OlePropertyGet("Columns").OlePropertyGet("Item",1).
OlePropertySet("ColumnWidth", 30);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",2).
OlePropertySet("ColumnWidth", 15);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",3).
OlePropertySet("ColumnWidth", 30);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",4).
OlePropertySet("ColumnWidth", 25);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",5).
OlePropertySet("ColumnWidth", 25);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",6).
OlePropertySet("ColumnWidth", 15);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",7).
OlePropertySet("ColumnWidth", 15);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",8).
OlePropertySet("ColumnWidth", 25);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",9).
OlePropertySet("ColumnWidth", 20);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",10).
OlePropertySet("ColumnWidth", 7);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",11).
OlePropertySet("ColumnWidth", 7);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",12).
OlePropertySet("ColumnWidth", 15);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",13).
OlePropertySet("ColumnWidth", 15);
ws.OlePropertyGet("Columns").OlePropertyGet("Item",14).
OlePropertySet("ColumnWidth", 7);

range = ws.OlePropertyGet("Range", "A1:G1");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "Исходные данные(Расчет ФС и ПДС)");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

range = ws.OlePropertyGet("Range", "A4:G4");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "Результаты");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

 ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 1).
      OlePropertySet("Value", "БПК полн.");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 2).
      OlePropertySet("Value", "Взвеш. в-ва");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 3).
      OlePropertySet("Value", "Хлориды");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 4).
      OlePropertySet("Value", "Сульфаты");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 5).
      OlePropertySet("Value", "Нитрит-ионы");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 6).
      OlePropertySet("Value", "Нитрат-ионы");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 7).
      OlePropertySet("Value", "Амонийные соли");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 8).
      OlePropertySet("Value", "Свинец");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 9).
      OlePropertySet("Value", "Медь");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 10).
      OlePropertySet("Value", "Кадмий");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 11).
      OlePropertySet("Value", "Ртуть");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 12).
      OlePropertySet("Value", "Нефтепродукты");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 13).
      OlePropertySet("Value", "Масло соляровое");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 14).
      OlePropertySet("Value", "Сброс");

 ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 1).
      OlePropertySet("Value", BPK);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 2).
      OlePropertySet("Value", VV);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 3).
      OlePropertySet("Value", HL);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 4).
      OlePropertySet("Value", Sulf);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 5).
      OlePropertySet("Value", Nitrit);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 6).
      OlePropertySet("Value", Nitrat);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 7).
      OlePropertySet("Value", Amon);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 8).
      OlePropertySet("Value", Svin);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 9).
      OlePropertySet("Value", Med);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 10).
      OlePropertySet("Value", Kad);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 11).
      OlePropertySet("Value", Rtut);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 12).
      OlePropertySet("Value", Neft);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 13).
      OlePropertySet("Value", Maslo);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 14).
      OlePropertySet("Value", Sbros);
 //результаты
      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 1).
      OlePropertySet("Value", "Показатели состава сточных вод");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 2).
      OlePropertySet("Value", "ПДК,г/м^3");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 3).
      OlePropertySet("Value","Фактическая концентрация,г/м^3" );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 4 ).
      OlePropertySet("Value","Фактический сброс,г/м^3");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 5).
      OlePropertySet("Value","Фактический сброс,т/м^3");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 6).
      OlePropertySet("Value", "ПДС,г/м^3");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 7).
      OlePropertySet("Value","ПДС,т/м^3" );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 8 ).
      OlePropertySet("Value","Превышение сброса,т/год");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 9).
      OlePropertySet("Value","% превышения,т/м^3");

    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 1).
      OlePropertySet("Value","Амонийные соли");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 7, 1).
      OlePropertySet("Value","БПК полн.");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 8, 1).
      OlePropertySet("Value","Взвешенные в-ва для хоз-пит.исп.");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 9, 1).
      OlePropertySet("Value","Взвешенные в-ва для бытов.исп.");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 10, 1).
      OlePropertySet("Value","Взвешенные в-ва");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 11, 1).
      OlePropertySet("Value","Кадмий ");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 12, 1).
      OlePropertySet("Value","Масло соляровое");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 13, 1).
      OlePropertySet("Value","Медь ");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 14, 1).
      OlePropertySet("Value","Нефтепродукты");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 15, 1).
      OlePropertySet("Value","Нитрат-ионы");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 16, 1).
      OlePropertySet("Value","Нитрит-ионы ");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 17, 1).
      OlePropertySet("Value","Ртуть");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 18, 1).
      OlePropertySet("Value","Свинец");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 19, 1).
      OlePropertySet("Value","Сульфаты");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 20, 1).
      OlePropertySet("Value","Хлориды");

      int c=6;
ADOTable1->First();
while (!(ADOTable1->Eof)) {

double pdk=StrToFloat(DBPDK->Caption);
double fcon=StrToFloat(DBfcon->Caption);
double fsbg=StrToFloat(DBfsbrosg->Caption);
double fsbt=StrToFloat(DBDBfsbrost->Caption);
double pdsg=StrToFloat(DBpdsg->Caption);
double pdst=StrToFloat(DBpdst->Caption);
double prev=StrToFloat(DBprev->Caption);
double proc=StrToFloat(DBproc->Caption);


      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", c, 2).
      OlePropertySet("Value",pdk );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", c, 3).
      OlePropertySet("Value",fcon);
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", c, 4 ).
      OlePropertySet("Value",fsbg );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", c, 5).
      OlePropertySet("Value",fsbt);
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", c, 6).
      OlePropertySet("Value",pdsg);
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", c, 7).
      OlePropertySet("Value",pdst);
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", c, 8).
      OlePropertySet("Value",prev);
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", c, 9).
      OlePropertySet("Value",proc);
ADOTable1->Next();
c++;
      }
ADOTable1->First();

range = ws.OlePropertyGet("Range", "A2:N2");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

range = ws.OlePropertyGet("Range", "A5:I5");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

}
else
{
if (Application->MessageBox(
"Расчет еще не осуществлен! Хотите сделать это прямо сейчас?",
"Расчет не осуществлен!",
MB_YESNOCANCEL + MB_ICONQUESTION)== IDYES)
{
  if (EditSbros->Text!="")
  BtnCount->Click();
  else {RadioButton2->Checked=true; BtnCount->Click(); }
}

}

}
//---------------------------------------------------------------------------




void __fastcall TfrmPDK::EditSbrosKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}
if(Key==VK_RETURN)
{
BtnCount->Click();
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::FormResize(TObject *Sender)
{
if (frmPDK->Width>=940){
Width=938;
Height=275;
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::Timer3Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text=Time().FormatString("hh:mm:ss");
Timer3->Interval=1;        
}
//---------------------------------------------------------------------------


void __fastcall TfrmPDK::RadioButton2Click(TObject *Sender)
{
EditBPK->Enabled=false;
EditVV->Enabled=false;
EditSulf->Enabled=false;
EditNitrit->Enabled=false;
EditNitrat->Enabled=false;
EditAmon->Enabled=false;
EditSvinec->Enabled=false;
EditMed->Enabled=false;
EditKadmiy->Enabled=false;
EditRtut->Enabled=false;
EditHlor->Enabled=false;
EditOil->Enabled=false;
EditMaslo->Enabled=false;
EditSbros->Enabled=false;

Label2->Visible=true;
lblCounter->Visible=true;
CheckBox1->Visible=true;
Label18->Visible=true;
DBText1->Visible=true;
BtnClean->Enabled=false;
find->Visible=true;

EditBPK->Text="0";
EditVV->Text="0";
EditSulf->Text="0";
EditNitrit->Text="0";
EditNitrat->Text="0";
EditAmon->Text="0";
EditSvinec->Text="0";
EditMed->Text="0";
EditKadmiy->Text="0";
EditRtut->Text="0";
EditHlor->Text="0";
EditOil->Text="0";
EditMaslo->Text="0";
EditSbros->Text="0";


ADOTable2->Delete();

ADOTable1->First();
while (!(ADOTable1->Eof)) {

ADOTable1->Edit();
DBGrid1->Fields[2]->AsString="";
DBGrid1->Fields[3]->AsString="";
DBGrid1->Fields[4]->AsString="";
DBGrid1->Fields[5]->AsString="";
DBGrid1->Fields[6]->AsString="";
DBGrid1->Fields[7]->AsString="";
DBGrid1->Fields[8]->AsString="";
ADOTable1->Post();
 ADOTable1->Next();
}
 ADOTable1->First();

}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::RadioButton1Click(TObject *Sender)
{

EditBPK->Enabled=true;
EditVV->Enabled=true;
EditSulf->Enabled=true;
EditNitrit->Enabled=true;
EditNitrat->Enabled=true;
EditAmon->Enabled=true;
EditSvinec->Enabled=true;
EditMed->Enabled=true;
EditKadmiy->Enabled=true;
EditRtut->Enabled=true;
EditHlor->Enabled=true;
EditOil->Enabled=true;
EditMaslo->Enabled=true;
EditSbros->Enabled=true;

BtnClean->Enabled=true;
Label18->Visible=false;
DBText1->Visible=false;
CheckBox1->Visible=false;
find->Visible=false;
Label2->Visible=false;
lblCounter->Visible=false;

ADOTable1->First();
while (!(ADOTable1->Eof)) {

ADOTable1->Edit();
DBGrid1->Fields[2]->AsString="";
DBGrid1->Fields[3]->AsString="";
DBGrid1->Fields[4]->AsString="";
DBGrid1->Fields[5]->AsString="";
DBGrid1->Fields[6]->AsString="";
DBGrid1->Fields[7]->AsString="";
DBGrid1->Fields[8]->AsString="";
ADOTable1->Post();
 ADOTable1->Next();
}
 ADOTable1->First();
 
ADOTable2->First();
ADOTable2->Insert();

}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::FormCreate(TObject *Sender)
{

EditBPK->Enabled=false;
EditVV->Enabled=false;
EditSulf->Enabled=false;
EditNitrit->Enabled=false;
EditNitrat->Enabled=false;
EditAmon->Enabled=false;
EditSvinec->Enabled=false;
EditMed->Enabled=false;
EditKadmiy->Enabled=false;
EditRtut->Enabled=false;
EditHlor->Enabled=false;
EditOil->Enabled=false;
EditMaslo->Enabled=false;
EditSbros->Enabled=false;

Label18->Visible=true;
DBText1->Visible=true;

ADOTable2->Filter="";
int i=1;                         //Присваиваем переменным значение 1
ADOTable2->First();                  //на первую запись
while (!(ADOTable2->Eof)) {          //будет повторяться, пока не достигнет конца
lblCounter->Caption=i++;             //считаем кол-во записей и выводим в Label12
ADOTable2->Next();                   //на следующую запись
}
ADOTable2->First();
}
//---------------------------------------------------------------------------


void __fastcall TfrmPDK::findKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if(Key==VK_RETURN)
{
if (BtnCount->Enabled!=false)
BtnCount->Click();
}
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}
}
//---------------------------------------------------------------------------



void __fastcall TfrmPDK::EditBPKKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditBPK->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditVV->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditVVKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditVV->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditHlor->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditHlorKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditHlor->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditSulf->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditSulfKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditSulf->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditNitrit->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditNitritKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditNitrit->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditNitrat->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditNitratKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditNitrat->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditAmon->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditAmonKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditAmon->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditSvinec->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditSvinecKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditSvinec->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditMed->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditMedKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditMed->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditKadmiy->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditKadmiyKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditKadmiy->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditRtut->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditRtutKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditRtut->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditOil->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditOilKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditOil->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditMaslo->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditMasloKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditMaslo->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
EditSbros->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------





void __fastcall TfrmPDK::FormClose(TObject *Sender, TCloseAction &Action)
{
frmVar->Hide();

ADOTable1->First();
while (!(ADOTable1->Eof)) {
 ADOTable1->Edit();
DBGrid1->Fields[2]->AsString="";
DBGrid1->Fields[3]->AsString="";
DBGrid1->Fields[4]->AsString="";
DBGrid1->Fields[5]->AsString="";
DBGrid1->Fields[6]->AsString="";
DBGrid1->Fields[7]->AsString="";
DBGrid1->Fields[8]->AsString="";
ADOTable1->Post();
 ADOTable1->Next();
}
 ADOTable1->First();

if (RadioButton1->Checked==true){

EditBPK->Text="0";
EditVV->Text="0";
EditSulf->Text="0";
EditNitrit->Text="0";
EditNitrat->Text="0";
EditAmon->Text="0";
EditSvinec->Text="0";
EditMed->Text="0";
EditKadmiy->Text="0";
EditRtut->Text="0";
EditHlor->Text="0";
EditOil->Text="0";
EditMaslo->Text="0";
EditSbros->Text="0";

ADOTable2->Delete();


 
//RadioButton2->Checked=true;
}

Width=938;
Height=280;

 frmSplash->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditBPKKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditVVKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditHlorKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditSulfKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditNitritKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------


void __fastcall TfrmPDK::EditNitratKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditAmonKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditSvinecKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditMedKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditKadmiyKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditRtutKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditOilKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditMasloKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::DBGrid1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BitBtn4KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key==VK_F1)
{
BitBtn4->Click();
return;
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BitBtn2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=BitBtn2->Hint;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BitBtn4MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=BitBtn4->Hint;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BitBtn3MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=BitBtn3->Hint;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BitBtn1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=BitBtn1->Hint;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BtnCleanMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=BtnClean->Hint;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::Label19MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=Label19->Hint;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::BtnCountMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=BtnCount->Hint;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::Image2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=Image2->Hint;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditBPKMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditBPK->Hint;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditVVMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditVV->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditHlorMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditHlor->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditSulfMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditSulf->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditNitritMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditNitrit->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditNitratMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditNitrat->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditAmonMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditAmon->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditSvinecMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditSvinec->Hint;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditMedMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditMed->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditKadmiyMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditKadmiy->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditRtutMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditRtut->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditOilMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditOil->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditMasloMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditMaslo->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::EditSbrosMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=EditSbros->Hint;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::CheckBox1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=CheckBox1->Hint;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::RadioButton1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=RadioButton1->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::RadioButton2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=RadioButton2->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::findMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=find->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::Label2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=Label2->Hint;          
}
//---------------------------------------------------------------------------

void __fastcall TfrmPDK::DBText1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text=DBText1->Hint;          
}
//---------------------------------------------------------------------------


void __fastcall TfrmPDK::EditSbrosKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((EditSbros->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;        
}
//---------------------------------------------------------------------------

