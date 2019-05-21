#pragma once
#include "FunctionalModule.h"

namespace SMO_INTERFACE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/*class A{
	};*/

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		Graphics ^gr;
	private: System::Windows::Forms::Button^  button5;
			 bool poshag;
			 	Vxod* Pvxod;
				MyBuffer* Pbuffer;
				Vixod* Pvixod;
				int Pukaz;
				int* PoshPribor;
				int* PoshBuffer;
				int kolist,kolbuf,kolpr;
				bool cPoshag;
				double FULLTIME;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;

	private: System::Windows::Forms::Label^  label7;
			 //class A{};
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  KMIN;
	protected: 
	private: System::Windows::Forms::TextBox^  LAMBDA;
	private: System::Windows::Forms::TextBox^  ISTOCHNIKI;
	private: System::Windows::Forms::TextBox^  BUFFER;
	private: System::Windows::Forms::TextBox^  PRIBORI;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Button^  button4;








	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->KMIN = (gcnew System::Windows::Forms::TextBox());
			this->LAMBDA = (gcnew System::Windows::Forms::TextBox());
			this->ISTOCHNIKI = (gcnew System::Windows::Forms::TextBox());
			this->BUFFER = (gcnew System::Windows::Forms::TextBox());
			this->PRIBORI = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// KMIN
			// 
			this->KMIN->Location = System::Drawing::Point(90, 22);
			this->KMIN->Name = L"KMIN";
			this->KMIN->Size = System::Drawing::Size(57, 20);
			this->KMIN->TabIndex = 0;
			// 
			// LAMBDA
			// 
			this->LAMBDA->Location = System::Drawing::Point(90, 48);
			this->LAMBDA->Name = L"LAMBDA";
			this->LAMBDA->Size = System::Drawing::Size(57, 20);
			this->LAMBDA->TabIndex = 1;
			// 
			// ISTOCHNIKI
			// 
			this->ISTOCHNIKI->Location = System::Drawing::Point(90, 74);
			this->ISTOCHNIKI->Name = L"ISTOCHNIKI";
			this->ISTOCHNIKI->Size = System::Drawing::Size(57, 20);
			this->ISTOCHNIKI->TabIndex = 2;
			// 
			// BUFFER
			// 
			this->BUFFER->Location = System::Drawing::Point(90, 100);
			this->BUFFER->Name = L"BUFFER";
			this->BUFFER->Size = System::Drawing::Size(57, 20);
			this->BUFFER->TabIndex = 3;
			// 
			// PRIBORI
			// 
			this->PRIBORI->Location = System::Drawing::Point(90, 126);
			this->PRIBORI->Name = L"PRIBORI";
			this->PRIBORI->Size = System::Drawing::Size(57, 20);
			this->PRIBORI->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Кам- ин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Лямбда";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Источники";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Буфер";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Приборы";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->PRIBORI);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->KMIN);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->LAMBDA);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->ISTOCHNIKI);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->BUFFER);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(160, 193);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задайте параметры:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(19, 162);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(33, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"edit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(64, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Ошибка ввода!";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Запустить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Запустить пошагово";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(178, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(549, 251);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Сводная таблица результатов:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, 
				this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8});
			this->dataGridView1->Location = System::Drawing::Point(6, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(536, 223);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Location = System::Drawing::Point(12, 297);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(708, 246);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(484, 269);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(172, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Следующий шаг";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 556);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(662, 269);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 23);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Стоп";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(746, 577);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(250, 23);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Выход";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->dataGridViewTextBoxColumn9, 
				this->dataGridViewTextBoxColumn10});
			this->dataGridView2->Location = System::Drawing::Point(6, 19);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(240, 232);
			this->dataGridView2->TabIndex = 20;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn9->HeaderText = L"Приборы";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn10->HeaderText = L"Коэффициенты занятости";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView2);
			this->groupBox3->Location = System::Drawing::Point(746, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(250, 251);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Коэффициенты занятости";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(746, 297);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(250, 246);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Источник";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Количество заявок";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"P отказа";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Время";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Время в буффере";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Время на приборах";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->HeaderText = L"D1";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn8->HeaderText = L"D2";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1020, 612);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"SMO INTERFACE";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->button5->Enabled=false;
				 this->button6->Enabled=false;
				 gr = pictureBox1->CreateGraphics();
				 cPoshag=false;
			 }
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
	     //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Запустить------------------------------------------------------------------------------------------
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool vvod = false;
			 int kmin=0,lambda=0,istochniki=0,intbuffer=0,pribori=0;
			 try{
			 kmin = Convert::ToInt32(this->KMIN->Text);
			 lambda = Convert::ToInt32(this->LAMBDA->Text);
			 istochniki = Convert::ToInt32(this->ISTOCHNIKI->Text);
			 intbuffer = Convert::ToInt32(this->BUFFER->Text);
			 pribori = Convert::ToInt32(this->PRIBORI->Text);
			 vvod= true;
			 }
			 catch(...)
			 {
				 this->label6->Visible = true;
			 }
			 
			 if(vvod)
			 {
			 this->label6->Visible = false;
			 this->KMIN->Enabled =false;
			 this->LAMBDA->Enabled =false;
			 this->ISTOCHNIKI->Enabled =false;
			 this->BUFFER->Enabled =false;
			 this->PRIBORI->Enabled =false;

			 dataGridView1->RowCount = istochniki;
			 dataGridView2->RowCount = pribori;

			 //---------------------Realization------------------------------------------!!!!!!!!!!!!!!!!!
			 srand( time(NULL));
	Vxod* vxod = new Vxod(istochniki, lambda);
	MyBuffer* buffer = new MyBuffer(intbuffer);
	Vixod* vixod = new Vixod(pribori);

	 int nmin = 0;
	 int nomob= 0;
	 double tob=0;
	 double FULLTIME=0;

		 vixod->del();
		 buffer->del();
		 vxod->del();

		 vxod->made();
		
		 int ukaz = 0;

		 while(vxod->kminlessthen(kmin))
		 {
			 nmin = vxod->find_first_zayavka();
			 FULLTIME=vxod->vx[nmin].tpost;
			 if ( vixod->svobodniy_exists(vxod->vx[nmin].tpost) ) //еслм прибор освободился раньше, чем пришла заявка
			 {
				 if (buffer->inbuf == 0) //если в буфере ничего не было, то сразу посылаем поступившую заявку на прибор
				 {
					 double tobsl =  2*(rand()/ double( RAND_MAX ));
					 vxod->vx[nmin].tnapr+= tobsl;
					 vixod->find_perviy_svobodniy_pribor_po_kolcy(ukaz, vxod->vx[nmin].tpost );
					 vixod->vix[ukaz].tosvob= vxod->vx[nmin].tpost + tobsl;
					 vixod->vix[ukaz].workingtime+=tobsl;

					 vxod->vx[nmin].kobr ++;
					 vxod->vx[nmin].made();
					 vxod->vx[nmin].kol ++;

					 vxod->vx[nmin].timesP.push_back(tobsl);
				 }
				 else
				 {

					 buffer->read(nomob,tob); //если буфер не пуст, то считываем заявку из буфера
					 vixod->find_perviy_osvob_pribor(ukaz, vxod->vx[nmin].tpost);
					 vxod->vx[nomob].tog+=vixod->vix[ukaz].tosvob - tob;
					 double tobsl= 2*(rand()/ double( RAND_MAX ));
					 vxod->vx[nmin].tnapr+= tobsl;
					 vixod->vix[ukaz].tosvob+=tobsl;
					 vixod->vix[ukaz].workingtime+=tobsl;
					 vxod->vx[nomob].kobr++;

					 vxod->vx[nomob].timesB.push_back(vixod->vix[ukaz].tosvob - tob);
					 vxod->vx[nomob].timesP.push_back(tobsl);
				 }
			 }
			 else //если прибор освободился позже, чем пришла заявка
			 {
				 if( buffer->inbuf == buffer->size ) //буфер полный, посылаем в отказ
				 {
					 vxod->vx[nmin].kotk++;
					 vxod->vx[nmin].made();
					 vxod->vx[nmin].kol++;
				 }
				 else
				 {
					 buffer->zapic(nmin,vxod->vx[nmin].tpost); //в буфере есть место, записываем в буфер
					 vxod->vx[nmin].made();
					 vxod->vx[nmin].kol++;
				 }
			 }
		 }

		 double D1P=0, D2B=0;
		 double SP=0, SB=0;

		 for( int i= 0 ; i< vxod->vx.size() ; i++)
		 {
			  dataGridView1->Rows[i]->Cells[0]->Value=i+1;
			  dataGridView1->Rows[i]->Cells[1]->Value=vxod->vx[i].kol;
			  dataGridView1->Rows[i]->Cells[2]->Value=static_cast<double>(vxod->vx[i].kotk)/vxod->vx[i].kol;
			  dataGridView1->Rows[i]->Cells[3]->Value=vxod->vx[i].tog + vxod->vx[i].tnapr;
			  dataGridView1->Rows[i]->Cells[4]->Value=vxod->vx[i].tog;
			  dataGridView1->Rows[i]->Cells[5]->Value=vxod->vx[i].tnapr;

			  //Дисперсия по приборам
			  double Tsr=0;
			   for( int j=0; j<vxod->vx[i].timesP.size();j++)
			  {
				  Tsr+=vxod->vx[i].timesP[j];
			  }
			   Tsr=Tsr/vxod->vx[i].timesP.size();

			  for( int j=0; j<vxod->vx[i].timesP.size();j++)
			  {
				  SP+=(Tsr-vxod->vx[i].timesP[j])*(Tsr-vxod->vx[i].timesP[j]);
			  }
			  D1P=SP/vxod->vx[i].timesP.size();

			  dataGridView1->Rows[i]->Cells[6]->Value=D1P;

			  //Дисперсия по буфферу
			   double TsrB=0;
			   for( int j=0; j<vxod->vx[i].timesB.size();j++)
			  {
				  TsrB+=vxod->vx[i].timesB[j];
			  }
			   TsrB=TsrB/vxod->vx[i].timesB.size();

			  for( int j=0; j<vxod->vx[i].timesB.size();j++)
			  {
				  SB+=(TsrB-vxod->vx[i].timesB[j])*(TsrB-vxod->vx[i].timesB[j]);
			  }
			  D2B=SB/vxod->vx[i].timesB.size();

			  dataGridView1->Rows[i]->Cells[7]->Value=D2B;


		 }
		
		 for( int i=0; i< vixod->vix.size() ; i++)
		 {
		  dataGridView2->Rows[i]->Cells[0]->Value=i+1;
		  dataGridView2->Rows[i]->Cells[1]->Value=static_cast<double>(vixod->vix[i].workingtime)/FULLTIME;
		 }

	 delete vxod;
	 delete buffer;
	 delete vixod;
			 //------------------!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			
			 }	 
			
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
         //Оистить
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(this->KMIN->Enabled == true)
			 {
			 this->KMIN->Text=L"";
			 this->LAMBDA->Text=L"";
			 this->ISTOCHNIKI->Text=L"";
			 this->BUFFER->Text=L"";
			 this->PRIBORI->Text=L"";
			 }

			  for( int i= 0 ; i< dataGridView1->RowCount ; i++)
			 {
			 for( int j =0 ; j< dataGridView1->ColumnCount; j++){
			  dataGridView1->Rows[i]->Cells[j]->Value=L"";
			 }	
		     }

			   for( int i= 0 ; i< dataGridView2->RowCount ; i++)
			 {
			 for( int j =0 ; j< dataGridView2->ColumnCount; j++){
			  dataGridView2->Rows[i]->Cells[j]->Value=L"";
			 }	
		     }

		 }
		 //Edit
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->KMIN->Enabled =true;
			 this->LAMBDA->Enabled =true;
			 this->ISTOCHNIKI->Enabled =true;
			 this->BUFFER->Enabled =true;
			 this->PRIBORI->Enabled =true;
		 }
		 //!!!!!!!!!!!!!!!!!!!!!!!Пошаговая реализация------------------------------------------------------------------------------------------------------------------
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Graphics gr = pictureBox1->CreateGraphics();
/*System::Drawing::SolidBrush^ myBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Red);
System::Drawing::Graphics^ formGraphics;
formGraphics = pictureBox1->CreateGraphics();
formGraphics->FillRectangle(myBrush, Rectangle(0, 0, 50, 10));
delete myBrush;
delete formGraphics;
*/
			/* if(cPoshag == false){
				 cPoshag = true;
				 pictureBox1->Update();
				 return;
			 }*/

			 //-----------------ReadingFromTextboxes------------------------
			  bool vvod = false;
			int kmin=0,lambda=0,istochniki=0,intbuffer=0,pribori=0;
			 try{
  kmin = Convert::ToInt32(this->KMIN->Text);
			 lambda = Convert::ToInt32(this->LAMBDA->Text);
			 istochniki = Convert::ToInt32(this->ISTOCHNIKI->Text);
			 intbuffer = Convert::ToInt32(this->BUFFER->Text);
			 pribori = Convert::ToInt32(this->PRIBORI->Text);
			  vvod= true;
			 }
			 catch(...)
			 {
				 this->label6->Visible = true;
			 }
