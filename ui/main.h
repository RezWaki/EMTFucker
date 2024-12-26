#pragma once
#include "emtfucka.h"
#include <msclr\marshal.h>

namespace emtfucker {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;

	public ref class main : public System::Windows::Forms::Form {
	private:
		String^ pAppDataFolder, ^ pLoadedFile;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
			 BYTE bLoadedFileType;
	public:
		main( void ) {
			InitializeComponent();
			this->Icon = Drawing::Icon::FromHandle( (IntPtr)LoadIconA(0, (LPCSTR)IDI_APPLICATION) );
			pAppDataFolder = Environment::GetEnvironmentVariable( "APPDATA" );
			pAppDataFolder += "\\EFD0124";
			bLoadedFileType = 2;
		}

	protected:
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxAXVLC::AxVLCPlugin2^  axVLCPlugin21;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oGGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eMTToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oGGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eMTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->axVLCPlugin21 = (gcnew AxAXVLC::AxVLCPlugin2());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axVLCPlugin21))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(256, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->openToolStripMenuItem, 
				this->toolStripSeparator, this->saveToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->openToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(149, 6);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->saveToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->oGGToolStripMenuItem, 
				this->eMTToolStripMenuItem});
			this->saveToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem->Text = L"&Convert to";
			// 
			// oGGToolStripMenuItem
			// 
			this->oGGToolStripMenuItem->Name = L"oGGToolStripMenuItem";
			this->oGGToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->oGGToolStripMenuItem->Text = L"O&GG";
			this->oGGToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::oGGToolStripMenuItem_Click);
			// 
			// eMTToolStripMenuItem
			// 
			this->eMTToolStripMenuItem->Name = L"eMTToolStripMenuItem";
			this->eMTToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->eMTToolStripMenuItem->Text = L"E&MT";
			this->eMTToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::eMTToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(149, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"&Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"&About...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::aboutToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"EMT Audio Files (*.emt)|*.emt|OGG Audio Files (*.ogg)|*.ogg";
			this->openFileDialog1->ReadOnlyChecked = true;
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &main::openFileDialog1_FileOk);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(4, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 24);
			this->button1->TabIndex = 2;
			this->button1->Text = L"PLAY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(188, 324);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 24);
			this->button2->TabIndex = 3;
			this->button2->Text = L"PAUSE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"EMT Audio Files (*.emt)|*.emt|OGG Audio Files (*.ogg)|*.ogg";
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &main::saveFileDialog1_FileOk);
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->Location = System::Drawing::Point(84, 324);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(92, 24);
			this->trackBar1->TabIndex = 4;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Value = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &main::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 308);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Volume:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 256);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 288);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Track length:";
			this->label2->Visible = false;
			// 
			// axVLCPlugin21
			// 
			this->axVLCPlugin21->Enabled = true;
			this->axVLCPlugin21->Location = System::Drawing::Point(700, 500);
			this->axVLCPlugin21->Name = L"axVLCPlugin21";
			this->axVLCPlugin21->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axVLCPlugin21.OcxState")));
			this->axVLCPlugin21->Size = System::Drawing::Size(39, 33);
			this->axVLCPlugin21->TabIndex = 0;
			this->axVLCPlugin21->Visible = false;
			this->axVLCPlugin21->MediaPlayerLengthChanged += gcnew AxAXVLC::DVLCEvents_MediaPlayerLengthChangedEventHandler(this, &main::axVLCPlugin21_MediaPlayerLengthChanged);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(256, 352);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->axVLCPlugin21);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Location = System::Drawing::Point(64, 64);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"EMTFucker";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &main::main_FormClosing);
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axVLCPlugin21))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void main_Load(System::Object^  sender, System::EventArgs^  e) {
				 if( IO::Directory::Exists(pAppDataFolder) )
					 IO::Directory::Delete( pAppDataFolder, TRUE );
				 
				 IO::Directory::CreateDirectory( pAppDataFolder );
			 }
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
				 char* filename;
				 String^ pOut;

				 label2->Visible = FALSE;
				 axVLCPlugin21->playlist->stop();
				 axVLCPlugin21->playlist->clear();

				 pLoadedFile = openFileDialog1->FileName;
				 filename = (char*)Marshal::StringToHGlobalAnsi( pLoadedFile ).ToPointer();
				 if( !stricmp(&filename[strlen(filename)-3], "ogg") ) {
					 axVLCPlugin21->playlist->add( "file:///"+pLoadedFile, gcnew System::Object, gcnew System::Object );
					 bLoadedFileType = 1;
				 }
				 else if( !stricmp(&filename[strlen(filename)-3], "emt") ) {
					 pOut = pAppDataFolder+"\\output.ogg";
					 ConvertEMTFile( filename, (char*)Marshal::StringToHGlobalAnsi(pOut).ToPointer() );
					 axVLCPlugin21->playlist->add( "file:///"+pOut, gcnew System::Object, gcnew System::Object );
					 bLoadedFileType = 0;
				 }
				 else {
					 pLoadedFile = String::Empty;
					 bLoadedFileType = 2;
					 MessageBoxA( NULL, "Unrecognized file format\nexpected OGG or EMT", "Error", MB_ICONERROR );
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if( String::IsNullOrEmpty(pLoadedFile) || axVLCPlugin21->playlist->isPlaying ) return;
				 axVLCPlugin21->playlist->play();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if( !axVLCPlugin21->playlist->isPlaying ) return;
				 axVLCPlugin21->playlist->pause();
			 }
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 openFileDialog1->ShowDialog();
			 }
	private: System::Void oGGToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if( bLoadedFileType != 0 && bLoadedFileType != 1 ) return;
				 else if( bLoadedFileType == 1 ) {
					 MessageBoxA( NULL, "Attempted invalid conversion (OGG to OGG)", "Error", MB_ICONERROR );
					 return;
				 }
				 saveFileDialog1->Filter = "OGG Audio Files (*.ogg)|*.ogg";
				 saveFileDialog1->ShowDialog();
			 }
	private: System::Void eMTToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if( bLoadedFileType != 0 && bLoadedFileType != 1 ) return;
				 else if( bLoadedFileType == 0 ) {
					 MessageBoxA( NULL, "Attempted invalid conversion (EMT to EMT)", "Error", MB_ICONERROR );
					 return;
				 }
				 saveFileDialog1->Filter = "EMT Audio Files (*.emt)|*.emt";
				 saveFileDialog1->ShowDialog();
			 }
	private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
				 if( bLoadedFileType != 0 && bLoadedFileType != 1 ) return;
				 else if( bLoadedFileType == 0 ) {
					 IO::File::Copy( pAppDataFolder+"\\output.ogg", saveFileDialog1->FileName );
				 }
				 else {
					 ConvertOGGFile( (char*)Marshal::StringToHGlobalAnsi(pLoadedFile).ToPointer(),
						 (char*)Marshal::StringToHGlobalAnsi(saveFileDialog1->FileName).ToPointer() );
				 }
			 }
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
				 axVLCPlugin21->volume = trackBar1->Value*10;
			 }
	private: System::Void axVLCPlugin21_MediaPlayerLengthChanged(System::Object^  sender, AxAXVLC::DVLCEvents_MediaPlayerLengthChangedEvent^  e) {
				 INT len_min, len_sec;

				 len_sec = e->length/1000;
				 len_min = len_sec/60;
				 len_sec -= len_min*60;
				 label2->Visible = TRUE;
				 label2->Text = "Track length: "+len_min.ToString()+"."+len_sec.ToString();
			 }
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if( MessageBoxA(NULL, "Are you sure you want to exit?", "EMTFucker", MB_ICONQUESTION | MB_YESNO)
					 == IDYES ) Application::Exit();
			 }
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBoxA( NULL,
					 "-------------------\n> EMTFucker <\ngithub.com/RezWaki\n12/26/24\n-------------------",
					 "About", MB_ICONINFORMATION );
			 }
	private: System::Void main_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 axVLCPlugin21->playlist->stop();
				 axVLCPlugin21->playlist->clear();

				 if( IO::Directory::Exists(pAppDataFolder) )
					 IO::Directory::Delete( pAppDataFolder, TRUE );
			 }
};
}