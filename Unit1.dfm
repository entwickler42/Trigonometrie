object Form1: TForm1
  Left = 276
  Top = 217
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Trigonometrie'
  ClientHeight = 251
  ClientWidth = 387
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object image: TImage
    Left = 0
    Top = 0
    Width = 249
    Height = 249
    OnMouseDown = imageMouseDown
    OnMouseMove = imageMouseMove
  end
  object Label1: TLabel
    Left = 256
    Top = 8
    Width = 16
    Height = 13
    Caption = 'X ='
  end
  object Label2: TLabel
    Left = 332
    Top = 8
    Width = 16
    Height = 13
    Caption = 'Y ='
  end
  object Label3: TLabel
    Left = 256
    Top = 32
    Width = 36
    Height = 13
    Caption = 'Alpha ='
  end
  object btnDraw: TBitBtn
    Left = 252
    Top = 224
    Width = 133
    Height = 25
    Action = actionDraw
    Caption = '&Zeichnen'
    TabOrder = 0
  end
  object x: TEdit
    Left = 296
    Top = 4
    Width = 33
    Height = 21
    TabOrder = 1
    Text = '0'
  end
  object y: TEdit
    Left = 352
    Top = 4
    Width = 33
    Height = 21
    TabOrder = 2
    Text = '0'
  end
  object txtalpha: TEdit
    Left = 296
    Top = 28
    Width = 89
    Height = 21
    TabOrder = 3
    Text = '0'
  end
  object actionList: TActionList
    Left = 456
    Top = 4
    object actionDraw: TAction
      OnExecute = actionDrawExecute
    end
  end
end