//----------------------РисованиеСхемы-------------------------------
			 if(vvod){
this->label7->Text=L"Реализацию можно начинать в пошаговом режиме!";
this->button5->Enabled=true;
this->button6->Enabled=true;
this->label6->Visible = false;
			 this->KMIN->Enabled =false;
			 this->LAMBDA->Enabled =false;
			 this->ISTOCHNIKI->Enabled =false;
			 this->BUFFER->Enabled =false;
			 this->PRIBORI->Enabled =false;

int xi=10,yi, dyi=20;
int xb=100,yb=100, dxb;
int xp=640, yp, dyp =20;
int w=50,h=10;

Color ^col = gcnew Color();

//gr = pictureBox1->CreateGraphics();
gr->Clear(col->WhiteSmoke);
Brush ^brush = gcnew SolidBrush(col->Blue);
Pen ^pen = gcnew Pen(col->Black);

for(int i=0; i< Convert::ToInt32(this->ISTOCHNIKI->Text); i++){
yi=i*20+ dyi;
gr->DrawRectangle(pen,Rectangle(xi,yi,w,h) );
gr->DrawLine(pen,xi+w,yi + 5,xb,yb+5 );
}

for(int i=0; i< Convert::ToInt32(this->PRIBORI->Text); i++){
yp=i*20+ dyp;
gr->DrawRectangle(pen,Rectangle(xp,yp,w,h) );
gr->DrawLine(pen,xb+Convert::ToInt32(this->BUFFER->Text)*w,yb+5,xp,yp+5 );
}


for(int i=0; i< Convert::ToInt32(this->BUFFER->Text); i++){
dxb=i*50;
gr->DrawRectangle(pen,Rectangle(xb+dxb,yb,w,h) );
}

pen->Color = col->Gray;
//gr->DrawRectangle(pen,Rectangle(0,0,707,245));
gr->DrawRectangle(pen,Rectangle(0,0,pictureBox1->Size.Width-1,pictureBox1->Size.Height-1));



//------------------------Poshag---------------Initializing--------------------

			 kolist= istochniki;
			 kolbuf=intbuffer;
		     kolpr=pribori;
 
	Pvxod = new Vxod(istochniki, lambda);
	Pbuffer = new MyBuffer(intbuffer);
	Pvixod = new Vixod(pribori);
	PoshBuffer= new int[intbuffer];
	PoshPribor=  new int[pribori];

	for( int i=0; i<intbuffer; i++)
	{
		PoshBuffer[i]=-1;
	}
	for( int i=0; i<pribori; i++)
	{
		PoshPribor[i]=-1;
	}
	
	 Pvixod->del();
     Pbuffer->del();
     Pvxod->del();

     Pvxod->made();
	 Pukaz = -1;
	 FULLTIME=0;

/*int i=0;
if( i = 0 ) 
	pen->Color = col->Maroon;
else
if( i = 1 )
	pen->Color = col->Red;
else
if( i = 2 )
	pen->Color = col->Brown;
else
if( i = 3 )
	pen->Color = col->IndianRed;
else
if( i = 4 )
	pen->Color = col->RosyBrown;
else
if( i = 5 )
	pen->Color = col->OrangeRed;
else
if( i = 6 )
	pen->Color = col->Chocolate;
else
if( i = 7 )
	pen->Color = col->DarkOrange;
else
if( i = 8 )
	pen->Color = col->Olive;
else
if( i = 9 )
	pen->Color = col->LightGreen;
*/
//gr->DrawRectangle(pen,Rectangle(pictureBox1->Location.X+10,pictureBox1->Location.Y+10,pictureBox1->Size.Width-10,pictureBox1->Size.Height-10) );
//gr->DrawLine(pen,0,0,50,100 );

//gr->FillRectangle(brush,Rectangle(40,40,150,200) );
	//Рисуем источники------------------------------------
	Brush ^brushnew;
			  for(int i=0; i< Convert::ToInt32(this->ISTOCHNIKI->Text); i++){
				int yi=i*20+ dyi;				
					if(i==0)
					{
						brushnew = gcnew SolidBrush(col->Maroon);
					}
					if(i==1)
					{
						brushnew = gcnew SolidBrush(col->Red);
					}
					if(i==2)
					{
						brushnew = gcnew SolidBrush(col->Cyan);
					}
					if(i==3)
					{
						brushnew = gcnew SolidBrush(col->IndianRed);
					}
					if(i==4)
					{
						brushnew = gcnew SolidBrush(col->RosyBrown);
					}
					if(i==5)
					{
						brushnew = gcnew SolidBrush(col->OrangeRed);
					}
					if(i==6)
					{
						brushnew = gcnew SolidBrush(col->Chocolate);
					}
					if(i==7)
					{
						brushnew = gcnew SolidBrush(col->DarkOrange);
					}
					if(i==8)
					{
						brushnew = gcnew SolidBrush(col->Olive);
					}
					if(i==9)
					{
						brushnew = gcnew SolidBrush(col->LightGreen);
					}
					gr->FillRectangle(brushnew,Rectangle(xi,yi,w,h) );
					delete brushnew;
				}
	delete col;
	delete brush;
	delete pen;
	}
}
		 //!!!!!!!!!!!!!!!Следующий шаг-----------------------------------------------------------------------------------------------------------------------
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 //-------------------------Pererisovka-------------------------
int xi=10,yi, dyi=20;
int xb=100,yb=100, dxb;
int xp=640, yp, dyp =20;
int w=50,h=10;

