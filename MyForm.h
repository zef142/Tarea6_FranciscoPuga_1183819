#pragma once
#include "DoubleLink.h";
#include "Node.h";
#include "FiguraGeometrica.h";
#include "Circle.h";
#include "Rectangle.h";
#include "Triangle.h";

namespace Tarea6FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		DoubleLink<FiguraGeometrica*>* myFigureList;
		MyForm(void)
		{
			InitializeComponent();
			myFigureList = new DoubleLink<FiguraGeometrica*>();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ pnlList;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pnlList = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(29, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(217, 160);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Circulo";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(265, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(217, 160);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Triangulo";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(499, 24);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(217, 160);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Rectangulo";
			// 
			// pnlList
			// 
			this->pnlList->BackColor = System::Drawing::Color::White;
			this->pnlList->Location = System::Drawing::Point(16, 194);
			this->pnlList->Name = L"pnlList";
			this->pnlList->Size = System::Drawing::Size(919, 351);
			this->pnlList->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Circunferencia:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Base:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Altura:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Alto:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Ancho:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(96, 92);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(95, 35);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(95, 92);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Insertar Circulo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(19, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Insertar Triangulo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(18, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Insertar Rectangulo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 557);
			this->Controls->Add(this->pnlList);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Trim() != "") {
		FiguraGeometrica* newCircle = new Circle();
		newCircle->width = Convert::ToDouble(textBox1->Text);
		newCircle->type = 1;
		newCircle->area = newCircle->GetArea();
		newCircle->perimeter = newCircle->GetPerimeter();
		myFigureList->InsertAtEnd(newCircle);

		if (!myFigureList->IsEmpty()) {
			Node<FiguraGeometrica*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) {
				FiguraGeometrica* actual = temp->value;
				DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->width, actual->width);
				temp = temp->next;
			}

		}

		MessageBox::Show("Circulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((textBox2->Text->Trim() != "") && (textBox3->Text->Trim() != ""))
	{
		FiguraGeometrica* newTriangle = new Triangle();
		newTriangle->height = Convert::ToDouble(textBox3->Text);
		newTriangle->width = Convert::ToDouble(textBox2->Text);
		newTriangle->type = 2;
		newTriangle->area = newTriangle->GetArea();
		newTriangle->perimeter = newTriangle->GetPerimeter();
		myFigureList->InsertAtEnd(newTriangle);

		if (!myFigureList->IsEmpty())
		{
			Node<FiguraGeometrica*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++)
			{
				FiguraGeometrica* actual = temp->value;
				DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
				temp = temp->next;
			}

		}

		MessageBox::Show("Triangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((textBox4->Text->Trim() != "") && (textBox5->Text->Trim() != "")) {
		FiguraGeometrica* newRectangle = new Triangle();
		newRectangle->height = Convert::ToDouble(textBox4->Text);
		newRectangle->width = Convert::ToDouble(textBox5->Text);
		newRectangle->type = 3;
		newRectangle->area = newRectangle->GetArea();
		newRectangle->perimeter = newRectangle->GetPerimeter();
		myFigureList->InsertAtEnd(newRectangle);


		if (!myFigureList->IsEmpty()) {
			Node<FiguraGeometrica*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) {
				FiguraGeometrica* actual = temp->value;
				DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
				temp = temp->next;
			}

		}


		MessageBox::Show("Rectangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
	   void DrawNode(Graphics^ canvas, int posx, int posy, int type, double area, double perimeter, double height, double width) {
		   Brush^ brush = gcnew SolidBrush(Color::Navy);
		   Brush^ brushstring = gcnew SolidBrush(Color::White);
		   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);

		   switch (type)
		   {
		   case 1: {
			   canvas->FillEllipse(brush, RectangleF(posx, posy, width * 5, width * 5));
		   }break;
		   case 2: {
			   PointF pun1 = PointF(posx, posy);
			   PointF pun2 = PointF(posx, posy + height * 5);
			   PointF pun3 = PointF(posx + width * 5, posy + height * 5);
			   array<PointF>^ curvePoints = { pun1,pun2,pun3 };
			   canvas->FillPolygon(brush, curvePoints);
		   }break;
		   case 3: {
			   canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));
		   }break;
		   default:
			   break;
		   }

		   canvas->DrawString("Area: " + area, fuente, brushstring, posx + 1, posy + 20);
		   canvas->DrawString("Perimetro: " + perimeter, fuente, brushstring, posx + 1, posy + 60);
	   }
};
}
