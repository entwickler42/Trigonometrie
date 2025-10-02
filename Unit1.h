//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ActnList.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
    TBitBtn *btnDraw;
    TActionList *actionList;
    TAction *actionDraw;
    TImage *image;
    TEdit *x;
    TLabel *Label1;
    TEdit *y;
    TLabel *Label2;
    TLabel *Label3;
    TEdit *txtalpha;
    void __fastcall actionDrawExecute(TObject *Sender);
    void __fastcall imageMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall imageMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
private:	// Anwender-Deklarationen
public:		// Anwender-Deklarationen
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
