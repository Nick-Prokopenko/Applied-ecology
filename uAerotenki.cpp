//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include  <ComObj.hpp>
#include  <utilcls.h>
#include "uAbout.h"
#include "uAerotenki.h"
#include "uSplash.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "WinSkinData"
#pragma link "WinSkinForm"
#pragma resource "*.dfm"
TAerotenki *Aerotenki;
//---------------------------------------------------------------------------
__fastcall TAerotenki::TAerotenki(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::Edit1Change(TObject *Sender)
{
if (Edit1->Text>=1){
ADOTable1->Filter="Вариант='"+Edit1->Text+"'";
}

if (Edit1->Text==""){
ADOTable1->Filter="";
ADOTable1->First() ;
}
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::CheckBox1Click(TObject *Sender)
{

Timer1->Enabled=true;

Label2->Visible=true;
Label3->Visible=true;
Label4->Visible=true;
Label5->Visible=true;

EditDv->Visible=true;
EditTv->Visible=true;
EditQvv->Visible=true;
EditSv->Visible=true;
EditVv->Visible=true;
EditLv->Visible=true;
EditHpolnV->Visible=true;
EditQ->Visible=true;
Edith->Visible=true;
EditBH->Visible=true;
EditLa->Visible=true;
EditK->Visible=true;
EditJ->Visible=true;

Clear1->Visible=true;

CheckBox2->Enabled=false;
if (CheckBox1->Checked==false){
Timer2->Enabled=true;
CheckBox2->Enabled=true;

Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;

EditDv->Visible=false;
EditTv->Visible=false;
EditQvv->Visible=false;
EditSv->Visible=false;
EditVv->Visible=false;
EditLv->Visible=false;
EditHpolnV->Visible=false;

EditQ->Visible=false;
Edith->Visible=false;
EditBH->Visible=false;
EditLa->Visible=false;
EditK->Visible=false;
EditJ->Visible=false;


Clear1->Visible=false;

}
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::CheckBox2Click(TObject *Sender)
{

Timer1->Enabled=true;

DBEdit1->Visible=true;
DBEditQ->Visible=true;
DBEdith->Visible=true;
DBEditBH->Visible=true;
DBEditLa->Visible=true;
DBEditK->Visible=true;
DBEditJ->Visible=true;

Label1->Visible=true;
Label21->Visible=true;
lblCounter->Visible=true;
Label2->Visible=true;
Label3->Visible=true;
Label4->Visible=true;
Label5->Visible=true;

Label7->Visible=true;

DBGrid1->Visible=true;



Edit1->Visible=true;
EditUdRashod->Visible=true;
EditT->Visible=true;
EditQv->Visible=true;
EditS->Visible=true;
EditV->Visible=true;
EditL->Visible=true;
EditHpoln->Visible=true;

EditQ->Visible=false;
Edith->Visible=false;
EditBH->Visible=false;
EditLa->Visible=false;
EditK->Visible=false;
EditJ->Visible=false;


EditDv->Visible=false;
EditTv->Visible=false;
EditQvv->Visible=false;
EditSv->Visible=false;
EditVv->Visible=false;
EditLv->Visible=false;
EditHpolnV->Visible=false;



CheckBox1->Enabled=false;

if (CheckBox2->Checked==false){
Timer2->Enabled=true;
CheckBox1->Enabled=true;
DBEdit1->Visible=false;
DBEditQ->Visible=false;
DBEdith->Visible=false;
DBEditBH->Visible=false;
DBEditLa->Visible=false;
DBEditK->Visible=false;
DBEditJ->Visible=false;

Label21->Visible=false;
lblCounter->Visible=false;
Label1->Visible=false;
Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;
Label7->Visible=false;

DBGrid1->Visible=false;



Edit1->Visible=false;
EditUdRashod->Visible=false;
EditT->Visible=false;
EditQv->Visible=false;
EditS->Visible=false;
EditV->Visible=false;
EditL->Visible=false;
EditHpoln->Visible=false;



}
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::FormCreate(TObject *Sender)
{

int i=1;                         //Присваиваем переменным значение 1
ADOTable1->First();                  //на первую запись
while (!(ADOTable1->Eof)) {          //будет повторяться, пока не достигнет конца
lblCounter->Caption=i++;             //считаем кол-во записей и выводим в Label12
ADOTable1->Next();                   //на следующую запись
}
ADOTable1->First();

DBEdit1->Visible=false;
DBEditQ->Visible=false;
DBEdith->Visible=false;
DBEditBH->Visible=false;

Label1->Visible=false;
Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;
Label7->Visible=false;

DBGrid1->Visible=false;



Edit1->Visible=false;
EditUdRashod->Visible=false;
EditT->Visible=false;
EditQv->Visible=false;
EditS->Visible=false;
EditV->Visible=false;
EditL->Visible=false;
EditHpoln->Visible=false;
Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;

EditDv->Visible=false;
EditTv->Visible=false;
EditQvv->Visible=false;
EditSv->Visible=false;
EditVv->Visible=false;
EditLv->Visible=false;
EditHpolnV->Visible=false;

EditQ->Visible=false;
Edith->Visible=false;
EditBH->Visible=false;



Clear1->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TAerotenki::Clear1Click(TObject *Sender)
{
EditDv->Text="";
EditTv->Text="";
EditQvv->Text="";
EditSv->Text="";
EditVv->Text="";
EditLv->Text="";
EditHpolnV->Text="";
EditQ->Text="";
Edith->Text="";
EditBH->Text="";
EditLa->Text="";
EditK->Text="";
EditJ->Text="";  
}
//---------------------------------------------------------------------------



void __fastcall TAerotenki::BitBtn2Click(TObject *Sender)
{
Aerotenki->Close();
frmSplash->Show();
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::FormCloseQuery(TObject *Sender, bool &CanClose)
{

frmSplash->Show();

}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::DBEdit1Change(TObject *Sender)
{
if (DBEdit1->Text==""){
ShowMessage ("Данный вариант не найден!");
Edit1->Text="";
}

double D;
double La=StrToFloat(DBEditLa->Text);
double k=StrToFloat(DBEditK->Text);
double h=StrToFloat(DBEdith->Text);
D=(2*La)/(k*h);
EditUdRashod->Text=D;



double J=StrToFloat(DBEditJ->Text);

EditT->Text=(2*La)/(k*J);

double Qv;
double Q=StrToFloat(DBEditQ->Text);
D=(2*La)/(k*h);
Qv=D*Q;
EditQv->Text=Qv;

double S;
D=(2*La)/(k*h);
Qv=D*Q;
S=Qv/J;
EditS->Text=S;

double V;

D=(2*La)/(k*h);
Qv=D*Q;
S=Qv/J;
V=S*h ;
EditV->Text=V;

double L;
double b=((StrToFloat(DBEditBH->Text))*h);
D=(2*La)/(k*h);
Qv=D*Q;
S=Qv/J;
L=S/b;
EditL->Text=L;

double Hpoln;
Hpoln=h+0.8;
EditHpoln->Text=Hpoln;
        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::CountClick(TObject *Sender)
{
if (EditQ->Text==""){ EditQ->Text="1";
ShowMessage ("Значение 'Q' не было введено!!! (установлено '1' по умолчанию)");}
if (Edith->Text==""){ Edith->Text="1";
ShowMessage ("Значение 'H' не было введено!!! (установлено '1' по умолчанию)");}
if (EditBH->Text==""){ EditBH->Text="1";
ShowMessage ("Значение 'b/h' не было введено!!! (установлено '1' по умолчанию)");}
if (EditLa->Text==""){ EditLa->Text="1";
ShowMessage ("Значение 'La' не было введено!!! (установлено '1' по умолчанию)");}
if (EditK->Text==""){ EditK->Text="1";
ShowMessage ("Значение 'k' не было введено!!! (установлено '1' по умолчанию)");}
if (EditJ->Text==""){ EditJ->Text="1";
ShowMessage ("Значение 'J' не было введено!!! (установлено '1' по умолчанию)");}

double D;
double La=StrToFloat(EditLa->Text);
double k=StrToFloat(EditK->Text);
double h=StrToFloat(Edith->Text);
D=(2*La)/(k*h);
EditDv->Text=D;



double t;
double J=StrToFloat(EditJ->Text);
t=(2*La)/(k*J);
EditTv->Text=t;

double Qv;
double Q=StrToFloat(EditQ->Text);


D=(2*La)/(k*h);
Qv=D*Q;
EditQvv->Text=Qv;

double S;

D=(2*La)/(k*h);
Qv=D*Q;
S=Qv/J;
EditSv->Text=S;

double V;

D=(2*La)/(k*h);
Qv=D*Q;
S=Qv/J;
V=S*h ;
EditVv->Text=V;

double L;

double b=((StrToFloat(EditBH->Text))*h);
D=(2*La)/(k*h);
Qv=D*Q;
S=Qv/J;
L=S/b;
EditLv->Text=L;


double Hpoln;
Hpoln=h+0.8;
EditHpolnV->Text=Hpoln;

}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::Timer1Timer(TObject *Sender)
{
if (Aerotenki->Width<740)
      Aerotenki->Width=Aerotenki->Width+42;
if (Aerotenki->Width>741)
      Timer1->Enabled=False;        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::Timer2Timer(TObject *Sender)
{
 if (Aerotenki->Width>229)

      Aerotenki->Width=Aerotenki->Width-42;

if (Aerotenki->Width<231)
      Timer2->Enabled=False;        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::Label6Click(TObject *Sender)
{
ShellExecute(frmSplash->Handle,"open",Label17->Caption.c_str(),NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::BitBtn3Click(TObject *Sender)
{
frmSplash->SpeedButton4->Click();
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::BitBtn4Click(TObject *Sender)
{
WinExec("hh.exe help.chm", SW_RESTORE); //открывает файл справки, находящийся
}                                       //в папке с программой

//---------------------------------------------------------------------------

void __fastcall TAerotenki::BitBtn1Click(TObject *Sender)
{
if (CheckBox1->Checked==false){
Variant app, ws, range;
const int xlAlignCenter = -4108;
int Row;
double Var=StrToFloat(DBEdit1->Text);
double Q=StrToFloat(DBEditQ->Text);
double h=StrToFloat(DBEdith->Text);
double BH=StrToFloat(DBEditBH->Text);
double La=StrToFloat(DBEditLa->Text);
double k=StrToFloat(DBEditK->Text);
double J=StrToFloat(DBEditJ->Text);
//Результаты
double D=StrToFloat(EditUdRashod->Text);
double t=StrToFloat(EditT->Text);
double Qv=StrToFloat(EditQv->Text);
double S=StrToFloat(EditS->Text);
double V=StrToFloat(EditV->Text);
double L=StrToFloat(EditL->Text);
double H=StrToFloat(EditHpoln->Text);


app = CreateOleObject("Excel.Application");
app.OlePropertySet("Visible", true);
app.OlePropertyGet("Workbooks").OleProcedure("Add");
ws = app.OlePropertyGet("Worksheets").OlePropertyGet("Item",1);
ws.OlePropertySet("Name", "Аэротенки");
ws.OlePropertyGet("Columns").OlePropertyGet("Item",1).
OlePropertySet("ColumnWidth", 13);
range = ws.OlePropertyGet("Range", "A1:G1");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "Исходные данные(Расчет аэротенков)");
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
      OlePropertySet("Value", "Вариант");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 2).
      OlePropertySet("Value", "Q");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 3).
      OlePropertySet("Value", "h");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 4).
      OlePropertySet("Value", "BH");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 5).
      OlePropertySet("Value", "La");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 6).
      OlePropertySet("Value", "k");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 7).
      OlePropertySet("Value", "J");

ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 1).
      OlePropertySet("Value",Var );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 2).
      OlePropertySet("Value",Q );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 3).
      OlePropertySet("Value",h );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 4).
      OlePropertySet("Value",BH );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 5).
      OlePropertySet("Value",La );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 6).
      OlePropertySet("Value",k );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 7).
      OlePropertySet("Value",J );

      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 1).
      OlePropertySet("Value", "D");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 2).
      OlePropertySet("Value", "t");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 3).
      OlePropertySet("Value","Qv" );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5,4 ).
      OlePropertySet("Value","S");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 5).
      OlePropertySet("Value","V");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5,6 ).
      OlePropertySet("Value","L");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 7).
      OlePropertySet("Value","H");



    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 1).
      OlePropertySet("Value",D);
      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 2).
      OlePropertySet("Value",t );
ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 3).
      OlePropertySet("Value",Qv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6,4 ).
      OlePropertySet("Value",S );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 5).
      OlePropertySet("Value",V);
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6,6 ).
      OlePropertySet("Value",L );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 7).
      OlePropertySet("Value",H);

