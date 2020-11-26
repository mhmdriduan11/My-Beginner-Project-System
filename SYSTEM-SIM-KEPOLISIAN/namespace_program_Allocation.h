#include <bits/stdc++.h>
#ifndef MAX
#define MAX 10
#endif //end MAX;

/*Note:*/
//FUNCTION YANG BELOM:
//(1).FUNCTION SOAL MATERI UMUM;

namespace this_build_sim
{

		/*===========================================================| DISPLAY BOX-DATABASE |===============================================================*/
		void BOX_DATA_PETUGAS(std::string star, uint16_t width1, char fillchar1, std::string msg1, std::string endfill1,
							  uint16_t width2, char fillchar2, std::string msg2, std::string endfill2,
							  uint16_t width3, char fillchar3, std::string msg3, std::string endfill3,
							  uint16_t width4, char fillchar4, std::string msg4, std::string endfill4,
							  uint16_t width5, char fillchar5, std::string msg5, std::string endfill5,
							  uint16_t width6, char fillchar6, std::string msg6, std::string endfill6);

		/*===========================================================| CONTROL FRONT-BACK |================================================================*/
		//Kerangka control
		struct CONTROL{ int depan, belakang;} /*Obyek->*/ to_getControl;
		//Condition Control database
		bool isEmpty(){ return to_getControl.belakang == 0;};
		bool isFully(){ return to_getControl.belakang == MAX;};
		/*===========================================================| (1) MENU DATA PETUGAS |==================================================================*/
		//Kerangka Database Petugas
		struct DATA_PETUGAS{ std::string code[MAX], firstname[MAX], lastname[MAX], tugas[MAX], telpon[MAX], tempat_tanggal_lahir[MAX];} /*Obyek->*/to_getDataPetugas;
		//Kerangka Box database Petugas 
		struct BOXWIDTH_DATA_PETUGAS{ int BoxWidthNo{6}, BoxWidthFirstname,BoxWidthLastname{30},BoxWidthJob{30}, BoxWidthHub{20},BoxWidthBirthday{30};} /*Obyek->*/width;
		//Add
		void add_data_petugas(){
			if (isFully())
			{
				std::cout << " Sorry:This Database Full" << std::endl;
			}else{
				system("clear");
				std::string getLastname, getFirstname, getJob, getHub, getBirthday, getCode;
				std::cout << " == [+] DATABASE PETUGAS POLRES TABALONG [+] == " << std::endl ;
				std::cout << " Next(y/n):";getline(std::cin, getFirstname);
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				std::cout << " Username :";getline(std::cin, getLastname);
				std::cout << " Bagian   :";getline(std::cin, getJob);
				std::cout << " Code     :";getline(std::cin, getCode);
				std::cout << " Telpon   :";getline(std::cin, getHub);
				std::cout << " Birthday :";getline(std::cin, getBirthday);

				to_getDataPetugas.firstname[to_getControl.belakang] = getFirstname;
				to_getDataPetugas.lastname[to_getControl.belakang] = getLastname;
				to_getDataPetugas.tugas[to_getControl.belakang] = getJob;
				to_getDataPetugas.code[to_getControl.belakang] = getCode;
				to_getDataPetugas.telpon[to_getControl.belakang] = getHub;
				to_getDataPetugas.tempat_tanggal_lahir[to_getControl.belakang] = getBirthday;
				to_getControl.belakang++;
				std::cout << " Add Data Complete! " << std::endl ; 
			}}
		//Delete
		void delete_data_petugas(){
			if (isEmpty())
			{
				std::cout << " Sorry: This Data Still Not-Empty" << std::endl;
			}else{
				for (int i = to_getControl.depan; i < to_getControl.belakang; i++)
				{
					to_getDataPetugas.code[i] = to_getDataPetugas.code[i+1];
					to_getDataPetugas.firstname[i] = to_getDataPetugas.firstname[i+1];
					to_getDataPetugas.lastname[i] = to_getDataPetugas.lastname[i+1];
					to_getDataPetugas.tugas[i] = to_getDataPetugas.tugas[i+1];
					to_getDataPetugas.telpon[i] = to_getDataPetugas.telpon[i+1];
					to_getDataPetugas.tempat_tanggal_lahir[i] = to_getDataPetugas.tempat_tanggal_lahir[i+1];
					to_getControl.belakang--;
				}
				std::cout << " Delete Data Complete!" << std::endl ;
			}}
		//Update
		void update_data_petugas(){
			if (isEmpty())
			{
				std::cout << " Sorry:Data Not-Empty!" << std::endl;

			}else{

			int codeUser;
			char pil;
			for (int i = to_getControl.depan; i <= to_getControl.belakang; i++)
			{

				backTo:
				system("clear");
				std::cout << " == UPDATE DATABASE PETUGAS == " << std::endl;
				std::cout << " [100]-Stop:" << std::endl;
				std::cout << " Entry Index Code:";std::cin>>codeUser;
				//view
				std::cout << " Code isEmpty" << std::endl;
				std::cout << " CODE    :" << to_getDataPetugas.code[codeUser] << std::endl; 
				std::cout << " NAMES   :" << to_getDataPetugas.lastname[codeUser] << std::endl;
				std::cout << " BIDANG  :" << to_getDataPetugas.tugas[codeUser] << std::endl;
				std::cout << " PHONE   :" << to_getDataPetugas.telpon[codeUser] << std::endl;
				std::cout << " BIRTHDAY:" << to_getDataPetugas.tempat_tanggal_lahir[codeUser] << std::endl;
				std::cout << " WHAT THIS YOUR NEED(Y/n)? ";std::cin>>pil;
				if ((pil == 'y')|(pil == 'Y'))
				{
						system("clear");
						std::cout << " == DATABASE TERKINI == " << std::endl;
						std::cout << " Code isEmpty" << std::endl;
						std::cout << " CODE    :" << to_getDataPetugas.code[codeUser] << std::endl; 
						std::cout << " NAMES   :" << to_getDataPetugas.lastname[codeUser] << std::endl;
						std::cout << " BIDANG  :" << to_getDataPetugas.tugas[codeUser] << std::endl;
						std::cout << " PHONE   :" << to_getDataPetugas.telpon[codeUser] << std::endl;
						std::cout << " BIRTHDAY:" << to_getDataPetugas.tempat_tanggal_lahir[codeUser] << std::endl;
						//PROCESS UPDATE
						std::cout << " ==============================================" << std::endl;
						std::string getLastname, getFirstname, getJob, getHub, getBirthday, getCode;
						std::cout << " == [~] DATABASE UPDATE POLRES TABALONG [~] == " << std::endl;
						std::cout << " Next(y/n):";getline(std::cin, getFirstname);
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
						std::cout << " Username :";getline(std::cin, getLastname);
						std::cout << " Bagian   :";getline(std::cin, getJob);
						std::cout << " Code     :";getline(std::cin, getCode);
						std::cout << " Telpon   :";getline(std::cin, getHub);
						std::cout << " Birthday :";getline(std::cin, getBirthday);

						to_getDataPetugas.firstname[codeUser] = getFirstname;
						to_getDataPetugas.lastname[codeUser] = getLastname;
						to_getDataPetugas.tugas[codeUser] = getJob;
						to_getDataPetugas.code[codeUser] = getCode;
						to_getDataPetugas.telpon[codeUser] = getHub;
						to_getDataPetugas.tempat_tanggal_lahir[codeUser] = getBirthday;
						std::cout << " Update Data Complete! " << std::endl ; 
						break;

				}else if (codeUser == 071101)
				{
					break;
				}
				else{

					std::cout<< " Data:Not-Empty!!! " << std::endl;
					goto backTo;
				}


			}}}
		/*===========================================================| (2) MENU */
		/*===========================================================| PRINTS ALL_DATABASE |=========================================================================*/
		void printDatabasePetugas(){
			if (isEmpty())
			{
				std::cout<< " Not-Empty!" << std::endl;
			}else{
				system("clear");
				std::cout << " == DATABASE PETUGAS POLRES TABALONG == " << std::endl;
				BOX_DATA_PETUGAS("+",width.BoxWidthNo + 2, '-',"",
					"+",width.BoxWidthLastname  + 2, '-',"",
					"+",width.BoxWidthFirstname + 2, '-',"",
					"-",width.BoxWidthJob       + 2, '-',"",
					"+",width.BoxWidthHub       + 2, '-',"",
					"+",width.BoxWidthBirthday  + 2, '-',"",
					"+");
				BOX_DATA_PETUGAS( "| ",width.BoxWidthNo, ' ', "CODE",
					" | ",width.BoxWidthLastname , ' ', "USERNAME",
					" | ",width.BoxWidthFirstname, ' ', "",
					"   ",width.BoxWidthJob      , ' ', "BIDANG",
					" | ",width.BoxWidthHub      , ' ', "NO.TELPON",
					" | ",width.BoxWidthBirthday , ' ', "PLACE&BIRTHDAY",
					" |");
				BOX_DATA_PETUGAS("+",width.BoxWidthNo + 2, '-',"",
					"+",width.BoxWidthLastname  + 2, '-',"",
					"+",width.BoxWidthFirstname + 2, '-',"",
					"-",width.BoxWidthJob       + 2, '-',"",
					"+",width.BoxWidthHub       + 2, '-',"",
					"+",width.BoxWidthBirthday  + 2, '-',"",
					"+");
				for (int i = to_getControl.depan; i < to_getControl.belakang; i++)
				BOX_DATA_PETUGAS("| ",width.BoxWidthNo, ' ', to_getDataPetugas.code[i], 
					" | ",width.BoxWidthLastname , ' ', to_getDataPetugas.lastname[i],
					" | ",width.BoxWidthFirstname, ' ', to_getDataPetugas.firstname[i],
					"   ",width.BoxWidthJob      , ' ', to_getDataPetugas.tugas[i],
					" | ",width.BoxWidthHub      , ' ', to_getDataPetugas.telpon[i],
					" | ",width.BoxWidthBirthday , ' ', to_getDataPetugas.tempat_tanggal_lahir[i],
					" |");
				BOX_DATA_PETUGAS("+",width.BoxWidthNo + 2, '-',"",
					"+",width.BoxWidthLastname  + 2, '-',"",
					"+",width.BoxWidthFirstname + 2, '-',"",
					"-",width.BoxWidthJob       + 2, '-',"",
					"+",width.BoxWidthHub       + 2, '-',"",
					"+",width.BoxWidthBirthday  + 2, '-',"",
					"+");
			}}


