//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <ComObj.hpp>
#include <utilcls.h>
#include "uAbout.h"
#include "uMain.h"
#include "uPeskolovki.h"
#include "uSplash.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "WinSkinData"
#pragma link "WinSkinForm"
#pragma resource "*.dfm"
TPeskolovki *Peskolovki;
Variant vVarApp,vVarBooks,vVarBook,vVarSheets,vVarSheet,vVarCells,vVarCell;
//---------------------------------------------------------------------------
__fastcall TPeskolovki::TPeskolovki(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::findChange(TObject *Sender)
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

void __fastcall TPeskolovki::CheckBox1Click(TObject *Sender)
{

Timer1->Enabled=true;

Label2->Visible=true;
Label3->Visible=true;
Label4->Visible=true;
Label5->Visible=true;
Label6->Visible=true;


EditW->Visible=true;
EditK->Visible=true;
EditQ->Visible=true;
EditD->Visible=true;
EditP->Visible=true;

Count2->Visible=true;


Edit10->Visible=true;
Edit11->Visible=true;
Edit12->Visible=true;

///Clear->Visible=true;

CheckBox2->Enabled=false;

if (CheckBox1->Checked==false){
Timer2->Enabled=true;
CheckBox2->Enabled=true;

EditW->Visible=false;
EditK->Visible=false;
EditQ->Visible=false;
EditD->Visible=false;
EditP->Visible=false;

Count2->Visible=false ;
Label11->Visible=false;

Edit10->Visible=false;
Edit11->Visible=false;
Edit12->Visible=false;

//Clear->Visible=false;


Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;
Label5->Visible=false;
Label6->Visible=false;

}


}
//---------------------------------------------------------------------------




void __fastcall TPeskolovki::ClearClick(TObject *Sender)
{
Edit10->Text="";
Edit11->Text="";
Edit12->Text="";
EditW->Text="";
EditK->Text="";
EditQ->Text="";
EditD->Text="";
EditP->Text="";
Edit1->Text="";
Edit2->Text="";
Edit7->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::CheckBox2Click(TObject *Sender)
{
find->Text="";

Timer1->Enabled=true;

DBEdit1->Visible=true;
DBEditW->Visible=true;
DBEditK->Visible=true;
DBEditQ->Visible=true;
DBEditD->Visible=true;
DBEditP->Visible=true;

Label1->Visible=true;
Label2->Visible=true;
Label3->Visible=true;
Label4->Visible=true;
Label5->Visible=true;
Label6->Visible=true;
Label9->Visible=true;
Label11->Visible=true;
//Clear->Visible=true;
DBGrid1->Visible=true;

 find->Visible=true;


Edit1->Visible=true;
Edit2->Visible=true;
Edit7->Visible=true;
//Edit8->Visible=true;


EditW->Visible=false;
EditK->Visible=false;
EditQ->Visible=false;
EditD->Visible=false;
EditP->Visible=false;

CheckBox1->Enabled=false;
Count2->Visible=false ;


if (CheckBox2->Checked==false){
Timer2->Enabled=true;
CheckBox1->Enabled=true;
DBEdit1->Visible=false;
DBEditW->Visible=false;
DBEditK->Visible=false;
DBEditQ->Visible=false;
DBEditD->Visible=false;
DBEditP->Visible=false;

Label1->Visible=false;
Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;
Label5->Visible=false;
Label6->Visible=false;
Label9->Visible=false;
Label11->Visible=false;
//Clear->Visible=false;
DBGrid1->Visible=false;



Edit1->Visible=false;
Edit2->Visible=false;
Edit7->Visible=false;
find->Visible=false;

}
}
//---------------------------------------------------------------------------



void __fastcall TPeskolovki::FormCreate(TObject *Sender)
{

int i=1;                         //����������� ���������� �������� 1
ADOTable1->First();                  //�� ������ ������
while (!(ADOTable1->Eof)) {          //����� �����������, ���� �� ��������� �����
lblCounter->Caption=i++;             //������� ���-�� ������� � ������� � Label12
ADOTable1->Next();                   //�� ��������� ������
}
ADOTable1->First();

Edit10->Visible=false;
Edit11->Visible=false;
Edit12->Visible=false;

Edit1->Visible=false;
Edit2->Visible=false;
Edit7->Visible=false;
//Edit8->Visible=false;

EditW->Visible=false;
EditK->Visible=false;
EditQ->Visible=false;
EditD->Visible=false;
EditP->Visible=false;

Count2->Visible=false ;



//Clear->Visible=false;
DBGrid1->Visible=false;

DBEdit1->Visible=false;
DBEditW->Visible=false;
DBEditK->Visible=false;
DBEditQ->Visible=false;
DBEditD->Visible=false;
DBEditP->Visible=false;

Label1->Visible=false;
Label2->Visible=false;
Label3->Visible=false;
Label4->Visible=false;
Label5->Visible=false;
Label6->Visible=false;
Label9->Visible=false;

Timer3->Enabled=true;

}
//---------------------------------------------------------------------------




void __fastcall TPeskolovki::FormCloseQuery(TObject *Sender,
      bool &CanClose)
{
frmSplash->Show();
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::BitBtn2Click(TObject *Sender)
{
Timer1->Enabled=false;
Timer2->Enabled=false;
Peskolovki->Hide();
frmSplash->Show();
}
//---------------------------------------------------------------------------




void __fastcall TPeskolovki::Timer1Timer(TObject *Sender)
{
if (Peskolovki->Width<740)
      Peskolovki->Width=Peskolovki->Width+42;
if (Peskolovki->Width>741)
      Timer1->Enabled=False;
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::Timer2Timer(TObject *Sender)
{
 if (Peskolovki->Width>229)

      Peskolovki->Width=Peskolovki->Width-42;

if (Peskolovki->Width<231)
      Timer2->Enabled=False;
}
//---------------------------------------------------------------------------


void __fastcall TPeskolovki::BitBtn4Click(TObject *Sender)
{
WinExec("hh.exe help.chm", SW_RESTORE); //��������� ���� �������, �����������
}                                       //� ����� � ����������


//---------------------------------------------------------------------------

void __fastcall TPeskolovki::BitBtn3Click(TObject *Sender)
{
frmSplash->SpeedButton4->Click();      
}
//---------------------------------------------------------------------------


void __fastcall TPeskolovki::Count2Click(TObject *Sender)
{
if (EditW->Text==""){ EditW->Text="1";
ShowMessage ("�������� 'W' �� ���� �������!!! (����������� '1' �� ���������)");}
if (EditK->Text==""){ EditK->Text="1";
ShowMessage ("�������� 'K' �� ���� �������!!! (����������� '1' �� ���������)");}
if (EditQ->Text==""){ EditQ->Text="1";
ShowMessage ("�������� 'Q' �� ���� �������!!! (����������� '1' �� ���������)");}
if (EditD->Text==""){ EditD->Text="1";
ShowMessage ("�������� 'D' �� ���� �������!!! (����������� '1' �� ���������)");}
if (EditP->Text==""){ EditP->Text="1";
ShowMessage ("�������� 'P' �� ���� �������!!! (����������� '1' �� ���������)");}

double L;
double k=StrToFloat(EditK->Text);
double Hp=StrToFloat(ComboH->Text);
double W;
//-------------------------------
double Wo;
double g=9.8;
double Dr;
double Pch;
double Psh=1000;
double Msh=0.00102;
Dr=StrToFloat(EditD->Text);
Pch=StrToFloat(EditP->Text);
Wo=(((g*Dr*Dr)/18)*((Pch-Psh)/Msh));
//------------------------------------
W=StrToFloat(EditW->Text);
L=k*Hp*W/Wo;
Edit10->Text=L;//}

//double Wo;
//double g=9.8;
//double Dr;
//double Pch;
//double Psh=1000;
//double Msh=0.00102;
Dr=StrToFloat(EditD->Text);
Pch=StrToFloat(EditP->Text);

Wo=(((g*Dr*Dr)/18)*((Pch-Psh)/Msh));
Edit11->Text=Wo;

double S;
double Q;
Wo=0;
g=9.8;
Dr=0;
Pch=0;
Psh=1000;
Msh=0.00102;

Dr=StrToFloat(EditD->Text);
Pch=StrToFloat(EditP->Text);
Wo=(((g*Dr*Dr)/18)*((Pch-Psh)/Msh));

Q=StrToFloat(EditQ->Text);

S=Q/Wo;
Edit12->Text=S;
}
//---------------------------------------------------------------------------




void __fastcall TPeskolovki::DBEdit1Change(TObject *Sender)
{
if (ComboH->Text!="") {
if (DBEdit1->Text==""){
ShowMessage ("������ ������� �� ������!");
find->Text="";
 }
double L;
double k=StrToFloat(DBEditK->Text);
double Hp=StrToFloat(ComboH->Text);
double W;
//������ Wo------------------
double Wo;
double g=9.8;
double Dr=StrToFloat(DBEditD->Text);
double Pch=StrToFloat(DBEditP->Text);
double Psh=1000;
double Msh=0.00102;
Wo=(((g*Dr*Dr)/18)*((Pch-Psh)/Msh));

Edit2->Text=Wo;
//--------------------------------------
W=StrToFloat(DBEditW->Text);
L=k*Hp*W/Wo;
Edit1->Text=L;

double S;
static double Q;

g=9.8;

Psh=1000;
Msh=0.00102;

Dr=StrToFloat(DBEditD->Text);
Pch=StrToFloat(DBEditP->Text);

Q=StrToFloat(DBEditQ->Text);

S=Q/Wo;
Edit7->Text=S;
}
else
{
ComboH->Text="0";
}

}
//---------------------------------------------------------------------------










void __fastcall TPeskolovki::Timer3Timer(TObject *Sender)
{
Timer4->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::Timer4Timer(TObject *Sender)
{
Timer3->Enabled=false;
CheckBox2->Checked=true;
Timer1->Enabled=true;
Timer4->Enabled=false;
}
//---------------------------------------------------------------------------









void __fastcall TPeskolovki::BitBtn3MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="� ���������";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::Image1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="������ ��������������� ������� ����������";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::BitBtn4MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="�������� �������";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::BitBtn2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="��������� � ������ �������";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::ExportMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="��������� � Excel";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::findMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="������� ���� ����������� �������";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::Edit10MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="����� ����������";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::CheckBox1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="������ ������ �������";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::CheckBox2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="����� ������ � �������";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::Edit11MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="�������� ��������� ������� ������";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::Edit12MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="������� ����������� ������� ����������";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::DBGrid1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="�������� ������ � �������";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::EditWMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="�������������� ������������ �������� �������� ������� ����";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::EditKMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="�����������,��������������� ����� � ��������� ����������� ������� ������, � ����� ������� �� ���������";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::EditQMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="������������ ������ ������� ���";        
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::EditDMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="������� ������� ������, �";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::EditPMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="��������� ������";
}
//---------------------------------------------------------------------------


void __fastcall TPeskolovki::DBEdit1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="�������";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::Count2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="���������� (��� ���� ������ ���� ���������!!!)";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::BtnCleanMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[1]->Text="�������� ��� ����";
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::Label17Click(TObject *Sender)
{
 ShellExecute(frmSplash->Handle,"open",Label17->Caption.c_str(),NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TPeskolovki::ExportClick(TObject *Sender)
{
if (CheckBox1->Checked==false){
Variant app, ws, range;
const int xlAlignCenter = -4108;
int Row;
double Var=StrToFloat(DBEdit1->Text);
double W=StrToFloat(DBEditW->Text);
double K=StrToFloat(DBEditK->Text);
double Q=StrToFloat(DBEditQ->Text);
double D=StrToFloat(DBEditD->Text);
double P=StrToFloat(DBEditP->Text);
//����������
double Dlin=StrToFloat(Edit1->Text);
double Skor=StrToFloat(Edit2->Text);
double Plo=StrToFloat(Edit7->Text);

app = CreateOleObject("Excel.Application");
app.OlePropertySet("Visible", true);
app.OlePropertyGet("Workbooks").OleProcedure("Add");
ws = app.OlePropertyGet("Worksheets").OlePropertyGet("Item",1);
ws.OlePropertySet("Name", "����������");
ws.OlePropertyGet("Columns").OlePropertyGet("Item",1).
OlePropertySet("ColumnWidth", 10);
range = ws.OlePropertyGet("Range", "A1:F1");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "�������� ������(������ ����������)");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

range = ws.OlePropertyGet("Range", "A4:C4");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "����������");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

 ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 1).
      OlePropertySet("Value", "�������");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 2).
      OlePropertySet("Value", "W");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 3).
      OlePropertySet("Value", "k");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 4).
      OlePropertySet("Value", "Q");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 5).
      OlePropertySet("Value", "D");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 6).
      OlePropertySet("Value", "P");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 1).
      OlePropertySet("Value",Var );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 2).
      OlePropertySet("Value",W );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 3).
      OlePropertySet("Value",K );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 4).
      OlePropertySet("Value",Q );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 5).
      OlePropertySet("Value",D);
      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 6).
      OlePropertySet("Value",P );

    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 1).
      OlePropertySet("Value","�����" );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5,2 ).
      OlePropertySet("Value","��������");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 3).
      OlePropertySet("Value","�������");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 1).
      OlePropertySet("Value",Dlin );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6,2 ).
      OlePropertySet("Value",Skor );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 3).
      OlePropertySet("Value",Plo);

