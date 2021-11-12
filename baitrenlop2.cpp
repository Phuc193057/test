#include<iostream>

using namespace std;

class HDBH
{
	private:
		char* tenhang;
		double tienban;
		static int tshd;
		static double tstienban;
		
	public:
		HDBH(char* tenhang1 = NULL, double tienban1 = 0.0)
		{
			tienban = tienban1;
			tenhang = tenhang1;
			++tshd;
			tstienban += tienban;
		}
		
		~HDBH()
		{
			--tshd;
			tienban -= tienban;
			cout << endl << "Ham huy duoc goi.";
	    }
	    
	    
	    void sua();
	    static void in()
	    {
	    	cout << endl << "Tong so hoa don: " << tshd;
	    	cout << endl << "Tong so tien ban: " << tstienban;
	    }
	};
	
	int HDBH::tshd = 0;
	double HDBH::tstienban = 0;
	void HDBH::sua()
	{
	    cout << endl << "Ten hang" << tenhang;
	    cout << endl << "Tien ban " << tienban;
	    tstienban -= tienban;
	    cout << endl << "Sua tien ban thanh: ";
	    cin >> tienban;
	    tstienban += tienban;
	}
	
	int main()
	
	{
		HDBH* h1 = new HDBH((char*)"Xi mang", 2000);
		HDBH* h2 = new HDBH((char*)"Sat thep", 3000);
		HDBH::in();
		delete h1;
		HDBH::in();
		h2->sua();
		HDBH::in();
		delete h2;
		HDBH::in();
		return 0;
		}
