//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <math.h>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    actionDrawExecute(NULL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::actionDrawExecute(TObject *Sender)
{
    image->Canvas->FillRect(TRect(0,0,image->Width,image->Height));
    image->Canvas->Pen->Color = clWindowText;
    image->Canvas->Font->Color=clWindowText;

    image->Canvas->MoveTo(image->Width / 2, 0);
    image->Canvas->LineTo(image->Width /2, image->Height);

    image->Canvas->MoveTo(0, image->Height/2);
    image->Canvas->LineTo(image->Width,image->Height/2 );

    image->Canvas->MoveTo(image->Width/2, image->Height/2);
    image->Canvas->LineTo(x->Text.ToInt()+image->Width/2,image->Height-(y->Text.ToInt()+image->Height/2));

    image->Canvas->Pen->Color = clRed;
    image->Canvas->LineTo(x->Text.ToInt()+image->Width/2,image->Height/2);
    image->Canvas->MoveTo(x->Text.ToInt()+image->Width/2,image->Height-(y->Text.ToInt()+image->Height/2));
    image->Canvas->Pen->Color = clGreen;
    image->Canvas->LineTo(image->Width/2,image->Height-(y->Text.ToInt()+image->Height/2));

    double a,b,c,alpha;

    a = x->Text.ToDouble();
    b = y->Text.ToDouble();
    c = sqrt((a*a)+(b*b));

    if( b > 0 )      alpha = ( atan(a/b) * 180/M_PI );
    else if( b < 0 ) alpha = ( ( M_PI + atan(a/b) ) * 180/M_PI );
    else             alpha = a > 0 ? 90.0f : 270.0f;
    if( alpha < 0 )  alpha = 360 + alpha ;

    AnsiString buf;
    buf.sprintf("%f",alpha);
    txtalpha->SetTextBuf(buf.c_str());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::imageMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    AnsiString buf;

    buf.sprintf("%i",X-image->Width/2);    x->SetTextBuf(buf.c_str());
    buf.sprintf("%i",image->Height/2-Y);    y->SetTextBuf(buf.c_str());

    actionDrawExecute(Sender);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::imageMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
    AnsiString buf;

    buf.sprintf("%i",X-image->Width/2);    x->SetTextBuf(buf.c_str());
    buf.sprintf("%i",image->Height/2-Y);    y->SetTextBuf(buf.c_str());

    actionDrawExecute(Sender);
}
//---------------------------------------------------------------------------