		/*==========================================================| PROROTYPE FUNCTION |========================================================================*/

		//PROTOTYPE FUNCTION DISPLAY 
		int main_menu_turunan_satu_DATAPETUGAS();
		int main_menu_turunan_satu_PEMBUATAN_SIM();
		int main_menu_turunan_dua_PEMBUATAN_SIM_perorangan();
		int main_menu_turunan_dua_PEMBUATAN_SIM_umum();
		//PROTOTYPE UP
		int Main_menu_utama(){
			system("clear");
			int in_user;
			std::cout << std::endl;
			std::cout << "\n == KEPOLISIAN NEGARA REPUBLIK INDONESIA == " << std::endl;
			std::cout << "             -- POLRES TABALONG --          " << std::endl;
			std::cout << "               (Driving License)            " << std::endl;
			std::cout << " ___________________________________________" << std::endl << std::endl;
			std::vector<std::string> in_data_user_first {"DATA PETUGAS","PEMBUATAN SIM","KELUAR"};
			for (int i = 0; i < in_data_user_first.size(); ++i)
			{
				std::cout << " [" << (i+1) << "] " << in_data_user_first[i] << std::endl;
			}
			std::cout << std::endl  << " ===========================================" << std::endl;
			std::cout << " Masukan Pilihan Anda : " << std::endl;
			std::cin >> in_user;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			return in_user;}
		int main_menu_turunan_satu_DATAPETUGAS(){
			system("clear");
			int in_user;
			std::cout << std::endl;
			std::cout << "            DATA PETUGAS  " << std::endl;
			std::cout << " ==================================" << std::endl;
			std::vector<std::string> in_data_user_second {"Pengisian Data Petugas","Data Petugas","Delete Data","Update Data","Back to Main-menu"};
			for (int i = 0; i < in_data_user_second.size(); ++i)
			{
				std::cout << " [" << (i+1) << "] " << in_data_user_second[i] << std::endl;
			}
			std::cout << " ==================================" << std::endl;
			std::cout << " Masukan Pilihan Anda : " << std::endl;
			std::cin >> in_user;
			return in_user;}
		int main_menu_turunan_satu_PEMBUATAN_SIM(){
			system("clear");
			int in_user;
			std::cout << std::endl;
			std::cout << "            DAFTAR PENGAJUAN SIM  " << std::endl;
			std::cout << " ===========================================" << std::endl;
			std::vector<std::string> in_data_user_second {"SIM PERORANGAN","SIM UMUM","Back to Main-menu"};
			for (int i = 0; i < in_data_user_second.size(); ++i)
			{
				std::cout << " [" << (i+1) << "] " << in_data_user_second[i] << std::endl;
			}
			std::cout << " ===========================================" << std::endl;
			std::cout << " Masukan Pilihan Anda : " << std::endl;
			std::cin >> in_user;
			return in_user;	}
		int main_menu_turunan_dua_PEMBUATAN_SIM_perorangan(){
			system("clear");
			int in_user;
			std::cout << std::endl;
			std::cout << "       DAFTAR PENGAJUAN SIM PERORANGAN      " << std::endl;
			std::cout << " ===========================================" << std::endl;
			std::vector<std::string> in_data_user_second {"SIM A","SIM BI","SIM BII","SIM C","SIM D","Description Urgent","Back to Main-menu"};
			for (int i = 0; i < in_data_user_second.size(); ++i)
			{
				std::cout << " [" << (i+1) << "] " << in_data_user_second[i] << std::endl;
			}
			std::cout << " ===========================================" << std::endl;
			std::cout << " Masukan Pilihan Anda : " << std::endl;
			std::cin >> in_user;
			return in_user;}
		int main_menu_turunan_dua_PEMBUATAN_SIM_umum(){
			system("clear");
			int in_user;
			std::cout << std::endl;
			std::cout << "          DAFTAR PENGAJUAN SIM UMUM         " << std::endl;
			std::cout << " ===========================================" << std::endl;
			std::vector<std::string> in_data_user_second {"SIM A UMUM","SIM BI UMUM","SIM BII UMUM","Deskription Urgent","Back to Main-menu"};
			for (int i = 0; i < in_data_user_second.size(); ++i)
			{
				std::cout << " [" << (i+1) << "] " << in_data_user_second[i] << std::endl;
			}
			std::cout << " ===========================================" << std::endl;
			std::cout << " Masukan Pilihan Anda : " << std::endl;
			std::cin >> in_user;
			return in_user;}
		

