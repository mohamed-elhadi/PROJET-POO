#pragma once

using namespace System::Data::SqlClient;

namespace gestion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Form^ retour;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		MyForm4(Form^ r)
		{
			retour = r;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dataGridView2;


	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(404, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(66, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ajouter Un Article";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(620, 305);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"spprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 125);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(114, 151);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(98, 279);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(98, 253);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(113, 177);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(113, 203);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"date livraison";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"date emission";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm4::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 286);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"total article";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"nom article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"date de payement ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"moyen de payement ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm4::label6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(113, 73);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"nom client";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(36, 229);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(114, 99);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"prenom client ";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(36, 229);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(36, 229);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 22;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(38, 229);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 23;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(512, 305);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 40);
			this->button6->TabIndex = 25;
			this->button6->Text = L"afficher";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm4::button6_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(234, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(242, 24);
			this->label11->TabIndex = 65;
			this->label11->Text = L"Gestion du Commande";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 31);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 67;
			this->button7->Text = L"clear all";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm4::button7_Click);
			// 
			// button8
			// 
			this->button8->AccessibleName = L"tesxtBox10";
			this->button8->Location = System::Drawing::Point(395, 46);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(248, 23);
			this->button8->TabIndex = 66;
			this->button8->Text = L"Afficher la liste des articles";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm4::button8_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(623, 9);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 68;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(500, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 13);
			this->label9->TabIndex = 69;
			this->label9->Text = L"Refference commande";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AccessibleName = L"datagridview1";
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(220, 75);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(502, 224);
			this->dataGridView2->TabIndex = 71;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm4::dataGridView2_CellContentClick);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AccessibleName = L"datagridview2";
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(220, 75);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(502, 224);
			this->dataGridView4->TabIndex = 72;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(36, 229);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(102, 20);
			this->textBox14->TabIndex = 73;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 369);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);


		String^ date = Convert::ToDateTime(textBox1->Text).ToString("yyyy-MM-dd");
		String^ date2 = Convert::ToDateTime(textBox2->Text).ToString("yyyy-MM-dd");
		String^ date3 = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
		String^ moyenPayement = textBox6->Text;
		String^ nomclient = textBox7->Text;
		String^ prenomclient = textBox9->Text;

		//////////////////// recuperer la ville du client //////////////////////

		SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Adresse_Livraison FROM client WHERE Nom_c = '" + nomclient + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader1 = cmdDataBase3->ExecuteReader();


		while (myReader1->Read()) {

			textBox10->Text = myReader1->GetString(0);

		}

		myReader1->Close();
		condatabase->Close();


		String^ adresse = textBox10->Text;

		///////////////////////////////////////////////////////////////////////////


		SqlConnection^ condatabase2 = gcnew SqlConnection(constring);
		SqlCommand^ cmdDataBase5 = gcnew SqlCommand("SELECT ISNULL(MAX(CAST(SUBSTRING(Referance,12,LEN(Referance) - 11) AS int)),0) FROM Commande", condatabase2);
		condatabase2->Open();
		SqlDataReader^ myReader6 = cmdDataBase5->ExecuteReader();

		while (myReader6->Read()) {
			textBox12->Text = Convert::ToString(myReader6->GetInt32(0));
		}
		myReader6->Close();

		///////////////////     chiffer incrementiel    ///////////////////////////

		int chiffre = 1;
		chiffre = Int32::Parse(textBox12->Text);

		chiffre++;

		String^ chf = Convert::ToString(chiffre);

		/////////////////////////////////////////////////////////////////////

		String^ reference = nomclient->Substring(0, 2) + prenomclient->Substring(0, 2) + date->Substring(2, 4) + adresse->Substring(0, 3) + chf;


		textBox11->Text = reference;
		
		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  Commande (Date_Livraison, Date_Emision , Total_Articles ,Date_Payment,Montant_TotalTTC,Remise,Moyen_Payment ,Num_c,Referance ) values('" + date + "','" + date2 + "','0','" + date3 + "','0','0','" + moyenPayement + "',(SELECT Num_c FROM client where Nom_c = '" + nomclient + "' ),'" + reference + "');", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Commande  enregistr� :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		condatabase->Close();
	}











	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);

		String^ reference = textBox13->Text;
		String^ date = Convert::ToDateTime(textBox1->Text).ToString("yyyy-MM-dd");
		String^ date2 = Convert::ToDateTime(textBox2->Text).ToString("yyyy-MM-dd");
		String^ date3 = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
		String^ moyenPayement = textBox6->Text;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Commande SET  Date_Livraison = '" + date + "', Date_Emision ='" + date2 + "' , Date_Payment = '" + date3 + "' ,Moyen_Payment = '" + moyenPayement + "' WHERE Referance = '" + reference + "' ", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Commande modifi� :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}


	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);

		String^ nomclient = textBox7->Text;
		String^ nomArticle = textBox4->Text;
		String^ var = textBox3->Text;
		String^ ref = textBox11->Text;


		SqlCommand^ cmdDataBase2 = gcnew SqlCommand("SELECT * FROM Commande WHERE Referance = '" + ref + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader3 = cmdDataBase2->ExecuteReader();


		while (myReader3->Read()) {

			textBox8->Text = Convert::ToString(myReader3->GetInt32(3));

		}

		myReader3->Close();

		int iInt = Int32::Parse(var);
		int fint = Int32::Parse(textBox8->Text);
		iInt = iInt + fint;

		condatabase->Close();

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  contient (Referance,ReferenceArticle ) values('" + ref + "',(SELECT ReferenceArticle FROM Article where Nom_Article = '" + nomArticle + "' ));", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show(" article ajouter :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		condatabase->Close();

		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE Commande SET Total_Articles = " + iInt + " where Referance = '" + ref + "' ", condatabase);
		SqlDataReader^ myReader1;
		try {
			condatabase->Open();
			myReader1 = cmdDataBase1->ExecuteReader();
			MessageBox::Show("  total article modifier  :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}


	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour->Show();
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Commande", conDataBase);
	DataTable^ data = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView4->Show();
	adapter->Fill(data);
	bindingSource2->DataSource = data;
	dataGridView4->DataSource = bindingSource2;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox9->Text = "";
	textBox13->Text = "";
	
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("�tes vous s�r de vouloir continuer ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);


		String^ reference = textBox13->Text;
		SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM contient WHERE Referance = '" + reference + "' ", conDataBase);
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("DELETE FROM Commande WHERE Referance = '" + reference + "' ", conDataBase);


		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		conDataBase->Close();

		conDataBase->Open();
		SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();
		MessageBox::Show("Article supprim� :'D");
		conDataBase->Close();
	}
	else {};
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ reference = textBox13->Text;
	String^ constring = "Data Source=(local);Initial Catalog=BDD_P;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);


	
	SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Commande WHERE Referance = '" + reference + "' ", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

	dataGridView4->Hide();
	dataGridView2->Show();

	while (myReader->Read()) {
		textBox6->Text = myReader->GetString(7);
		textBox1->Text = Convert::ToString(myReader->GetDateTime(1).ToString("yyyy - MM - dd"));
		textBox2->Text = Convert::ToString(myReader->GetDateTime(2).ToString("yyyy - MM - dd"));
		textBox5->Text = Convert::ToString(myReader->GetDateTime(4).ToString("yyyy - MM - dd"));
		textBox14->Text = Convert::ToString(myReader->GetInt32(8));
	}
	int numc = Int32::Parse(textBox14->Text);

	SqlConnection^ conDataBase11 = gcnew SqlConnection(constring);
	conDataBase11->Open();

	SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Nom_c,Prenom_c FROM client WHERE Num_c ='" + numc + "' ", conDataBase11);
	SqlDataReader^ myReader11 = cmdDataBase3->ExecuteReader();
	while (myReader11->Read()) {

		textBox7->Text = myReader11->GetString(0);
		textBox9->Text = myReader11->GetString(1);
	}
	myReader11->Close();

	


	myReader->Close();
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].Referance, Date_Livraison, Date_Emision, Date_Payment, Moyen_Payment, [contient].ReferenceArticle, Montant_HT, Montant_TVA, Montant_TTC, Remise, [Commande].Num_c, Nom_c, Prenom_c FROM client,Commande,contient,Article WHERE [Commande].Num_c = [client].Num_c AND [Commande].Referance = '" + reference + "' AND [Commande].Referance = [contient].Referance AND [contient].ReferenceArticle = [Article].ReferenceArticle", conDataBase);

	DataTable^ data = gcnew DataTable();
	data->Clear();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView2->DataSource = bindingSource1;

}
};
}
