#pragma once  //______________________________________ ejemplo1.h  
#include "Resource.h"
class ejemplo1 : public Win::Dialog
{
public:
	ejemplo1()
	{
	}
	~ejemplo1()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btAceptar;
	Win::Textbox tbx1;
	Win::Textbox tbx2;
	Win::Textbox tbx3;
	Win::Label lb1;
	Win::Label lb2;
	Win::Button radioSuma;
	Win::Button radioResta;
	Win::Button radioMultiplicacion;
	Win::Button radioDivision;
	Win::Textbox tbxTitulo;
	Win::Button btLimpiar;
	Win::DropDownList ddLista;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(25.37354);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(5.00063);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ejemplo1";
		btAceptar.CreateX(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_DEFPUSHBUTTON | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 17.48896, 2.91042, 3.88937, 0.68792, hWnd, 1000);
		tbx1.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_NUMBER | ES_LEFT | ES_WINNORMALCASE, 0.55563, 2.96333, 5.00063, 0.60854, hWnd, 1001);
		tbx2.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_NUMBER | ES_LEFT | ES_WINNORMALCASE, 6.35000, 2.96333, 4.68312, 0.60854, hWnd, 1002);
		tbx3.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 11.56229, 2.96333, 4.68312, 0.60854, hWnd, 1003);
		lb1.CreateX(NULL, L"+", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.84729, 3.14854, 0.39688, 0.60854, hWnd, 1004);
		lb2.CreateX(NULL, L"=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 11.19188, 3.12208, 0.29104, 0.60854, hWnd, 1005);
		radioSuma.CreateX(NULL, L"Suma", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 0.63500, 4.18042, 4.63021, 0.63500, hWnd, 1006);
		radioResta.CreateX(NULL, L"Resta", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 6.48229, 4.10104, 4.47146, 0.63500, hWnd, 1007);
		radioMultiplicacion.CreateX(NULL, L"Multiplicacion", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 11.77396, 4.04812, 4.49792, 0.63500, hWnd, 1008);
		radioDivision.CreateX(NULL, L"Division", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 17.62125, 3.96875, 3.83646, 0.63500, hWnd, 1009);
		tbxTitulo.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 7.46125, 0.37042, 5.18583, 0.60854, hWnd, 1010);
		btLimpiar.CreateX(NULL, L"Limpiar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 21.98688, 2.83104, 3.20146, 0.68792, hWnd, 1011);
		ddLista.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 17.46250, 0.26458, 5.95313, 0.60854, hWnd, 1012);
		this->SetDefaultButton(btAceptar);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btAceptar.Font = fontArial009A;
		tbx1.Font = fontArial009A;
		tbx2.Font = fontArial009A;
		tbx3.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		radioSuma.Font = fontArial009A;
		radioResta.Font = fontArial009A;
		radioMultiplicacion.Font = fontArial009A;
		radioDivision.Font = fontArial009A;
		tbxTitulo.Font = fontArial009A;
		btLimpiar.Font = fontArial009A;
		ddLista.Font = fontArial009A;
		btAceptar.SetDock(DOCK_BORDER, DOCK_BORDER, DOCK_NONE, DOCK_CENTER);
	}
	//_________________________________________________
	void btAceptar_Click(Win::Event& e);
	void tbx1_Change(Win::Event& e);
	void tbx2_Change(Win::Event& e);
	void radioSuma_Click(Win::Event& e);
	void radioResta_Click(Win::Event& e);
	void radioMultiplicacion_Click(Win::Event& e);
	void radioDivision_Click(Win::Event& e);
	void btLimpiar_Click(Win::Event& e);
	void ddLista_SelChange(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAceptar.IsEvent(e, BN_CLICKED)) { btAceptar_Click(e); return true; }
		if (tbx1.IsEvent(e, EN_CHANGE)) { tbx1_Change(e); return true; }
		if (tbx2.IsEvent(e, EN_CHANGE)) { tbx2_Change(e); return true; }
		if (radioSuma.IsEvent(e, BN_CLICKED)) { radioSuma_Click(e); return true; }
		if (radioResta.IsEvent(e, BN_CLICKED)) { radioResta_Click(e); return true; }
		if (radioMultiplicacion.IsEvent(e, BN_CLICKED)) { radioMultiplicacion_Click(e); return true; }
		if (radioDivision.IsEvent(e, BN_CLICKED)) { radioDivision_Click(e); return true; }
		if (btLimpiar.IsEvent(e, BN_CLICKED)) { btLimpiar_Click(e); return true; }
		if (ddLista.IsEvent(e, CBN_SELCHANGE)) { ddLista_SelChange(e); return true; }
		return false;
	}
};
