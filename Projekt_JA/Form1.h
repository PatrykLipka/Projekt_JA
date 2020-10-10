#pragma once
#include <string>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^ trackBarRed;
	protected:
	private: System::Windows::Forms::Label^ labelRed;
	private: System::Windows::Forms::TextBox^ textBoxRed;
	private: System::Windows::Forms::TextBox^ textBoxGreen;
	private: System::Windows::Forms::Label^ labelGreen;
	private: System::Windows::Forms::TrackBar^ trackBarGreen;
	private: System::Windows::Forms::TextBox^ textBoxBlue;
	private: System::Windows::Forms::Label^ labelBlue;
	private: System::Windows::Forms::TrackBar^ trackBarBlue;
	private: System::Windows::Forms::TextBox^ textBoxStrength;
	private: System::Windows::Forms::Label^ labelStrength;
	private: System::Windows::Forms::TrackBar^ trackBarStrength;
	private: System::Windows::Forms::Button^ buttonCpp;
	private: System::Windows::Forms::Button^ buttonAssembly;
	private: System::Windows::Forms::TextBox^ textBoxFile;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxThreads;
	private: System::Windows::Forms::Label^ labelThreads;
	private: System::Windows::Forms::TrackBar^ trackBarThreads;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->trackBarRed = (gcnew System::Windows::Forms::TrackBar());
			this->labelRed = (gcnew System::Windows::Forms::Label());
			this->textBoxRed = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGreen = (gcnew System::Windows::Forms::TextBox());
			this->labelGreen = (gcnew System::Windows::Forms::Label());
			this->trackBarGreen = (gcnew System::Windows::Forms::TrackBar());
			this->textBoxBlue = (gcnew System::Windows::Forms::TextBox());
			this->labelBlue = (gcnew System::Windows::Forms::Label());
			this->trackBarBlue = (gcnew System::Windows::Forms::TrackBar());
			this->textBoxStrength = (gcnew System::Windows::Forms::TextBox());
			this->labelStrength = (gcnew System::Windows::Forms::Label());
			this->trackBarStrength = (gcnew System::Windows::Forms::TrackBar());
			this->buttonCpp = (gcnew System::Windows::Forms::Button());
			this->buttonAssembly = (gcnew System::Windows::Forms::Button());
			this->textBoxFile = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxThreads = (gcnew System::Windows::Forms::TextBox());
			this->labelThreads = (gcnew System::Windows::Forms::Label());
			this->trackBarThreads = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarStrength))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarThreads))->BeginInit();
			this->SuspendLayout();
			// 
			// trackBarRed
			// 
			this->trackBarRed->LargeChange = 25;
			this->trackBarRed->Location = System::Drawing::Point(12, 28);
			this->trackBarRed->Maximum = 255;
			this->trackBarRed->Name = L"trackBarRed";
			this->trackBarRed->Size = System::Drawing::Size(200, 45);
			this->trackBarRed->SmallChange = 5;
			this->trackBarRed->TabIndex = 0;
			this->trackBarRed->Scroll += gcnew System::EventHandler(this, &Form1::trackBarRed_Scroll);
			// 
			// labelRed
			// 
			this->labelRed->AutoSize = true;
			this->labelRed->Location = System::Drawing::Point(9, 12);
			this->labelRed->Name = L"labelRed";
			this->labelRed->Size = System::Drawing::Size(27, 13);
			this->labelRed->TabIndex = 1;
			this->labelRed->Text = L"Red";
			// 
			// textBoxRed
			// 
			this->textBoxRed->Enabled = false;
			this->textBoxRed->Location = System::Drawing::Point(183, 12);
			this->textBoxRed->Name = L"textBoxRed";
			this->textBoxRed->Size = System::Drawing::Size(29, 20);
			this->textBoxRed->TabIndex = 2;
			this->textBoxRed->Text = L"0";
			// 
			// textBoxGreen
			// 
			this->textBoxGreen->Enabled = false;
			this->textBoxGreen->Location = System::Drawing::Point(183, 63);
			this->textBoxGreen->Name = L"textBoxGreen";
			this->textBoxGreen->Size = System::Drawing::Size(29, 20);
			this->textBoxGreen->TabIndex = 5;
			this->textBoxGreen->Text = L"0";
			// 
			// labelGreen
			// 
			this->labelGreen->AutoSize = true;
			this->labelGreen->Location = System::Drawing::Point(9, 63);
			this->labelGreen->Name = L"labelGreen";
			this->labelGreen->Size = System::Drawing::Size(36, 13);
			this->labelGreen->TabIndex = 4;
			this->labelGreen->Text = L"Green";
			// 
			// trackBarGreen
			// 
			this->trackBarGreen->LargeChange = 25;
			this->trackBarGreen->Location = System::Drawing::Point(12, 79);
			this->trackBarGreen->Maximum = 255;
			this->trackBarGreen->Name = L"trackBarGreen";
			this->trackBarGreen->Size = System::Drawing::Size(200, 45);
			this->trackBarGreen->SmallChange = 5;
			this->trackBarGreen->TabIndex = 3;
			this->trackBarGreen->Scroll += gcnew System::EventHandler(this, &Form1::trackBarGreen_Scroll);
			// 
			// textBoxBlue
			// 
			this->textBoxBlue->Enabled = false;
			this->textBoxBlue->Location = System::Drawing::Point(183, 114);
			this->textBoxBlue->Name = L"textBoxBlue";
			this->textBoxBlue->Size = System::Drawing::Size(29, 20);
			this->textBoxBlue->TabIndex = 8;
			this->textBoxBlue->Text = L"0";
			// 
			// labelBlue
			// 
			this->labelBlue->AutoSize = true;
			this->labelBlue->Location = System::Drawing::Point(9, 114);
			this->labelBlue->Name = L"labelBlue";
			this->labelBlue->Size = System::Drawing::Size(28, 13);
			this->labelBlue->TabIndex = 7;
			this->labelBlue->Text = L"Blue";
			// 
			// trackBarBlue
			// 
			this->trackBarBlue->LargeChange = 25;
			this->trackBarBlue->Location = System::Drawing::Point(12, 130);
			this->trackBarBlue->Maximum = 255;
			this->trackBarBlue->Name = L"trackBarBlue";
			this->trackBarBlue->Size = System::Drawing::Size(200, 45);
			this->trackBarBlue->SmallChange = 5;
			this->trackBarBlue->TabIndex = 6;
			this->trackBarBlue->Scroll += gcnew System::EventHandler(this, &Form1::trackBarBlue_Scroll);
			// 
			// textBoxStrength
			// 
			this->textBoxStrength->Enabled = false;
			this->textBoxStrength->Location = System::Drawing::Point(183, 186);
			this->textBoxStrength->Name = L"textBoxStrength";
			this->textBoxStrength->Size = System::Drawing::Size(29, 20);
			this->textBoxStrength->TabIndex = 11;
			this->textBoxStrength->Text = L"1";
			// 
			// labelStrength
			// 
			this->labelStrength->AutoSize = true;
			this->labelStrength->Location = System::Drawing::Point(9, 186);
			this->labelStrength->Name = L"labelStrength";
			this->labelStrength->Size = System::Drawing::Size(47, 13);
			this->labelStrength->TabIndex = 10;
			this->labelStrength->Text = L"Strength";
			// 
			// trackBarStrength
			// 
			this->trackBarStrength->LargeChange = 3;
			this->trackBarStrength->Location = System::Drawing::Point(12, 202);
			this->trackBarStrength->Minimum = 1;
			this->trackBarStrength->Name = L"trackBarStrength";
			this->trackBarStrength->Size = System::Drawing::Size(200, 45);
			this->trackBarStrength->TabIndex = 9;
			this->trackBarStrength->Value = 1;
			this->trackBarStrength->Scroll += gcnew System::EventHandler(this, &Form1::trackBarStrength_Scroll);
			// 
			// buttonCpp
			// 
			this->buttonCpp->Location = System::Drawing::Point(137, 364);
			this->buttonCpp->Name = L"buttonCpp";
			this->buttonCpp->Size = System::Drawing::Size(75, 23);
			this->buttonCpp->TabIndex = 12;
			this->buttonCpp->Text = L"C++";
			this->buttonCpp->UseVisualStyleBackColor = true;
			this->buttonCpp->Click += gcnew System::EventHandler(this, &Form1::buttonCpp_Click);
			// 
			// buttonAssembly
			// 
			this->buttonAssembly->Location = System::Drawing::Point(12, 364);
			this->buttonAssembly->Name = L"buttonAssembly";
			this->buttonAssembly->Size = System::Drawing::Size(75, 23);
			this->buttonAssembly->TabIndex = 13;
			this->buttonAssembly->Text = L"Assembly";
			this->buttonAssembly->UseVisualStyleBackColor = true;
			this->buttonAssembly->Click += gcnew System::EventHandler(this, &Form1::buttonAssembly_Click);
			// 
			// textBoxFile
			// 
			this->textBoxFile->Location = System::Drawing::Point(12, 338);
			this->textBoxFile->Name = L"textBoxFile";
			this->textBoxFile->Size = System::Drawing::Size(200, 20);
			this->textBoxFile->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 322);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"File name with extension";
			// 
			// textBoxThreads
			// 
			this->textBoxThreads->Enabled = false;
			this->textBoxThreads->Location = System::Drawing::Point(183, 234);
			this->textBoxThreads->Name = L"textBoxThreads";
			this->textBoxThreads->Size = System::Drawing::Size(29, 20);
			this->textBoxThreads->TabIndex = 18;
			this->textBoxThreads->Text = L"1";
			// 
			// labelThreads
			// 
			this->labelThreads->AutoSize = true;
			this->labelThreads->Location = System::Drawing::Point(9, 234);
			this->labelThreads->Name = L"labelThreads";
			this->labelThreads->Size = System::Drawing::Size(46, 13);
			this->labelThreads->TabIndex = 17;
			this->labelThreads->Text = L"Threads";
			// 
			// trackBarThreads
			// 
			this->trackBarThreads->LargeChange = 2;
			this->trackBarThreads->Location = System::Drawing::Point(12, 250);
			this->trackBarThreads->Maximum = 8;
			this->trackBarThreads->Minimum = 1;
			this->trackBarThreads->Name = L"trackBarThreads";
			this->trackBarThreads->Size = System::Drawing::Size(200, 45);
			this->trackBarThreads->TabIndex = 16;
			this->trackBarThreads->Value = 1;
			this->trackBarThreads->Scroll += gcnew System::EventHandler(this, &Form1::trackBarThreads_Scroll);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 399);
			this->Controls->Add(this->textBoxThreads);
			this->Controls->Add(this->labelThreads);
			this->Controls->Add(this->trackBarThreads);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxFile);
			this->Controls->Add(this->buttonAssembly);
			this->Controls->Add(this->buttonCpp);
			this->Controls->Add(this->textBoxStrength);
			this->Controls->Add(this->labelStrength);
			this->Controls->Add(this->trackBarStrength);
			this->Controls->Add(this->textBoxBlue);
			this->Controls->Add(this->labelBlue);
			this->Controls->Add(this->trackBarBlue);
			this->Controls->Add(this->textBoxGreen);
			this->Controls->Add(this->labelGreen);
			this->Controls->Add(this->trackBarGreen);
			this->Controls->Add(this->textBoxRed);
			this->Controls->Add(this->labelRed);
			this->Controls->Add(this->trackBarRed);
			this->Name = L"Form1";
			this->Text = L"RGB Filter";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarStrength))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarThreads))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool runCPP = 0, runASM = 0;
		Byte red = 0, green = 0, blue = 0, strength = 0, threads=0;
	void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void trackBarRed_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBoxRed->Text = "" + trackBarRed->Value;
	}
	private: System::Void trackBarGreen_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBoxGreen->Text = "" + trackBarGreen->Value;
	}
	private: System::Void trackBarBlue_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBoxBlue->Text = "" + trackBarBlue->Value;
	}
	private: System::Void trackBarStrength_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBoxStrength->Text = "" + trackBarStrength->Value;
	}
	private: System::Void trackBarThreads_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBoxThreads->Text = "" + trackBarThreads->Value;
	}
	private: System::Void buttonCpp_Click(System::Object^ sender, System::EventArgs^ e) {
		red = trackBarRed->Value;
		green = trackBarGreen->Value;
		blue = trackBarBlue->Value;
		strength = trackBarStrength->Value;
		threads = trackBarThreads->Value;
		std::string fileName = "";
		MarshalString(textBoxFile->Text, fileName);
		runCPP = 1;
		runASM = 0;
		RGB_Filter(red, green, blue, strength, threads, fileName, runCPP, runASM);
	}
	private: System::Void buttonAssembly_Click(System::Object^ sender, System::EventArgs^ e) {
		red = trackBarRed->Value;
		green = trackBarGreen->Value;
		blue = trackBarBlue->Value;
		strength = trackBarStrength->Value;
		threads = trackBarThreads->Value;
		std::string fileName = "";
		MarshalString(textBoxFile->Text, fileName);
		runCPP = 0;
		runASM = 1;
		RGB_Filter(red, green, blue, strength, threads, fileName, runCPP, runASM);
	}
		   //algorithm
	private: System::Void RGB_Filter(Byte red, Byte green, Byte blue, Byte strength, Byte threads, std::string fileName, bool runCPP, bool runASM)
	{

	}
};
}



