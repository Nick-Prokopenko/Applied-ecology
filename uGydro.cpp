//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <ComObj.hpp>
#include <utilcls.h>
#include <errno.h>
#include "uSplash.h"
#include "uGydro.h"
#include "math.h"
#include "Math.hpp"
#include "uAbout.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "WinSkinData"
#pragma link "WinSkinForm"
#pragma resource "*.dfm"
TfrmGydro *frmGydro;
//---------------------------------------------------------------------------
__fastcall TfrmGydro::TfrmGydro(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmGydro::FormCloseQuery(TObject *Sender, bool &CanClose)
{
if (DBQ->Enabled==True){
Count->Enabled=true;
ADOTable1->Delete();
ADOTable1->First();
ADOTable1->Insert();
DBVar->Text="0";

Square->Text="";
q->Text="";
Diam->Text="";
Cvih->Text="";
R->Text="";
H->Text="";
t->Text="";
}
frmSplash->Show();
}
//---------------------------------------------------------------------------





void __fastcall TfrmGydro::RadioButton2Click(TObject *Sender)
{

DBQ->Enabled=true;
DBC->Enabled=true;
DBP4->Enabled=true;
DBPg->Enabled=true;
DBD4->Enabled=true;
DBK->Enabled=true;
DBMg->Enabled=true;
DBA->Enabled=true;


Square->Text="";
q->Text="";
Diam->Text="";
Cvih->Text="";
R->Text="";

Image3->Width=257;
find->Enabled=false;
Count->Enabled=true;
Clear->Visible=true;
ADOTable1->First();
ADOTable1->Insert();
DBGrid1->Enabled=false;
DBVar->Enabled=false;

DBVar->Text="0";
H->Text="";
t->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::CountClick(TObject *Sender)
{

//---------------

if (DBQ->Text==""){ DBQ->Text="1";
ShowMessage ("Значение 'Q' не было введено!!! (установлено '1' по умолчанию)");}
if (DBC->Text==""){ DBC->Text="1";
ShowMessage ("Значение 'Свх' не было введено!!! (установлено '1' по умолчанию)");}
if (DBP4->Text==""){ DBP4->Text="1";
ShowMessage ("Значение 'Рч' не было введено!!! (установлено '1' по умолчанию)");}
if (DBPg->Text==""){ DBPg->Text="1";
ShowMessage ("Значение 'Рж' не было введено!!! (установлено '1' по умолчанию)");}
if (DBMg->Text==""){ DBMg->Text="1";
ShowMessage ("Значение 'Мж' не было введено!!! (установлено '1' по умолчанию)");}
if (DBD4->Text==""){ DBD4->Text="1";
ShowMessage ("Значение 'dч' не было введено!!! (установлено '1' по умолчанию)");}
if (DBK->Text==""){ DBK->Text="1";
ShowMessage ("Значение 'К' не было введено!!! (установлено '1' по умолчанию)");}
if (DBA->Text==""){ DBA->Text="1";
ShowMessage ("Значение 'А' не было введено!!! (установлено '1' по умолчанию)");}
if (H->Text==""){ H->Text="1";
ShowMessage ("Значение 'H' не было введено!!! (установлено '1' по умолчанию)");}
if (t->Text==""){ t->Text="1";
ShowMessage ("Значение 't' не было введено!!! (установлено '1' по умолчанию)");}


//else{
if (H->Text=="") H->Text="1";
if (t->Text=="") t->Text="1";
//Wo
double D4=StrToFloat(DBD4->Text);
double P4=StrToFloat(DBP4->Text);
double Pg=StrToFloat(DBPg->Text);
double Mg=StrToFloat(DBMg->Text);
double Wo;
Wo=(((9.8*D4*D4)/18)*((P4-Pg)/Mg));

//q
double k=StrToFloat(DBK->Text);
double Q=StrToFloat(DBQ->Text);
q->Text=3.6*k*Wo;
double q1=StrToFloat(q->Text);

//S
Square->Text=Q/q1;
double S=StrToFloat(Square->Text);
double H1=StrToFloat(H->Text);

//Cvih
double A=StrToFloat(DBA->Text);
Cvih->Text=(A*q1)/H1;
double Cvihod=StrToFloat(Cvih->Text);
double Cvh=StrToFloat(DBC->Text);

//D
Diam->Text=2*sqrt(S/3.14);


//R
double t1=StrToFloat(t->Text);
R->Text=(Cvh-Cvihod)*Q*t1;

ADOTable1->Post();
Count->Enabled=false;
//}
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::RadioButton1Click(TObject *Sender)
{

ADOTable1->Delete(); //}

find->Enabled=true;
Count->Enabled=false;
Clear->Visible=false;
Image3->Width=321;
DBGrid1->Enabled=true;
DBVar->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::ClearClick(TObject *Sender)
{
Count->Enabled=true;
ADOTable1->Delete();
ADOTable1->First();
ADOTable1->Insert();
DBVar->Text="n/a";

Square->Text="";
q->Text="";
Diam->Text="";
Cvih->Text="";
R->Text="";
H->Text="";
t->Text="";
}
//---------------------------------------------------------------------------
int _matherr (struct _exception *a)
{
if (a->type==DOMAIN)
if (!strcmp(a->name,"sqrt")) {
a->retval = sqrt(-(a->arg1));
return 1;
}
return 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBVarChange(TObject *Sender)
{
if (Count->Enabled==false){
if (DBVar->Text==""){
ShowMessage ("Данный вариант не найден!");
find->Text="";
}

DBQ->Enabled=false;
DBC->Enabled=false;
DBP4->Enabled=false;
DBPg->Enabled=false;
DBD4->Enabled=false;
DBK->Enabled=false;
DBMg->Enabled=false;
DBA->Enabled=false;
if (H->Text=="") H->Text="1";
if (t->Text=="") t->Text="1";

//Wo
double D4=StrToFloat(DBD4->Text);
double P4=StrToFloat(DBP4->Text);
double Pg=StrToFloat(DBPg->Text);
double Mg=StrToFloat(DBMg->Text);
double Wo;
Wo=(((9.8*(D4*D4))/18)*((P4-Pg)/Mg));

//q
double k=StrToFloat(DBK->Text);
double Q=StrToFloat(DBQ->Text);
q->Text=3.6*k*Wo;
double q1=StrToFloat(q->Text);

//S
Square->Text=Q/q1;
double S=StrToFloat(Square->Text);
double H1=StrToFloat(H->Text);

//Cvih
double A=StrToFloat(DBA->Text);
Cvih->Text=(A*q1)/H1;

double Cvihod=StrToFloat(Cvih->Text);
double Cvh=StrToFloat(DBC->Text);

//D



Diam->Text=2*sqrt(S/3.14);


//R

double t1=StrToFloat(t->Text);

R->Text=(Cvh-Cvihod)*Q*t1;

}
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::FormCreate(TObject *Sender)
{

DBQ->Enabled=false;
DBC->Enabled=false;
DBP4->Enabled=false;
DBPg->Enabled=false;
DBD4->Enabled=false;
DBK->Enabled=false;
DBMg->Enabled=false;
DBA->Enabled=false;

Count->Enabled=false;
Clear->Visible=false;
Image3->Width=321;
int i=1;                         //Присваиваем переменным значение 1
ADOTable1->First();                  //на первую запись
while (!(ADOTable1->Eof)) {          //будет повторяться, пока не достигнет конца
lblCounter->Caption=i++;             //считаем кол-во записей и выводим в Label12
ADOTable1->Next();                   //на следующую запись
}
ADOTable1->First();
}
//---------------------------------------------------------------------------




void __fastcall TfrmGydro::findChange(TObject *Sender)
{
if (find->Text>=1){
ADOTable1->Filter="variant='"+find->Text+"'";
}

if (find->Text==""){
ADOTable1->Filter="";
ADOTable1->First() ;
}

}
//---------------------------------------------------------------------------



void __fastcall TfrmGydro::Label22Click(TObject *Sender)
{
 ShellExecute(frmSplash->Handle,"open",Label22->Caption.c_str(),NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::BitBtn3Click(TObject *Sender)
{
frmSplash->SpeedButton4->Click();
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::BitBtn4Click(TObject *Sender)
{
WinExec("hh.exe help.chm", SW_RESTORE); //открывает файл справки, находящийся
}                                       //в папке с программой

//---------------------------------------------------------------------------

void __fastcall TfrmGydro::BitBtn2Click(TObject *Sender)
{
frmSplash->Show();
frmGydro->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::BitBtn1Click(TObject *Sender)
{
Variant app, ws, range;
const int xlAlignCenter = -4108;
int Row;
 if (DBVar->Text=="0")DBVar->Text=0; 
double Var=StrToFloat(DBVar->Text);
double Q=StrToFloat(DBQ->Text);
double C=StrToFloat(DBC->Text);
double P4=StrToFloat(DBP4->Text);
double Pg=StrToFloat(DBPg->Text);
double Mg=StrToFloat(DBMg->Text);
double D4=StrToFloat(DBD4->Text);
double K=StrToFloat(DBK->Text);
double A=StrToFloat(DBA->Text);
double H1=StrToFloat(H->Text);
double t1=StrToFloat(t->Text);
//Результаты
double Sq=StrToFloat(Square->Text);
double q1=StrToFloat(q->Text);
double D=StrToFloat(Diam->Text);
double C1=StrToFloat(Cvih->Text);
double R1=StrToFloat(R->Text);

app = CreateOleObject("Excel.Application");
app.OlePropertySet("Visible", true);
app.OlePropertyGet("Workbooks").OleProcedure("Add");
ws = app.OlePropertyGet("Worksheets").OlePropertyGet("Item",1);
ws.OlePropertySet("Name", "Расчет гидроциклона");
ws.OlePropertyGet("Columns").OlePropertyGet("Item",1).
OlePropertySet("ColumnWidth", 13);
range = ws.OlePropertyGet("Range", "A1:K1");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "Исходные данные(Расчет гидроциклона)");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

range = ws.OlePropertyGet("Range", "A4:E4");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "Результаты");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

 ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 1).
      OlePropertySet("Value", "Вариант");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 2).
      OlePropertySet("Value", "Q,м^3/с");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 3).
      OlePropertySet("Value", "Свх,кг/м^3");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 4).
      OlePropertySet("Value", "Рч,кг/м^3");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 5).
      OlePropertySet("Value", "Рж,кг/м^3");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 6).
      OlePropertySet("Value", "Мж,кг/мс");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 7).
      OlePropertySet("Value", "Dч,м");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 8).
      OlePropertySet("Value", "k");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 9).
      OlePropertySet("Value", "A");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 10).
      OlePropertySet("Value", "H");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 11).
      OlePropertySet("Value", "t,c");

 ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 1).
      OlePropertySet("Value", Var);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 2).
      OlePropertySet("Value", Q);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 3).
      OlePropertySet("Value", C);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 4).
      OlePropertySet("Value", P4);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 5).
      OlePropertySet("Value", Pg);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 6).
      OlePropertySet("Value", Mg);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 7).
      OlePropertySet("Value", D4);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 8).
      OlePropertySet("Value", K);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 9).
      OlePropertySet("Value", A);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 10).
      OlePropertySet("Value", H1);
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 11).
      OlePropertySet("Value", t1);

      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 1).
      OlePropertySet("Value", "Площадь");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 2).
      OlePropertySet("Value", "q");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 3).
      OlePropertySet("Value","D" );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5,4 ).
      OlePropertySet("Value","C");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 5).
      OlePropertySet("Value","R");

    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 1).
      OlePropertySet("Value",Sq);
      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 2).
      OlePropertySet("Value",q1 );
ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 3).
      OlePropertySet("Value",D);
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6,4 ).
      OlePropertySet("Value",C1 );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 5).
      OlePropertySet("Value",R1);

