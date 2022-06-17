#pragma once
#include "math.h"
#include "stdlib.h"
#include "time.h"
#include <cmath>
#include "errno.h"
#include <random>

typedef struct Vasicek {
	double InitRate;
	double LongRate;
	double AdjSpeed;
	double Volatility;
	double DeltaTime;
	double SpotRate;
	double SpotVol;
	double ZeroBondPrice;
} Vasicek;

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}


	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;





	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(175, 126);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 37);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"5.00";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->AcceptsReturn = true;
			this->textBox2->AcceptsTab = true;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(175, 194);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(177, 37);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"5.00";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->AcceptsReturn = true;
			this->textBox3->AcceptsTab = true;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(175, 265);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(177, 37);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0.15";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->AcceptsReturn = true;
			this->textBox4->AcceptsTab = true;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox4->Location = System::Drawing::Point(175, 336);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(177, 37);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"1.00";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->AcceptsReturn = true;
			this->textBox5->AcceptsTab = true;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox5->Location = System::Drawing::Point(175, 407);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(177, 37);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"0.004";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(105, 126);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 37);
			this->label1->TabIndex = 6;
			this->label1->Text = L"r0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 265);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 37);
			this->label3->TabIndex = 8;
			this->label3->Text = L"alpha";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(89, 336);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 37);
			this->label4->TabIndex = 9;
			this->label4->Text = L"sig";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(93, 407);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 37);
			this->label5->TabIndex = 10;
			this->label5->Text = L"DT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 194);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 37);
			this->label2->TabIndex = 11;
			this->label2->Text = L"rbar";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RosyBrown;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::LightGray;
			this->button1->Location = System::Drawing::Point(59, 498);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(338, 59);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Simulate\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Broadway", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(35, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(395, 42);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Please Enter Data :";
			// 
			// chart1
			// 
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->MajorGrid->Enabled = false;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->Title = L"Unit : %";
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Cooper Black", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(452, 50);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Salmon;
			series1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->IsValueShownAsLabel = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Approximate";
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->IsValueShownAsLabel = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Accurate";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(871, 528);
			this->chart1->TabIndex = 17;
			this->chart1->Text = L"chart1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(353, 126);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 37);
			this->label7->TabIndex = 18;
			this->label7->Text = L"%";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(353, 194);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 37);
			this->label8->TabIndex = 19;
			this->label8->Text = L"%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(353, 336);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 37);
			this->label9->TabIndex = 20;
			this->label9->Text = L"%";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1355, 623);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Vasicek Process";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	 
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Approximate"]->Points->Clear();
		chart1->Series["Accurate"]->Points->Clear();
		chart1->ChartAreas[0]->AxisY->IsStartedFromZero = false;
		Vasicek VS;
		double r0;
		double rbar;
		double alpha;
		double sig;
		double DT;
		double r1;

		r0 = System::Convert::ToDouble(textBox1->Text) / 100;
		rbar = System::Convert::ToDouble(textBox2->Text) / 100;
		alpha = System::Convert::ToDouble(textBox3->Text);
		sig = System::Convert::ToDouble(textBox4->Text) / 100;
		DT = System::Convert::ToDouble(textBox5->Text);

		Vasicek_InitObj(VS, r0, rbar, alpha, sig, DT ,3);
		Vasicek_GetBondParameters(VS, 0, 1);
		chart1->Series[0]->Points->AddXY("0", r0*100);
		chart1->Series[1]->Points->AddXY("0", r0*100);
		for (int i = 1; i < 26; i++) {
			r1 = Vasicek_GetNextRateByApprox(VS);
			chart1->Series[0]->Points->AddXY(System::Convert::ToString(i), round(r1 * 10000) / 100);
			VS.InitRate = r1;
		}

		Vasicek_InitObj(VS, r0, rbar, alpha, sig, DT, 5);
		for (int i = 1; i < 26; i++) {
			r1 = Vasicek_GetNextRate(VS);
			chart1->Series[1]->Points->AddXY(System::Convert::ToString(i), round(r1*10000)/100);
			VS.InitRate = r1;
		}


	}
	private: void Vasicek_InitObj(Vasicek& VS, double r0, double rbar, double alpha, double sig, double DT, int seed) {
		VS.InitRate = r0;
		VS.LongRate = rbar;
		VS.AdjSpeed = alpha;
		VS.Volatility = sig;
		VS.DeltaTime = DT;
		srand((unsigned)time(NULL)* seed);
	}

	private: void Vasicek_GetBondParameters(Vasicek& VS, double t, double s) {
		double r0;
		double rbar;
		double alpha;
		double sig;
		double DT;
		double A;
		double B;
		double R_inf;
		double SRate;
		double SVol;

		r0 = VS.InitRate;
		rbar = VS.LongRate;
		alpha = VS.AdjSpeed;
		sig = VS.Volatility;
		DT = s - t;

		R_inf = rbar - 0.5 * powl((sig / alpha), 2);
		A = expl((R_inf / alpha) * (1 - expl(-alpha * DT)) - (DT * R_inf) - (sig * sig / (4 * powl(alpha, 3))) * powl((1 - expl(-alpha * DT)), 2));
		B = (1 - expl(-alpha * DT)) / alpha;

		SRate = -log(A) / DT + B / DT * r0;
		SVol = (sig / (alpha * DT)) * (1 - expl(-alpha * DT));
		VS.SpotRate = SRate;
		VS.SpotVol = SVol;
		VS.ZeroBondPrice = A * exp(-r0 * B);
	}

	private: double Vasicek_GetNextRateByApprox(Vasicek VS) {
		double r0;
		double rbar;
		double alpha;
		double sig;
		double DT;
		double dZ;
		double r1;

		r0 = VS.InitRate;
		rbar = VS.LongRate;
		alpha = VS.AdjSpeed;
		sig = VS.Volatility;
		DT = VS.DeltaTime;
		dZ = sqrt(DT) * normsinv((double)rand() / (double)RAND_MAX);
		r1 = r0 + alpha * (rbar - r0) * DT + sig * dZ;
		return r1;
	}

	private: double	Vasicek_GetNextRate(Vasicek VS) {
		double r0, rbar, alpha, sig, DT, dZ, mean, std, r1;
		r0 = VS.InitRate;
		rbar = VS.LongRate;
		alpha = VS.AdjSpeed;
		sig = VS.Volatility;
		DT = VS.DeltaTime;
		dZ = normsinv((double)rand() / (double)RAND_MAX);
		mean = rbar + ((r0 - rbar) * expl(-alpha * DT));
		std = sqrt(((sig * sig) / (2 * alpha)) * (1 - expl(-2 * alpha * DT)));
		r1 = mean + std * dZ;
		return r1;
	}

	private: double normsinv(const double p)
	{
		static const double LOW = 0.02425;
		static const double HIGH = 0.97575;

		/* Coefficients in rational approximations. */
		static const double a[] =
		{
			-3.969683028665376e+01,
				2.209460984245205e+02,
				-2.759285104469687e+02,
				1.383577518672690e+02,
				-3.066479806614716e+01,
				2.506628277459239e+00
		};

		static const double b[] =
		{
			-5.447609879822406e+01,
				1.615858368580409e+02,
				-1.556989798598866e+02,
				6.680131188771972e+01,
				-1.328068155288572e+01
		};

		static const double c[] =
		{
			-7.784894002430293e-03,
				-3.223964580411365e-01,
				-2.400758277161838e+00,
				-2.549732539343734e+00,
				4.374664141464968e+00,
				2.938163982698783e+00
		};

		static const double d[] =
		{
			7.784695709041462e-03,
				3.224671290700398e-01,
				2.445134137142996e+00,
				3.754408661907416e+00
		};

		double q, r;

		errno = 0;

		if (p < 0 || p > 1)
		{
			errno = EDOM;
			return 0.0;
		}
		else if (p == 0)
		{
			errno = ERANGE;
			return -HUGE_VAL /* minus "infinity" */;
		}
		else if (p == 1)
		{
			errno = ERANGE;
			return HUGE_VAL /* "infinity" */;
		}
		else if (p < LOW)
		{
			/* Rational approximation for lower region */
			q = sqrt(-2 * log(p));
			return (((((c[0] * q + c[1]) * q + c[2]) * q + c[3]) * q + c[4]) * q + c[5]) /
				((((d[0] * q + d[1]) * q + d[2]) * q + d[3]) * q + 1);
		}
		else if (p > HIGH)
		{
			/* Rational approximation for upper region */
			q = sqrt(-2 * log(1 - p));
			return -(((((c[0] * q + c[1]) * q + c[2]) * q + c[3]) * q + c[4]) * q + c[5]) /
				((((d[0] * q + d[1]) * q + d[2]) * q + d[3]) * q + 1);
		}
		else
		{
			/* Rational approximation for central region */
			q = p - 0.5;
			r = q * q;
			return (((((a[0] * r + a[1]) * r + a[2]) * r + a[3]) * r + a[4]) * r + a[5]) * q /
				(((((b[0] * r + b[1]) * r + b[2]) * r + b[3]) * r + b[4]) * r + 1);
		}
	}
};
}
