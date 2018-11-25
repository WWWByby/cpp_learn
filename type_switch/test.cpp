#include <iostream>
using namespace std;

const float foot = 3.3;
float getFoot(float height)
{
	return height * foot;
}

void testHeight()
{
	float i_height ;
	cout << "请输入你身高：";
	cin >> i_height;
	float peo_height = getFoot(i_height );

	cout << "你的身高是：" << peo_height<<"英尺" << endl;

}

void testTimes()
{
	long long  sec;
	cin >> sec ;

	int days = sec /3600/24;

	int hour = (sec - days*3600*24) /3600 ;

	int min = (sec - days * 3600 *24 - hour * 3600 ) / 60;

	int _sec = sec % 60;
		
	cout << "days : " << days <<"\t hour:" << hour << "\t min:"<< min <<"\t sec:"<<_sec <<endl;

}


int main(void)
{
	//米转换英尺
	//testHeight();
	testTimes();
}

