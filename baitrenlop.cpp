#include<iostream>
#include<vector>

using namespace std;

class HD{
	int mshd;
	int tienban;
	static int dem, tong;
	
	public:
		HD()
		{
			this->mshd = 0;
			this->tienban = 0;
		}
		
		HD(int ms, int tien)
		{
			this->mshd = ms;
			this->tienban = tien;
			dem ++;
			tong ++;
		}
		
		 int suand(HD hoadon, int tien)
		{
			hoadon.tienban = tien;
			return hoadon.tienban;
		}

		
		
};

  int HD::dem = 0;
  int HD::tong = 0;
  
int main()
{
	HD hd1(1234, 40000);
	HD hd2(123, 50000);
	
	return 0;
}
  	