		//PROTOTYPE FUNCTION MENU
		void MENU_DATA_PETUGAS();
		void MENU_PEMBUATAN_SIM();
		void SUB_MENU_PEMBUATAN_SIM_PERORANGAN();
		void SUB_MENU_PEMBUATAN_SIM_UMUM();
		//PROTOTYPE UP
		void MENU_DATA_PETUGAS(){
			char pilihanUser;
			int user = main_menu_turunan_satu_DATAPETUGAS();
			enum menu{ADD = 1, VIEW, DELETE, UPDATE, EXIT};
			while(user!=EXIT){
				switch(user){
					case ADD:
						add_data_petugas();
						break;
					case VIEW:
						printDatabasePetugas();
						break;
					case DELETE:
						delete_data_petugas();
						break;
					case UPDATE:
						update_data_petugas();
						break;
					default:
						std::cout << " Code Invalid!" << std::endl;
						system("pause");
						break;
				}
				back:
				std::cout<< " Back(y/n)? ";std::cin>>pilihanUser;
				if ((pilihanUser == 'y')|(pilihanUser == 'Y'))
				{
					user = main_menu_turunan_satu_DATAPETUGAS();
				}else if ((pilihanUser == 'n')|(pilihanUser == 'N'))
				{
					break;
				}else{
					goto back;
				}

			}}
		void MENU_PEMBUATAN_SIM(){
			int menuUtama = main_menu_turunan_satu_PEMBUATAN_SIM();
			char again;
			enum menu{PERSON = 1,UMUM,EXIT};
			while(menuUtama != EXIT){
				switch(menuUtama){
					case PERSON:
						SUB_MENU_PEMBUATAN_SIM_PERORANGAN();
						break;
					case UMUM:
						SUB_MENU_PEMBUATAN_SIM_UMUM();
						break;
					default:
						system("pause");
						break;
				}
				back:
				std::cout<< " Back(y/n)? ";std::cin>>again;
				if ((again == 'y')|(again == 'Y'))
				{
					menuUtama = main_menu_turunan_satu_PEMBUATAN_SIM();
				}else if ((again == 'n')|(again == 'N'))
				{
					break;
				}else{
					goto back;
				}
			}}
		
