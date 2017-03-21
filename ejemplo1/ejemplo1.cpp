#include "stdafx.h"  //________________________________________ ejemplo1.cpp
#include "ejemplo1.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ejemplo1 app;
	return app.BeginDialog(IDI_ejemplo1, hInstance);
}

void ejemplo1::Window_Open(Win::Event& e)
{
	//________________________________________________________ pie1

	btAceptar.Enabled = false;



	if (radioSuma.Checked == true) {

		tbxTitulo.Text = L"Suma";
	}
	else if (radioResta.Checked == true)
	{

		tbxTitulo.Text = L"Resultado";
	}
	else if (radioDivision.Checked == true) {

		tbxTitulo.Text = L"Division";
	}
	else if (radioMultiplicacion.Checked == true)
	{

		tbxTitulo.Text = L"Division";


	}

	//________________________________________________________ ddLista
	ddLista.Items.Add(L"Suma");
	ddLista.Items.Add(L"Resta");
	ddLista.Items.Add(L"Multiplicacion");
	ddLista.Items.Add(L"Division");
	ddLista.SetSelected(L"Suma");
	radioSuma.Checked = true;
}


void ejemplo1::btAceptar_Click(Win::Event& e)
{
	double x = tbx1.DoubleValue;
	double y = tbx2.DoubleValue;
	double resultado;


	if (radioSuma.Checked == true) {
		x = tbx1.DoubleValue;
		y = tbx2.DoubleValue;
		resultado = x + y;
		tbx3.DoubleValue = resultado;
		tbxTitulo.Text = L"Suma";

	}
	else if (radioResta.Checked == true)
	{
		x = tbx1.DoubleValue;
		y = tbx2.DoubleValue;
		resultado = x - y;
		tbx3.DoubleValue = resultado;
		tbxTitulo.Text = L"Resta";
	}
	else if (radioDivision.Checked == true) {
		x = tbx1.DoubleValue;
		y = tbx2.DoubleValue;
		resultado = x / y;
		tbx3.DoubleValue = resultado;
		tbxTitulo.Text = L"Division";
	}
	else if (radioMultiplicacion.Checked == true)
	{
		x = tbx1.DoubleValue;
		y = tbx2.DoubleValue;
		resultado = x * y;
		tbx3.DoubleValue = resultado;
		tbxTitulo.Text = L"Multiplicacion";


	}
	if (y == 0 || x == 0) {
		if (MessageBoxW(L"NO PUEDES UTILIZAR ESE SIMBOLO ", L"ERROR", MB_OK | MB_ICONERROR)) {
			return;
		}
	}

}

void ejemplo1::radioSuma_Click(Win::Event& e)
{
	tbxTitulo.Text = L"Suma";
	ddLista.SetSelected(L"Suma");
}

void ejemplo1::radioResta_Click(Win::Event& e)
{
	tbxTitulo.Text = L"Resta";
	ddLista.SetSelected(L"Resta");
}

void ejemplo1::radioMultiplicacion_Click(Win::Event& e)
{
	tbxTitulo.Text = L"Multiplicacion";
	ddLista.SetSelected(L"Multiplicacion");
}

void ejemplo1::radioDivision_Click(Win::Event& e)
{
	tbxTitulo.Text = L"Division";
	ddLista.SetSelected(L"Division");
	

}

void ejemplo1::btLimpiar_Click(Win::Event& e)
{
	tbxTitulo.Text = L" ";
	tbx1.Text = L" ";
	tbx2.Text = L" ";
	tbx3.Text = L" ";
}

void ejemplo1::ddLista_SelChange(Win::Event& e)
{
	double x = tbx1.DoubleValue;
	double y = tbx2.DoubleValue;
	double resultado;

	if (ddLista.GetText() == L"Suma") {
		radioSuma.Checked = true;
		radioResta.Checked = false;
		radioDivision.Checked = false;
		radioMultiplicacion.Checked = false;


	}
	else if (ddLista.GetText() == L"Resta") {
		radioResta.Checked = true;
		radioSuma.Checked = false;
		radioDivision.Checked = false;
		radioMultiplicacion.Checked = false;

	}
	else if (ddLista.GetText() == L"Multiplicacion") {
		radioDivision.Checked = false;
		radioResta.Checked = false;
		radioSuma.Checked = false;
		radioMultiplicacion.Checked = true;

	}
	else if (ddLista.GetText() == L"Division") {
		radioDivision.Checked = true;
		radioResta.Checked = false;
		radioSuma.Checked = false;
		radioMultiplicacion.Checked = false;

	}
}

void ejemplo1::tbx1_Change(Win::Event& e)
{
	if (tbx1.GetTextLength() != 0 && tbx2.GetTextLength() != 0) {

		btAceptar.Enabled = true;
	}
}

void ejemplo1::tbx2_Change(Win::Event& e)
{
	if (tbx1.GetTextLength() != 0 && tbx2.GetTextLength() != 0) {

		btAceptar.Enabled = true;
	}
}

