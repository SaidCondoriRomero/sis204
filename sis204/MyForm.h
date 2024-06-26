#pragma once

using namespace RegistroLibro;

namespace sis204 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			arbol = gcnew RegistroLibro::ArbolBinarioBusqueda();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListBox^ listBox1;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		ArbolBinarioBusqueda^ arbol;
	private: 
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(290, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO DE LIBROS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NumeroISBN";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(318, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Titulo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Autor";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(318, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Genero";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(153, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(380, 153);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(380, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ver lista";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_ClickVer);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(164, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_ClickAgregar);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(295, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_ClickBuscar);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(53, 332);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_ClickEditar);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(164, 332);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_ClickEliminar);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(295, 332);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Salir";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(520, 63);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(676, 308);
			this->listBox1->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1230, 480);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   //ver lista
	private: System::Void button1_ClickVer(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		System::Collections::Generic::List<RegistroLibro::Libro^>^ libros = arbol->listarLibros();
		for each (RegistroLibro::Libro ^ libro in libros) {
			listBox1->Items->Add(libro->ToString());
		}
	}
		   //agregar
private: System::Void button2_ClickAgregar(System::Object^ sender, System::EventArgs^ e) {
	String^ nro_ISBN = textBox1->Text;
	String^ titulo = textBox4->Text;
	String^ autor = textBox2->Text;
	String^ genero = textBox3->Text;

	RegistroLibro::Libro^ libro = gcnew RegistroLibro::Libro(nro_ISBN, titulo, autor, genero);
	arbol->insertL(libro);

	MessageBox::Show("Libro agregado correctamente.");
}
	   //buscar
	   /*
private: System::Void button3_ClickBuscar(System::Object^ sender, System::EventArgs^ e) {
	String^ nro_ISBN = textBox1->Text;
	RegistroLibro::Libro^ libro = arbol->BuscarLibro(nro_ISBN);
	if (libro != nullptr) {
		textBox4->Text = libro->titulo;
		textBox2->Text = libro->autor;
		textBox3->Text = libro->genero;
		MessageBox::Show("Libro encontrado.");
	}
	else {
		MessageBox::Show("Libro no encontrado.");
	}
}*/
	   private: System::Void button3_ClickBuscar(System::Object^ sender, System::EventArgs^ e) {
		   String^ nro_ISBN = textBox1->Text;
		   RegistroLibro::Libro^ libro = arbol->BuscarLibro(nro_ISBN);
		   listBox1->Items->Clear(); // Limpiar el listBox1 antes de mostrar el resultado
		   if (libro != nullptr) {
			   textBox4->Text = libro->titulo;
			   textBox2->Text = libro->autor;
			   textBox3->Text = libro->genero;
			   listBox1->Items->Add(libro->ToString());
			   MessageBox::Show("Libro encontrado.");
		   }
		   else {
			   MessageBox::Show("Libro no encontrado.");
		   }
	   }


	   //editar
private: System::Void button4_ClickEditar(System::Object^ sender, System::EventArgs^ e) {
	String^ nro_ISBN = textBox1->Text;
	RegistroLibro::Libro^ libro = arbol->BuscarLibro(nro_ISBN);
	if (libro != nullptr) {
		libro->titulo = textBox4->Text;
		libro->autor = textBox2->Text;
		libro->genero = textBox3->Text;
		MessageBox::Show("Libro editado correctamente.");
	}
	else {
		MessageBox::Show("Libro no encontrado.");
	}
}

	   	   //eliminar
private: System::Void button5_ClickEliminar(System::Object^ sender, System::EventArgs^ e) {
	String^ nro_ISBN = textBox1->Text;
	arbol->EliminarLibro(nro_ISBN);
	MessageBox::Show("Libro eliminado correctamente.");
}

	   	   	   //salir
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