		class Class_Build_Content_sim{
			private:
				std::vector<std::string> text_deskription = {"SIM A","SIM B1","SUM B2","SIM C","SIM D"};
				std::vector<std::string> status_ujian = {"LULUS","TIDAK LULUS"};
				int cost_build;
				int cost_tax;
				int total_cost;

				int total_benar;
			public:

				//pada saat pemanggilan penggunaan, yang dipanggil adalah;
				//[1] Class_Build_Content_sim
				//[2] getUjiSIM();

				int usia, tahun_lahir,bulan_lahir,tanggal_lahir;
				std::string nama, alamat, nik,enter_user;
				Class_Build_Content_sim(){this->total_benar = 0;};
				
				void describe(int in_user){
					std::cout << " Deskription >==| " << text_deskription.at(in_user) << " |== " << std::endl;
				}
		//SOAL SOAL UJIAN AKAN DIMASUKAN DIDALAM FUNCTION INI
				void soal_psikotes(){
					system("clear");
					char satu,dua,tiga,empat,lima; //Deklaration
					std::cout << " Soal Ujian Psikotes Pembuatan SIM !" << std::endl;
					//Soal Satu
					std::cout << " Soal 1 (Sinonim):" << std::endl;
					std::cout << " ====================" << std::endl;
					std::cout << " BAKU = "<<std::endl;
					std::cout << " a.Perkiraan  b.Standar  c.Umum  d.Normal  e.Asli" << std::endl;
					std::cout << " Jawaban?";
					std::cin>>satu;
					if (satu == 'b')
					{
						std::cout << " Status Jawaban:";
						std::cout << " isCorrect " << std::endl << std::endl;
						total_benar++;
					}else{
						std::cout << " Status Jawaban:";
						std::cout << " is'n Correct " << std::endl << std::endl;
					}
					//Soal Dua
					std::cout << " Soal 2 (Sinonim):" << std::endl;
					std::cout << " ====================" << std::endl;
					std::cout << " INSOMNIA = "<<std::endl;
					std::cout << " a.Tidur  b.Cemas  c.Sedih  d.Tidak Bisa Tidur  e.Kenyataan" << std::endl;
					std::cout << " Jawaban?";
					std::cin>>dua;
					if (dua == 'd')
					{
						std::cout << " Status Jawaban:";
						std::cout << " isCorrect " << std::endl << std::endl;
						total_benar++;
					}else{
						std::cout << " Status Jawaban:";
						std::cout << " is'n Correct " << std::endl << std::endl;
					}
					//Soal Tiga
					std::cout << " Soal 3 (Antonim):" << std::endl;
					std::cout << " ====================" << std::endl;
					std::cout << " BONGSOR = "<<std::endl;
					std::cout << " a.Menumpuk  b.Tertua  c.Kerdil  d.Macet  e.Susut" << std::endl;
					std::cout << " Jawaban?";
					std::cin>>tiga;
					if (tiga == 'c')
					{
						std::cout << " Status Jawaban:";
						std::cout << " isCorrect " << std::endl << std::endl;
						total_benar++;
					}else{
						std::cout << " Status Jawaban:";
						std::cout << " is'n Correct " << std::endl << std::endl;
					}
					//Soal Empat
					std::cout << " Soal 4 (Antonim):" << std::endl;
					std::cout << " ====================" << std::endl;
					std::cout << " SEKULER = "<<std::endl;
					std::cout << " a.Ilmiah  b.Duniawi  c.Rohaniah  d.Keagamaan  e.Tradisional" << std::endl;
					std::cout << " Jawaban?";
					std::cin>>empat;
					if (empat == 'd')
					{
						std::cout << " Status Jawaban:";
						std::cout << " isCorrect " << std::endl << std::endl;
						total_benar++;
					}else{
						std::cout << " Status Jawaban:";
						std::cout << " is'n Correct " << std::endl << std::endl;
					}
					//Soal Lima
					std::cout << " Soal 5 (Analogi Verbal):" << std::endl;
					std::cout << " ====================" << std::endl;
					std::cout << " Mobil - Bensin = Pelari - ... "<<std::endl;
					std::cout << " a.Makanan  b.Sepatu  c.Kaos  d.Lintasan  e.Topi" << std::endl;
					std::cout << " Jawaban?";
					std::cin>>lima;
					if (lima == 'a')
					{
						std::cout << " Status Jawaban:";
						std::cout << " isCorrect " << std::endl << std::endl;
						total_benar++;
					}else{
						std::cout << " Status Jawaban:";
						std::cout << " is'n Correct " << std::endl << std::endl;
					}
					std::cout << " Nilai Akhir Anda : " << total_benar << std::endl;}
				void soal_umum(int user){
					std::cout << " Soal Ujian Pengetahuan Umum !" << std::endl;
					if (user == 1)
					{
						std::cout << "  SIM A PERORANGAN" << std::endl;
					}else if (user == 2)
					{
						std::cout << "  SIM B1 PERORANGAN" << std::endl;
					}else if (user == 3)
					{
						std::cout << "  SIM B2 PERORANGAN" << std::endl;
					}else if (user == 4)
					{
						std::cout << "  SIM C PERORANGAN" << std::endl;
					}else if (user == 5)
					{
						std::cout << "  SIM D PERORANGAN" << std::endl;
					}else if (user == 6)
					{
						std::cout << "  SIM A UMUM" << std::endl;
					}else if (user == 7)
					{
						std::cout << "  SIM B1 UMUM" << std::endl;
					}else if (user == 8)
					{
						std::cout << "  SIM B2 UMUM" << std::endl;
					}
				}
				void control_pilihan_materi_umum(int user){
					soal_umum(user);
					//Selanjutnya
					std::string yes_or_no;
					std::cout << " Ujian Materi Umum Telah Selesai, Silahkan lanjutkan ujian psikotes!" << std::endl;
							
							back:
							std::cout << " Keluar untuk lanjutkan(Y/y)? ";std::cin>>yes_or_no; 
							if ((yes_or_no == "y")||(yes_or_no == "Y"))
							{	
								system("exit");

							}else if ((yes_or_no == "clear"))
							{
								system("clear");
								goto back;
							}else{
								std::cout << " Your input Invalid!" << std::endl;
								goto back;
							}}
				void control_pilihan_materi_psikotes(){
					soal_psikotes();
					//Selanjutnya
					std::string yes;
					std::cout << " Ujian Psikotes Telah Selesai, Silahkan lanjutkan ujian pengetahuan Umum!" << std::endl;
					backto:
					std::cout << " Keluar untuk lanjutkan(Y/y)?  ";std::cin>>yes; 
					if ((yes == "y")||(yes == "Y"))
					{	
						system("exit");
					}else if ((yes == "clear"))
					{
						system("clear");
						goto backto;
					}else{
						std::cout << " Your input Invalid!" << std::endl;
						goto backto;
					}}
				void bayar_function(int user){
					system("clear");
					std::cout << "\n == KEPOLISIAN NEGARA REPUBLIK INDONESIA == " << std::endl;
					std::cout << "          -- KASIR PEMBUATAN SIM --          " << std::endl;
					std::cout << " ___________________________________________" << std::endl;
					if (user == 1)
					{

						std::cout << "   Jenis SIM     : A" << std::endl;
						cost_build = 150000; cost_tax = cost_build * (10/100);total_cost = cost_build + cost_tax;

					}else if (user == 2)
					{

						std::cout << "   Jenis SIM     : BI" << std::endl;
						cost_build = 200000; cost_tax = cost_build * (10/100);total_cost = cost_build + cost_tax;


					}else if (user == 3)
					{

						std::cout << "   Jenis SIM     : BII" << std::endl;
						cost_build = 80000; cost_tax = cost_build * (10/100);total_cost = cost_build + cost_tax;

					}else if (user == 4)
					{

						std::cout << "   Jenis SIM     : C" << std::endl;
						cost_build = 90000; cost_tax = cost_build * (10/100);total_cost = cost_build + cost_tax;

					}else if (user == 5)
					{

						std::cout << "   Jenis SIM     : D" << std::endl;
						cost_build = 50000; cost_tax = cost_build * (10/100);total_cost = cost_build + cost_tax;

					}else if (user == 6)
					{

						std::cout << "   Jenis SIM     : A UMUM" << std::endl;
						cost_build = 250000; cost_tax = cost_build * (10/100);total_cost = cost_build + cost_tax;

					}else if (user == 7)
					{

						std::cout << "   Jenis SIM     : BI UMUM" << std::endl;
						cost_build = 280000; cost_tax = cost_build * (10/100);total_cost = cost_build + cost_tax;
					}else if (user == 8)
					{

						std::cout << "   Jenis SIM     : BII UMUM" << std::endl;
						cost_build = 300000; cost_tax = cost_build * (10/100);total_cost = cost_build + cost_tax;

					}
					std::cout << "   Biaya Kotor   : " << cost_build << std::endl;
					std::cout << "   Pajak SIM     : " << cost_tax << std::endl;
					std::cout << "   Biaya Bersih  : " << total_cost << std::endl;
					std::cout << "   Thanks for make your Derived License!" << std::endl;
				}
				int operator_control(){
					int op;
					system("clear");
					std::cout << "\n    ----------------  " << std::endl;
					std::cout << "   | UJI MATERI SIM |   " << std::endl;
					std::cout << "    ----------------  " << std::endl << std::endl;
					std::string oper[]={"UJI MATERI","UJI PSIKOTES","CETAK KARTU","KELUAR"};
					for (int i = 0; i < sizeof(oper)/sizeof(std::string); i++)
					{
						std::cout << " [" << (i+1) << "] " << oper[i] << std::endl;
					}
					std::cout << " Ujian(1/2/3)? " ;std::cin>>op;
					return op;}
				void control_pilihan_ujian(int user){
					char again, ya, bayar;
					int operator_u = operator_control();
					enum ujian{MATERI = 1,PSIKOTES, CETAK, EXIT};
					while(operator_u != EXIT){
						switch(operator_u){
							case MATERI:

								control_pilihan_materi_umum(user);
							
							break;
						case PSIKOTES:
							
								control_pilihan_materi_psikotes();
							
							break;
						case CETAK:
							if (total_benar <= 5 )
							{
								std::cout << " Cetak Kartu Tidak Tersedia! " << std::endl;
							}else if (total_benar > 5 & total_benar <= 7)
							{
								std::cout << " Ujian Materi Anda Gagal, Silahkan daftarkan ulang diri anda! " << std::endl;
								total_benar = 0;
							}else{
								std::cout << " Selamat kepada anda, karena telah lulus ujian materi! " << std::endl;
								std::cout << " Silahkan Cetak Kartu Anda!ENTRY(Y/n)? ";std::cin>>ya;
								if ((ya == 'Y')|(ya == 'y'))
								{	
									cetakKartu(user);
									std::cout << " Lanjutkan untuk pembayaran(y)? ";std::cin>>bayar;
									if ((bayar == 'y')|(bayar == 'Y'))
									{

										bayar_function(user);
										total_benar = 0;

									}
								}else{
									break;
								}
							}
						}
						back:
						std::cout << " Back to Menu(y/n)? ";std::cin>>again;
						if ((again == 'y')|(again == 'Y'))
						{
							operator_u = operator_control();
						}else if ((again == 'n')|(again == 'N'))
						{
							break;
						}else{
							goto back;
						}
					}}

