#pragma once
#include<math.h>
#include <stdlib.h>
#include<Eigen/Dense>
#include<Eigen/Sparse>
#include<Eigen/IterativeLinearSolvers>
#include <vector>
# define M_PI  3.14159265358979323846
namespace EulerMethod {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ информацияToolStripMenuItem;
	private: System::Windows::Forms::ImageList^ imageList1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;


	private: System::ComponentModel::IContainer^ components;




























	private:
		

#pragma region Windows Form Designer generated code
		
		
		





	void InitializeComponent(void)
		{
		this->components = (gcnew System::ComponentModel::Container());
		System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
		System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->информацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
		this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->textBox4 = (gcnew System::Windows::Forms::TextBox());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->menuStrip1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		this->SuspendLayout();
		// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->информацияToolStripMenuItem });
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(1284, 24);
		this->menuStrip1->TabIndex = 0;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// информацияToolStripMenuItem
		// 
		this->информацияToolStripMenuItem->Name = L"информацияToolStripMenuItem";
		this->информацияToolStripMenuItem->Size = System::Drawing::Size(52, 20);
		this->информацияToolStripMenuItem->Text = L"About";
		this->информацияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::информацияToolStripMenuItem_Click);
		// 
		// imageList1
		// 
		this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
		this->imageList1->ImageSize = System::Drawing::Size(16, 16);
		this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
		// 
		// chart1
		// 
		this->chart1->BorderlineColor = System::Drawing::Color::Transparent;
		chartArea1->AxisX->Maximum = 231.88;
		chartArea1->AxisX->Minimum = 0;
		chartArea1->AxisY->MaximumAutoSize = 100;
		chartArea1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
		chartArea1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
		chartArea1->Name = L"ChartArea1";
		this->chart1->ChartAreas->Add(chartArea1);
		this->chart1->Location = System::Drawing::Point(29, 399);
		this->chart1->Name = L"chart1";
		series1->ChartArea = L"ChartArea1";
		series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		series1->MarkerColor = System::Drawing::Color::Red;
		series1->MarkerSize = 100;
		series1->Name = L"Series1";
		series2->ChartArea = L"ChartArea1";
		series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		series2->Name = L"Series2";
		this->chart1->Series->Add(series1);
		this->chart1->Series->Add(series2);
		this->chart1->Size = System::Drawing::Size(662, 337);
		this->chart1->TabIndex = 2;
		this->chart1->Text = L"chart1";
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(740, 135);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(102, 13);
		this->label1->TabIndex = 3;
		this->label1->Text = L"Moment on Turbine:";
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(848, 132);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(100, 20);
		this->textBox1->TabIndex = 4;
		this->textBox1->Text = L"-40";
		// 
		// textBox2
		// 
		this->textBox2->Location = System::Drawing::Point(848, 158);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(100, 20);
		this->textBox2->TabIndex = 6;
		this->textBox2->Text = L"10";
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(724, 161);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(121, 13);
		this->label2->TabIndex = 5;
		this->label2->Text = L"Moment on Compressor:";
		// 
		// pictureBox1
		// 
		this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
		this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->pictureBox1->Location = System::Drawing::Point(29, 47);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(662, 337);
		this->pictureBox1->TabIndex = 11;
		this->pictureBox1->TabStop = false;
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(736, 215);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(504, 45);
		this->button1->TabIndex = 12;
		this->button1->Text = L"Execute the FEM calculation";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(954, 139);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(34, 13);
		this->label5->TabIndex = 13;
		this->label5->Text = L"kM*m";
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Location = System::Drawing::Point(954, 165);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(34, 13);
		this->label6->TabIndex = 14;
		this->label6->Text = L"kM*m";
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(992, 132);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(102, 13);
		this->label4->TabIndex = 9;
		this->label4->Text = L"Moment on Bearing:";
		// 
		// textBox4
		// 
		this->textBox4->Location = System::Drawing::Point(1100, 158);
		this->textBox4->Name = L"textBox4";
		this->textBox4->Size = System::Drawing::Size(100, 20);
		this->textBox4->TabIndex = 10;
		this->textBox4->Text = L"300";
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Location = System::Drawing::Point(1206, 136);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(34, 13);
		this->label7->TabIndex = 15;
		this->label7->Text = L"kM*m";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(1206, 162);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(23, 13);
		this->label3->TabIndex = 18;
		this->label3->Text = L"mm";
		// 
		// textBox3
		// 
		this->textBox3->Location = System::Drawing::Point(1100, 132);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(100, 20);
		this->textBox3->TabIndex = 17;
		this->textBox3->Text = L"5";
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->Location = System::Drawing::Point(1016, 161);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(78, 13);
		this->label8->TabIndex = 16;
		this->label8->Text = L"Shaft diameter:";
		// 
		// label9
		// 
		this->label9->Font = (gcnew System::Drawing::Font(L"GOST type B", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label9->Location = System::Drawing::Point(723, 47);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(549, 66);
		this->label9->TabIndex = 19;
		this->label9->Text = L"Torsion of the turbofan shaft. FEM analysis of the rotation of the cross sections"
			L"";
		this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Location = System::Drawing::Point(52, 399);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(22, 13);
		this->label10->TabIndex = 20;
		this->label10->Text = L"rad";
		// 
		// label11
		// 
		this->label11->AutoSize = true;
		this->label11->Location = System::Drawing::Point(655, 691);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(21, 13);
		this->label11->TabIndex = 21;
		this->label11->Text = L"cm";
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->ClientSize = System::Drawing::Size(1284, 761);
		this->Controls->Add(this->label11);
		this->Controls->Add(this->label10);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->textBox3);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->label7);
		this->Controls->Add(this->label6);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->pictureBox1);
		this->Controls->Add(this->textBox4);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->chart1);
		this->Controls->Add(this->menuStrip1);
		this->MainMenuStrip = this->menuStrip1;
		this->Name = L"MyForm";
		this->Text = L"FEM_Shaft";
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
	private: System::Void информацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Developer: Khairullin Ilnar.\r\n" + "Github: github.com/razbiralochka",
			"About", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		//Vars
		double D;
		double Polar_inertia;
		double Polar_resistant_moment;
		double Turbine_Moment=0;
		double Bearing_Moment=0;
		double Compressor_Moment=0;
		double MaxDef = 0;
		//Lamé second parameter
		const double G = 79.3f * pow(10, 6);
		
		double buf = 0;
		
		//Stiffness Matrix
		Eigen::SparseMatrix<double> Stiffness_matrix(15, 15);

		//Vectors for filling Stiffnes Matrix
		std::vector< Eigen::Triplet<double> > triplet;
		
		//Shaft diameter
		D = Convert::ToDouble(textBox4->Text)/1000.0;
		Bearing_Moment =  Convert::ToDouble(textBox3->Text);
		Compressor_Moment = Convert::ToDouble(textBox2->Text);
		Turbine_Moment = Convert::ToDouble(textBox1->Text);
		

		
		Eigen::VectorXd Moments(15);


			
		Moments(0) = Turbine_Moment;
		Moments(1) = Turbine_Moment;
		Moments(2) = Turbine_Moment;
		Moments(3) = Turbine_Moment;
		Moments(4) = Bearing_Moment;
		Moments(5) = Bearing_Moment;
		Moments(6) = Compressor_Moment;
		Moments(7) = Compressor_Moment;
		Moments(8) = Compressor_Moment;
		Moments(9) = Compressor_Moment;
		Moments(10) = Compressor_Moment;
		Moments(11) = Compressor_Moment;
		Moments(12) = Compressor_Moment;
		Moments(13) = Compressor_Moment;
		Moments(14) = Bearing_Moment;
		
		
		double L[] = { 10,10,10,17.89f,65.91f,22.13f,8.57f,8.57f,8.57f,8.57f,8.57f,8.57f,8.57f,18.96f};
		
		
		
		Polar_inertia =(1-pow(0.8f,4))*(M_PI * pow((D), 4)) / 32;
		double Stifness = Polar_inertia * G;
		
		
		



		
		for (int i = 0; i <= 13; i++)
		{
			
				triplet.push_back(Eigen::Triplet<double>(i, i,Stifness/L[i]));
				triplet.push_back(Eigen::Triplet<double>(i+1, i+1, Stifness / L[i] + buf));
				triplet.push_back(Eigen::Triplet<double>(i + 1, i , -Stifness / L[i]));
				triplet.push_back(Eigen::Triplet<double>(i , i+1, -Stifness / L[i]));
				buf = Stifness / L[i];
		}
		
		
		Stiffness_matrix.setFromTriplets(triplet.begin(), triplet.end());
		
		
		Eigen::SimplicialCholesky<Eigen::SparseMatrix<double>> chol(Stiffness_matrix);
		Eigen::VectorXd x = chol.solve(Moments);
		buf = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		chart1->Series[1]->Points->AddXY(0, 0);
		chart1->Series[1]->Points->AddXY(231.88f, 0);
		chart1->Series[1]->Color = Color::Black;
		chart1->Series[1]->BorderWidth = 3;
		

		
		for (int i = 0; i < x.innerSize(); i++)
		{
			
			chart1->Series[0]->Points->AddXY(buf, x[i]);
			
			buf += L[i];
			if (abs(x[i]) > MaxDef) MaxDef = abs(x[i]);
		}
		chart1->Series[0]->Points->AddXY(231.88f, 0);
		
		chart1->Series[0]->Color = Color::Orange;
		chart1->Series[0]->BorderWidth = 3;
		chart1->ChartAreas[0]->AxisY->Maximum = MaxDef ;
		chart1->ChartAreas[0]->AxisY->Minimum = -MaxDef ;
		chart1->ChartAreas[0]->AxisY->LabelStyle->Format = "{0.00}";
		
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar == '.') e->KeyChar = ',';
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar == '.') e->KeyChar = ',';
	}
	



};
}