range = ws.OlePropertyGet("Range", "A2:G2");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

range = ws.OlePropertyGet("Range", "A5:G5");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);
}
else
{
Variant app, ws, range;
const int xlAlignCenter = -4108;
int Row;
double Qv=StrToFloat(EditQ->Text);
double hv=StrToFloat(Edith->Text);
double BHv=StrToFloat(EditBH->Text);
double Lav=StrToFloat(EditLa->Text);
double Kv=StrToFloat(EditK->Text);
double Jv=StrToFloat(EditJ->Text);
//??????????
double Dv=StrToFloat(EditDv->Text);
double tv=StrToFloat(EditTv->Text);
double Qvv=StrToFloat(EditQvv->Text);
double Sv=StrToFloat(EditSv->Text);
double Vv=StrToFloat(EditVv->Text);
double Lv=StrToFloat(EditLv->Text);
double Hv=StrToFloat(EditHpolnV->Text);

app = CreateOleObject("Excel.Application");
app.OlePropertySet("Visible", true);
app.OlePropertyGet("Workbooks").OleProcedure("Add");
ws = app.OlePropertyGet("Worksheets").OlePropertyGet("Item",1);
ws.OlePropertySet("Name", "Аэротенки");
ws.OlePropertyGet("Columns").OlePropertyGet("Item",1).
OlePropertySet("ColumnWidth", 13);
range = ws.OlePropertyGet("Range", "A1:G1");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "Исходные данные(Расчет аэротенков)");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