					//Terusan program utama
				void getUjiSIM(int user){
					std::cout << " Selamat Datang Di Polres Tabalong " << std::endl;
					std::cout << " == MOHON LENGKAPI PERSYARATAN DIBAWAH INI == " << std::endl;
					std::cout << " Your Old? ";std::cin>>usia;
					if (usia >= 17)
					{
						std::cout << " ENTER! ";getline(std::cin,enter_user);
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
						std::cout << " NAME             : ";getline(std::cin,nama);
						std::cout << " NIK              : ";getline(std::cin, nik);
						std::cout << " BIRTH-DAY(1-31)  : ";std::cin >> tanggal_lahir;
						std::cout << " BIRTH-MONTH(1-12): ";std::cin >> bulan_lahir;
						std::cout << " BIRTH-YEAR       : ";std::cin >> tahun_lahir;
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
						std::cout << " ADDREAS          : ";getline(std::cin, alamat);

						if (2020-tahun_lahir >= 17 && 2020-tahun_lahir == usia+1)
						{
							std::cout << "\n Selamat data anda " << status_ujian.at(0) << " syarat berkas" << std::endl;
							
							//Digunakan ketika berhasil menjawab soal;
							// std::cout << " NAMA          : " << nama << std::endl;
							// std::cout << " NIK           : " << nik << std::endl;
							// std::cout << " ALAMAT        : " << alamat << std::endl;
							// std::cout << " TANGGAL LAHIR : " << tanggal_lahir << "," << bulan_lahir << "-" << tahun_lahir << std::endl;
							// std::cout << " MASA BERLAKU  : " << tanggal_lahir << "," << bulan_lahir << "-" << (tahun_lahir+5) << std::endl;

							//Ujian
							back:
							char ujian_user;
							std::cout << " Masuk Untuk Ujian Materi dan Psikotes(Y/y)? ";std::cin>>ujian_user;
							if ((ujian_user == 'y')|(ujian_user == 'Y'))
							{
									control_pilihan_ujian(user);	
							}else{
								goto back;
							}
							
						}else{
							std::cout << " \nMaaf, data yang anda masukan " << status_ujian.at(1) << " kewajaran " << std::endl;
						}

					}else{
						std::cout << " \nSorry, your old cannot Sign in this Form, because not 17th!" << std::endl;
					}}
				void cetakKartu(int user){
					system("clear");
					std::cout << "\n == KEPOLISIAN NEGARA REPUBLIK INDONESIA == " << std::endl;
					std::cout << "        -- SURAT IJIN MENGEMUDI --          " << std::endl;
					std::cout << "           (  Driving License  )            " << std::endl;
					std::cout << " ___________________________________________" << std::endl;
					std::cout << "   Nama          : " << nama << std:: endl;
					std::cout << "   Alamat        : " << alamat << std:: endl;
					std::cout << "   Tanggal Lahir : " << tanggal_lahir << " - " << bulan_lahir << " - " << tahun_lahir  << std:: endl;
					std::cout << "   No. SIM       : 638-9979-9132-7892" << std:: endl;
					if (user == 1)
					{
						std::cout << "   Jenis SIM     : A" << std::endl;
					}else if (user == 2)
					{
						std::cout << "   Jenis SIM     : BI" << std::endl;
					}else if (user == 3){
						std::cout << "   Jenis SIM     : BII" << std::endl;
					}else if (user == 4)
					{
						std::cout << "   Jenis SIM     : C" << std::endl;
					}else if (user == 5)
					{
						std::cout << "   Jenis SIM     : D" << std::endl;
					}else if (user == 6)
					{
						std::cout << "   Jenis SIM     : A UMUM" << std::endl;
					}else if (user == 7)
					{
						std::cout << "   Jenis SIM     : BI UMUM" << std::endl;
					}else if (user == 8)
					{
						std::cout << "   Jenis SIM     : BII UMUM" << std::endl;
					}
					std::cout << std::endl;}
		};