range = ws.OlePropertyGet("Range", "A2:K2");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

range = ws.OlePropertyGet("Range", "A5:E5");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

}
//---------------------------------------------------------------------------


void __fastcall TfrmGydro::BitBtn3MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="О программе";        
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::BitBtn4MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Справка";
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::BitBtn2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Выбор расчета";        
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::RadioButton2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Ввести данные вручную";
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::RadioButton1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Выбрать вариант из таблицы";
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::Image1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Расчет аэрируемого гидроциклона";         
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBGrid1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Таблица вариантов";         
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBVarMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Номер варианта";         
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBQMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Максимальный расход сточных вод, м^3/с";         
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBCMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Концентрация твердых частиц в сточной воде на входе гидроциклона, кг/м куб.";
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBP4MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="";
}
//---------------------------------------------------------------------------


void __fastcall TfrmGydro::DBQKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((DBQ->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
DBC->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBCKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((DBC->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
DBP4->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBP4KeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((DBP4->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
DBPg->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBPgKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((DBPg->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
DBMg->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBMgKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((DBMg->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
DBD4->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBD4KeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((DBD4->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
DBK->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBKKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((DBK->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
DBA->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::DBAKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((DBA->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
H->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::HKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((H->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
t->SetFocus();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::tKeyPress(TObject *Sender, char &Key)
{
if ((Key>='0')&&(Key<='9'))
return;
if (Key==DecimalSeparator)
{
  if ((t->Text).Pos(DecimalSeparator)!=0)
  Key=0;
  return;
}
if (Key==VK_BACK)
return;
if (Key==VK_RETURN)
{
Count->Click();
return;
}
Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::Timer1Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text=Time().FormatString("hh:mm:ss");
Timer1->Interval=1;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmGydro::FormResize(TObject *Sender)
{
Width=926;
Height=399;
}
//---------------------------------------------------------------------------