range = ws.OlePropertyGet("Range", "A4:G4");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "Результаты(ручной ввод исходных данных)");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);


   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 1).
      OlePropertySet("Value", "Q");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 2).
      OlePropertySet("Value", "h");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 3).
      OlePropertySet("Value", "BH");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 4).
      OlePropertySet("Value", "La");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 5).
      OlePropertySet("Value", "k");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 6).
      OlePropertySet("Value", "J");

    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 1).
      OlePropertySet("Value",Qv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 2).
      OlePropertySet("Value",hv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 3).
      OlePropertySet("Value",BHv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 4).
      OlePropertySet("Value",Lav );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 5).
      OlePropertySet("Value",Kv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 6).
      OlePropertySet("Value",Jv );

      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 1).
      OlePropertySet("Value", "D");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 2).
      OlePropertySet("Value", "t");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 3).
      OlePropertySet("Value","Qv" );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5,4 ).
      OlePropertySet("Value","S");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 5).
      OlePropertySet("Value","V");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5,6 ).
      OlePropertySet("Value","L");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 7).
      OlePropertySet("Value","H");



    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 1).
      OlePropertySet("Value",Dv);
      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 2).
      OlePropertySet("Value",tv );
ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 3).
      OlePropertySet("Value",Qvv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6,4 ).
      OlePropertySet("Value",Sv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 5).
      OlePropertySet("Value",Vv);
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6,6 ).
      OlePropertySet("Value",Lv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 7).
      OlePropertySet("Value",Hv);

