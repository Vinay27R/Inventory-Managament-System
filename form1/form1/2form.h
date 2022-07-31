#pragma once

namespace form1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for My2form
	/// </summary>
	public ref class My2form : public System::Windows::Forms::Form
	{
	public:
		My2form(void)
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
		~My2form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox13;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(My2form::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CadetBlue;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(22, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(462, 51);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(2, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ItemCode";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ItemName";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(158, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MRP";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(224, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Qty";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(297, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Total";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(5, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(52, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(57, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(224, 24);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(67, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(297, 24);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(62, 20);
			this->textBox5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LimeGreen;
			this->button1->Location = System::Drawing::Point(365, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 29);
			this->button1->TabIndex = 10;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			this->button2->Location = System::Drawing::Point(411, 15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 29);
			this->button2->TabIndex = 11;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(63, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 20);
			this->textBox2->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(491, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(259, 352);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->textBox8);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(8, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(248, 127);
			this->panel3->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Gray;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Location = System::Drawing::Point(9, 132);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(247, 138);
			this->panel4->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Gray;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->comboBox1);
			this->panel5->Controls->Add(this->textBox13);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Location = System::Drawing::Point(10, 272);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(246, 79);
			this->panel5->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label6->Location = System::Drawing::Point(5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Customer Details";
			this->label6->Click += gcnew System::EventHandler(this, &My2form::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Serial No.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Bill Date";
			this->label8->Click += gcnew System::EventHandler(this, &My2form::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 74);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Mobile No.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 99);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Cust. Name";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(89, 14);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(125, 20);
			this->textBox6->TabIndex = 4;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(89, 40);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(125, 20);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(89, 67);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(125, 20);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(90, 96);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(124, 20);
			this->textBox8->TabIndex = 7;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Amount Details";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(11, 27);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"No. of Items";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(11, 51);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Total Quantity";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 80);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(70, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Total Amount";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(11, 109);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Round Off";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(90, 22);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(124, 20);
			this->textBox9->TabIndex = 5;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(90, 51);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(124, 20);
			this->textBox10->TabIndex = 6;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(90, 77);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(124, 20);
			this->textBox11->TabIndex = 7;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(90, 106);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(124, 20);
			this->textBox12->TabIndex = 8;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(83, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Payment Details";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(10, 23);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(78, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Payment Mode";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(10, 45);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Paid Amount";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(88, 45);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(125, 20);
			this->textBox13->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(12, 209);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(172, 96);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &My2form::pictureBox1_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(12, 193);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 13);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Picture";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(44, 309);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 30);
			this->button3->TabIndex = 4;
			this->button3->Text = L"PRINT";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Orange;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(149, 309);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 30);
			this->button4->TabIndex = 5;
			this->button4->Text = L"SAVE";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(250, 309);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 30);
			this->button5->TabIndex = 6;
			this->button5->Text = L"DELETE";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DodgerBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(333, 309);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 30);
			this->button6->TabIndex = 7;
			this->button6->Text = L"CANCEL";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(89, 18);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(124, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// My2form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(762, 358);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"My2form";
			this->Text = L"WELCOME TO RM GROCERIES";
			this->Load += gcnew System::EventHandler(this, &My2form::My2form_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void My2form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