		void Deskription_sim_perorangan(){
			//sim A
			Class_Build_Content_sim s1 = Class_Build_Content_sim();
			s1.describe(0);
			std::cout << " Untuk mengemudikan mobil penumpang serta barang perseorangan dengan jumlah berat yang tidak melebihi 3.500 kg.\n\n";
			//sim B1
			Class_Build_Content_sim s2 = Class_Build_Content_sim();
			s2.describe(1);
			std::cout << " Digunakan untuk mengemudikan mobil penumpang serta barang perseorangan dengan skala jumlah berat yang diperbolehkan\n lebih dari 3.500 kg.\n\n";
			//sim B2
			Class_Build_Content_sim s3 = Class_Build_Content_sim();
			s3.describe(2);
			std::cout << " Digunakan untuk mengendarai kendaraan berat, Kendaraan penarik, dan Kendaraan Bermotor dengan menarik kereta tempelan atau gandengan perseorangan\n dengan jumlah bobot yang diperbolehkan untuk kereta tempelan atau gandengan lebih dari 1.000 kg.\n\n";
			//sim C
			Class_Build_Content_sim s4 = Class_Build_Content_sim();
			s4.describe(3);
			std::cout << " Digunakan untuk mengendarai kendaraan roda 2 atau kendaraan bermotor\n\n";
			//sim D
			Class_Build_Content_sim s5 = Class_Build_Content_sim();
			s5.describe(4);
			std::cout << " Digunakan khusus bagi penyAndang cacat untuk mengendarai sebuah kendaraan\n\n";}