range = ws.OlePropertyGet("Range", "A2:F2");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

range = ws.OlePropertyGet("Range", "A5:G5");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

}
}
//---------------------------------------------------------------------------


void __fastcall TAerotenki::FormClose(TObject *Sender,
      TCloseAction &Action)
{
caFree;        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::Image1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Расчет аэротенков";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::BitBtn3MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="О программе";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::BitBtn4MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Справка";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::BitBtn2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Вернуться к выбору расчета";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::BitBtn1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Отправить в Excel";
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::Edit1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Введите сюда № варианта";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::Label6MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Перейти по ссылке";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditQMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Среднечасовой расход сточных вод в течении суток";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EdithMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Рабочая глубина аэротенка,м";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditBHMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Ширина секции аэротенка";        
}
//---------------------------------------------------------------------------


void __fastcall TAerotenki::EditLaMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="БПК (БПК полный) поступающий в аэротенк сточной воды,кг/м куб.";

}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditKMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Коэффициент использования воздуха, кг/м^4";
}
//---------------------------------------------------------------------------


void __fastcall TAerotenki::EditJMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Интенсивность аэрации, м^3/м^2 с";        
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::DBGrid1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Таблица вариантов. Выберите необходимый вариант, результаты выводятся автоматически";
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditDvMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Удельный расход воздуха";            
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditTvMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Продолжительность аэрации";          
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditQvvMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Суммарный расход воздуха, подаваемого в аэротенк";          
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditSvMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Площадь аэротенков ";          
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditVvMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Объем аэротенков ";          
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditLvMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Длина аэротенка";
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::EditHpolnVMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="Полная высота аэротенка ";          
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::FormResize(TObject *Sender)
{
if (Height>=500){

if (Width<=250){
Width=230;
Height=457;
}
else
{
Width=765;
Height=457;
}

}
}
//---------------------------------------------------------------------------

void __fastcall TAerotenki::Timer3Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text=Time().FormatString("hh:mm:ss");
Timer3->Interval=1;        
}
//---------------------------------------------------------------------------