Color ^col = gcnew Color();
if(gr){
	gr->Clear(col->WhiteSmoke);}

//gr = pictureBox1->CreateGraphics();
gr->Clear(col->WhiteSmoke);
Brush ^brush = gcnew SolidBrush(col->Blue);
Pen ^pen = gcnew Pen(col->Black);

for(int i=0; i< Convert::ToInt32(this->ISTOCHNIKI->Text); i++){
yi=i*20+ dyi;
gr->DrawRectangle(pen,Rectangle(xi,yi,w,h) );
gr->DrawLine(pen,xi+w,yi + 5,xb,yb+5 );
}

for(int i=0; i< Convert::ToInt32(this->PRIBORI->Text); i++){
yp=i*20+ dyp;
gr->DrawRectangle(pen,Rectangle(xp,yp,w,h) );
gr->DrawLine(pen,xb+Convert::ToInt32(this->BUFFER->Text)*w,yb+5,xp,yp+5 );
}


for(int i=0; i< Convert::ToInt32(this->BUFFER->Text); i++){
dxb=i*50;
gr->DrawRectangle(pen,Rectangle(xb+dxb,yb,w,h) );
}

pen->Color = col->Gray;
gr->DrawRectangle(pen,Rectangle(0,0,pictureBox1->Size.Width-1,pictureBox1->Size.Height-1));

			 //------------------------PoshagRealization--------------------
	  srand( time(NULL));
	 int nmin = 0;
	 int nomob= 0;
	 double tob=0;
	 int kmin = Convert::ToInt32(this->KMIN->Text);
		
		 int ukaz= Pukaz;
		 if(Pvxod->kminlessthen(kmin))
		 {
			 nmin = Pvxod->find_first_zayavka();
		     FULLTIME=Pvxod->vx[nmin].tpost;
			 if ( Pvixod->svobodniy_exists(Pvxod->vx[nmin].tpost) ) //еслм прибор освободился раньше, чем пришла заявка
			 {
				 if (Pbuffer->inbuf == 0) //если в буфере ничего не было, то сразу посылаем поступившую заявку на прибор
				 {
					 double tobsl =  2*(rand()/ double( RAND_MAX ));
					 Pvxod->vx[nmin].tnapr+= tobsl;
					 Pvixod->find_perviy_svobodniy_pribor_po_kolcy(ukaz, Pvxod->vx[nmin].tpost );
					 Pvixod->vix[ukaz].tosvob= Pvxod->vx[nmin].tpost + tobsl;
					 Pvixod->vix[ukaz].workingtime+=tobsl;

					 Pvxod->vx[nmin].kobr ++;
					 Pvxod->vx[nmin].made();
					 Pvxod->vx[nmin].kol ++;
					 PoshPribor[ukaz]=nmin;
					 this->label7->Text=L"прибор N: "+ukaz+" освободился раньше, в буфере ничего не было, то сразу посылаем поступившую заявку c "+nmin+" источника на прибор";
				 }
				 else
				 {

					 Pbuffer->read(nomob,tob); //если буфер не пуст, то считываем заявку из буфера
					 Pvixod->find_perviy_osvob_pribor(ukaz, Pvxod->vx[nmin].tpost);
					 Pvxod->vx[nomob].tog+=Pvixod->vix[ukaz].tosvob - tob;
					 double tobsl= 2*(rand()/ double( RAND_MAX ));
					 Pvxod->vx[nmin].tnapr+= tobsl;
					 Pvixod->vix[ukaz].tosvob+=tobsl;
					 Pvixod->vix[ukaz].workingtime+=tobsl;
					 Pvxod->vx[nomob].kobr++;


					 for( int i=0 ; i<kolbuf-1; i++)
					 {
					 PoshBuffer[i]=PoshBuffer[i+1]; 
					 }
					 PoshBuffer[kolbuf-1]=-1;

					 PoshPribor[ukaz]=nomob;
					 this->label7->Text=L"прибор N: "+ukaz+" освободился раньше, буфер не пуст, то считываем заявку из буфера, заявку от "+nomob+" источника";
				 }
			 }
			 else //если прибор освободился позже, чем пришла заявка
			 {
				 if( Pbuffer->inbuf == Pbuffer->size ) //буфер полный, посылаем в отказ
				 {
					 Pvxod->vx[nmin].kotk++;
					 Pvxod->vx[nmin].made();
					 Pvxod->vx[nmin].kol++;
					  this->label7->Text=L"все приборы заняты, буфер полный, отказ "+nmin+" источнику";
				 }
				 else
				 {
					 Pbuffer->zapic(nmin,Pvxod->vx[nmin].tpost); //в буфере есть место, записываем в буфер
					 Pvxod->vx[nmin].made();
					 Pvxod->vx[nmin].kol++;
					 for(int i=0;i<kolbuf;i++){
						 if(PoshBuffer[i]==-1)
						 {
							 PoshBuffer[i]=nmin;
							 break;
						 }
					 }
					  this->label7->Text=L"все приборы заняты, буфер не полон, записываем в буфер заявку от "+nmin+" источника";
				 }
			 }
			 //Рисуем источники------------------------------------
			  for(int i=0; i< Convert::ToInt32(this->ISTOCHNIKI->Text); i++){
				int yi=i*20+ dyi;
				if(i == nmin){
					Brush ^brushnew;
					if(nmin==0)
					{
						brushnew = gcnew SolidBrush(col->Maroon);
					}
					if(nmin==1)
					{
						brushnew = gcnew SolidBrush(col->Red);
					}
					if(nmin==2)
					{
						brushnew = gcnew SolidBrush(col->Cyan);
					}
					if(nmin==3)
					{
						brushnew = gcnew SolidBrush(col->IndianRed);
					}
					if(nmin==4)
					{
						brushnew = gcnew SolidBrush(col->RosyBrown);
					}
					if(nmin==5)
					{
						brushnew = gcnew SolidBrush(col->OrangeRed);
					}
					if(nmin==6)
					{
						brushnew = gcnew SolidBrush(col->Chocolate);
					}
					if(nmin==7)
					{
						brushnew = gcnew SolidBrush(col->DarkOrange);
					}
					if(nmin==8)
					{
						brushnew = gcnew SolidBrush(col->Olive);
					}
					if(nmin==9)
					{
						brushnew = gcnew SolidBrush(col->LightGreen);
					}
					gr->FillRectangle(brushnew,Rectangle(xi,yi,w,h));
					delete brushnew;
					brushnew = gcnew SolidBrush(col->Blue);
					gr->FillRectangle(brushnew,Rectangle(5,yi,2,2));
					delete brushnew;
				}
				}

			 //Рисуем буффер---------------------------------------
			  for(int i=0; i< Convert::ToInt32(this->BUFFER->Text); i++){
					dxb=i*50;
					//for(int i =0; i<kolbuf; i++)
					//{
					if(PoshBuffer[i]>=0){
						int numist = PoshBuffer[i];
						Brush ^brushnew;
					if(numist==0)
					{
						brushnew = gcnew SolidBrush(col->Maroon);
					}
					if(numist==1)
					{
						brushnew = gcnew SolidBrush(col->Red);
					}
					if(numist==2)
					{
						brushnew = gcnew SolidBrush(col->Cyan);
					}
					if(numist==3)
					{
						brushnew = gcnew SolidBrush(col->IndianRed);
					}
					if(numist==4)
					{
						brushnew = gcnew SolidBrush(col->RosyBrown);
					}
					if(numist==5)
					{
						brushnew = gcnew SolidBrush(col->OrangeRed);
					}
					if(numist==6)
					{
						brushnew = gcnew SolidBrush(col->Chocolate);
					}
					if(numist==7)
					{
						brushnew = gcnew SolidBrush(col->DarkOrange);
					}
					if(numist==8)
					{
						brushnew = gcnew SolidBrush(col->Olive);
					}
					if(numist==9)
					{
						brushnew = gcnew SolidBrush(col->LightGreen);
					}
						gr->FillRectangle(brushnew,Rectangle(xb+dxb,yb,w,h) );
						delete brushnew;
					}
					//}
					}
			 //Рисуем приборы--------------------------------------
			    for(int i=0; i< Convert::ToInt32(this->PRIBORI->Text); i++){
				      int yp=i*20+ dyp;
					
						if(PoshPribor[i]>=0){
						int numist = PoshPribor[i];
						Brush ^brushnew;
					if(numist==0)
					{
						brushnew = gcnew SolidBrush(col->Maroon);
					}
					if(numist==1)
					{
						brushnew = gcnew SolidBrush(col->Red);
					}
					if(numist==2)
					{
						brushnew = gcnew SolidBrush(col->Cyan);
					}
					if(numist==3)
					{
						brushnew = gcnew SolidBrush(col->IndianRed);
					}
					if(numist==4)
					{
						brushnew = gcnew SolidBrush(col->RosyBrown);
					}
					if(numist==5)
					{
						brushnew = gcnew SolidBrush(col->OrangeRed);
					}
					if(numist==6)
					{
						brushnew = gcnew SolidBrush(col->Chocolate);
					}
					if(numist==7)
					{
						brushnew = gcnew SolidBrush(col->DarkOrange);
					}
					if(numist==8)
					{
						brushnew = gcnew SolidBrush(col->Olive);
					}
					if(numist==9)
					{
						brushnew = gcnew SolidBrush(col->LightGreen);
					}
					  gr->FillRectangle(brushnew,Rectangle(xp,yp,w,h) );
					  delete brushnew;
					  	brushnew = gcnew SolidBrush(col->Blue);
					gr->FillRectangle(brushnew,Rectangle(xp+60,yp,2,2));
					delete brushnew;
				

			       	  }

		 }
				 Pukaz=ukaz;
				}
		 else
		 {
			delete Pvxod;
	        delete Pbuffer;
	        delete Pvixod;
			delete PoshBuffer;
			delete PoshPribor;
			this->button5->Enabled=false;
			this->button6->Enabled=false;
			this->label7->Text=L"Реализация закончена!";
			//gr->dispose();
		 }
		 delete brush;
		 delete pen;
		 delete col;
		} 
		 //Стоп
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			delete Pvxod;
	        delete Pbuffer;
	        delete Pvixod;
			delete PoshBuffer;
			delete PoshPribor;
			this->button5->Enabled=false;
			this->button6->Enabled=false;
			this->label7->Text=L"Реализация прервана!";
			//gr->Dispose();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 delete gr;
			 this->Close();
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