		void Deskription_sim_umum(){
		   //sim A
			Class_Build_Content_sim s1 = Class_Build_Content_sim();
			s1.describe(0);
			std::cout << " Untuk mengemudikan mobil penumpang serta barang umum dengan jumlah berat yang tidak melebihi 3.500 kg.\n\n";
			//sim B1
			Class_Build_Content_sim s2 = Class_Build_Content_sim();
			s2.describe(1);
			std::cout << " Digunakan untuk mengemudikan mobil penumpang serta barang umum dengan skala jumlah berat yang diperbolehkan\n lebih dari 3.500 kg.\n\n";
			//sim B2
			Class_Build_Content_sim s3 = Class_Build_Content_sim();
			s3.describe(2);
			std::cout << " Digunakan untuk mengendarai kendaraan berat, Kendaraan penarik, dan Kendaraan Bermotor dengan menarik kereta tempelan atau gandengan umum\n dengan jumlah bobot yang diperbolehkan untuk kereta tempelan atau gandengan lebih dari 1.000 kg.\n\n";}

		void SUB_MENU_PEMBUATAN_SIM_PERORANGAN(){
			Class_Build_Content_sim s1 = Class_Build_Content_sim();
			int menuUtama = main_menu_turunan_dua_PEMBUATAN_SIM_perorangan();
			char again;
			enum menu{A = 1, B1, B2, C, D, DESKRIPTION, EXIT};
			while(menuUtama != EXIT){
				switch(menuUtama){
					case A:
						s1.getUjiSIM(A);
						break;
					case B1:
						s1.getUjiSIM(B1);
						break;	
					case B2:
						s1.getUjiSIM(B2);
						break;
					case C:	
						s1.getUjiSIM(C);
						break;	
					case D:
						s1.getUjiSIM(D);
						break;
					case DESKRIPTION:
						Deskription_sim_perorangan();
					default:
						system("pause");
						break;
				}
				back:
				std::cout<< " Back(y/n)? ";std::cin>>again;
				if ((again == 'y')|(again == 'Y'))
				{
					menuUtama = main_menu_turunan_dua_PEMBUATAN_SIM_perorangan();
				}else if ((again == 'n')|(again == 'N'))
				{
					break;
				}else{
					goto back;
				}
			}}