range = ws.OlePropertyGet("Range", "A2:F2");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

range = ws.OlePropertyGet("Range", "A5:C5");
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
double Wv=StrToFloat(EditW->Text);
double Kv=StrToFloat(EditK->Text);
double Qv=StrToFloat(EditQ->Text);
double Dv=StrToFloat(EditD->Text);
double Pv=StrToFloat(EditP->Text);
//����������
double DlinV=StrToFloat(Edit10->Text);
double SkorV=StrToFloat(Edit11->Text);
double PloV=StrToFloat(Edit12->Text);

app = CreateOleObject("Excel.Application");
app.OlePropertySet("Visible", true);
app.OlePropertyGet("Workbooks").OleProcedure("Add");
ws = app.OlePropertyGet("Worksheets").OlePropertyGet("Item",1);
ws.OlePropertySet("Name", "����������");
ws.OlePropertyGet("Columns").OlePropertyGet("Item",1).
OlePropertySet("ColumnWidth", 10);
range = ws.OlePropertyGet("Range", "A1:F1");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "�������� ������(������ ����������)");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

range = ws.OlePropertyGet("Range", "A4:F4");
   range.OleProcedure("Merge");
   range.OlePropertySet("Value", "����������(������ ���� �������� ������)");
   range.OlePropertyGet("Font").OlePropertySet("Size", 12);
   range.OlePropertyGet("Font").OlePropertySet("Bold", true);
   range.OlePropertySet("HorizontalAlignment", xlAlignCenter);
   range.OlePropertySet("VerticalAlignment", xlAlignCenter);
   range.OlePropertySet("RowHeight", 20);

ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 1).
      OlePropertySet("Value", "W");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 2).
      OlePropertySet("Value", "k");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 3).
      OlePropertySet("Value", "Q");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 4).
      OlePropertySet("Value", "D");
   ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 2, 5).
      OlePropertySet("Value", "P");

    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 1).
      OlePropertySet("Value",Wv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 2).
      OlePropertySet("Value",Kv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 3).
      OlePropertySet("Value",Qv );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 4).
      OlePropertySet("Value",Dv);
      ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 3, 5).
      OlePropertySet("Value",Pv );

    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 1).
      OlePropertySet("Value","�����" );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5,2 ).
      OlePropertySet("Value","��������");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 5, 3).
      OlePropertySet("Value","�������");
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 1).
      OlePropertySet("Value",DlinV );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6,2 ).
      OlePropertySet("Value",SkorV );
    ws.OlePropertyGet("Cells").
      OlePropertyGet("Item", 6, 3).
      OlePropertySet("Value",PloV);

range = ws.OlePropertyGet("Range", "A2:F2");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);

for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);

range = ws.OlePropertyGet("Range", "A5:F5");
range.OlePropertyGet("Interior").OlePropertySet("Color", 0xC0C0C0);
range.OlePropertySet("HorizontalAlignment", xlAlignCenter);


for (int i=1; i<=4; i++)
      range.OlePropertyGet("Borders").
            OlePropertyGet("Item", i).
            OlePropertySet("LineStyle", 1);        
}

}
//---------------------------------------------------------------------------




void __fastcall TPeskolovki::FormResize(TObject *Sender)
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

void __fastcall TPeskolovki::Timer5Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text=Time().FormatString("hh:mm:ss");
Timer5->Interval=1;
}
//---------------------------------------------------------------------------

