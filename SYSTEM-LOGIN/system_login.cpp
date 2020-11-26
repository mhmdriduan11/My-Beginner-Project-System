#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>
#include <memory>
#include <cctype> // tolower() || toupper()
#include <limits> //numeric_limits();
using namespace std;




//variabel external
auto data { make_shared<std::vector<string>>() };
using Bremwork = char ;
using Development = int ; 



//sub-Program
Development user_friendly(){
	Development send_feedback {};
	std::vector<string> pilihan;
	pilihan.push_back( "\n1)D)AFTAR" );
	pilihan.push_back( "2)L)OGIN" );
	pilihan.push_back( "3)R)ESET DATABASE" );
	pilihan.push_back( "4)B)ACK" );

	for(auto send : pilihan){
		std::cout << send << endl ;
	}

	std::cout << "\nP)ilihan: " ; 
	std::cin >> send_feedback ;
	return send_feedback ;}
void login(){

		unsigned short int count {1};
		string get_input_user{};
	
		char again{};
		bool condition {false};
	while(true){
		while(true){
			system("clear");
			std::cout << " == LOGIN == " << std::endl ;
			std::cout << "Username" << setw(6) << ": " ;
			std::cin >> get_input_user ;				//read dat  input by users;
				
					//Pindahkan data ke dalam variabel get_data : menggunakan pengulangan loop;
					for (size_t i = 0; i < data->size(); ++i)
					{
						if(data->at(i) == get_input_user){
							condition = {true};
							std::cout << "Selamat datang, anda berhasil login " << std::endl ; 
							
							break;
						}
					}
				
			count++;
			if (count == 3 || condition == true)
			{
				break;
			
			}
		//end while
		}

		if (!(condition))
		{
			std::cout << "Percobaan sudah 3x, mohon cek ulang Username anda`" << std::endl ;
		} else{
			condition = { false };
		}
		//atur ulang total count{};
		count = {0};
		std::cout << "B)ack(y/n))?" ;std::cin >> again ;
		if(std::toupper(again) != 'N')break;}}	
void daftar(){
	system("clear");
	std::cout << "======(SIGN-IN)======" << std::endl ;
	std::string entry_data_by_user {};
	while(true){
		std::cout << "Masukan username anda: " ;
		std::cin >> entry_data_by_user ;
		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		if(entry_data_by_user.length() >= 5){
			data->push_back( entry_data_by_user );
			std::cout << "SELAMAT AKUN ANDA DITERIMA" << std::endl ;
			break;
		}else{
			std::cout << "AKUN YANG ANDA MASUKAN TIDAK MEMENUHI BATAS LIMIT!" << std::endl ;
		}
		//jika masih kurang dari || sama dengan 5 maka akan terus diulang
	}}



//main-Program
Development main(){
	system("clear");
	char system_again {};
	enum pilihan { DAFTAR = 1,LOGIN  = 2,RESET_DATA = 3 ,BACK = 4};
	cout << "========(HACKERRANK)========" << endl ;
	int user { user_friendly() };
	while(user != BACK){
		switch(user){
			case DAFTAR:
				daftar();
				break ;
			case LOGIN: 
				login();
				break ;
			case RESET_DATA:
				data.reset();
				break;
		}
		back:
		std::cout << "A)gain Main-menu(y/n)>" ;std::cin >> system_again ;
		if (std::tolower(system_again) == 'y')
		 {
		 	user = { user_friendly() };
		 } else if (std::tolower(system_again) == 'n')
		 {
		 	break ;
		 }else{
		 	goto back;
		 }
	}
	std::cout << "Thanks for using this program ;) " << std::endl ;
	std::cin.get();
	return 0;
}