		void SUB_MENU_PEMBUATAN_SIM_UMUM(){
			Class_Build_Content_sim s2 = Class_Build_Content_sim();
			int menuUtama = main_menu_turunan_dua_PEMBUATAN_SIM_umum();
			char again;
			enum menu{A = 1, B1, B2, DESKRIPTION, EXIT};
			while(menuUtama != EXIT){
				switch(menuUtama){
					case A:
						s2.getUjiSIM(6);
						break;
					case B1:
						s2.getUjiSIM(7);
						break;			
					case B2:
						s2.getUjiSIM(8);
						break;
					case DESKRIPTION:
						Deskription_sim_umum();
						break;			
					default:
						system("pause");
						break;
				}
				back:
				std::cout<< " Back(y/n)? ";std::cin>>again;
				if ((again == 'y')|(again == 'Y'))
				{
					menuUtama = main_menu_turunan_dua_PEMBUATAN_SIM_umum();
				}else if ((again == 'n')|(again == 'N'))
				{
					break;
				}else{
					goto back;
				}
			}}
		
		//PROGRAM UTAMA
		int this_main_program(){
			int menuUtama = Main_menu_utama();
			char again;
			enum menu{MAINPOWER = 1,BUILD,RP,EXIT};
			while(menuUtama != EXIT){
				switch(menuUtama){
					case MAINPOWER:
						MENU_DATA_PETUGAS();
						break;
					case BUILD:
						MENU_PEMBUATAN_SIM();
						break;
					default:
						system("pause");
						break;
				}
				back:
				std::cout<< " Back(y/n)? ";std::cin>>again;
				if ((again == 'y')|(again == 'Y'))
				{
					menuUtama = Main_menu_utama();
				}else if ((again == 'n')|(again == 'N'))
				{
					break;
				}else{
					goto back;
				}
			}
			std::cout << " Thanks for using this program!" << std::endl;
			std::cin.get();
			return 0;
		}
		//PROTOTYPE UP FUNCTION
		void BOX_DATA_PETUGAS(std::string star, uint16_t width1, char fillchar1, std::string msg1, std::string endfill1,
							  uint16_t width2, char fillchar2, std::string msg2, std::string endfill2,
							  uint16_t width3, char fillchar3, std::string msg3, std::string endfill3,
							  uint16_t width4, char fillchar4, std::string msg4, std::string endfill4,
		  					  uint16_t width5, char fillchar5, std::string msg5, std::string endfill5,
		  					  uint16_t width6, char fillchar6, std::string msg6, std::string endfill6){
			std::cout<< star << std::setw(width1) << std::setfill(fillchar1) << msg1 << endfill1
							 << std::setw(width2) << std::setfill(fillchar2) << msg2 << endfill2
							 << std::setw(width3) << std::setfill(fillchar3) << msg3 << endfill3
							 << std::setw(width4) << std::setfill(fillchar4) << msg4 << endfill4
							 << std::setw(width5) << std::setfill(fillchar5) << msg5 << endfill5
							 << std::setw(width6) << std::setfill(fillchar6) << msg6 << endfill6 << std::endl ;
		};

}