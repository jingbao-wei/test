//#include <iostream>
//using namespace std;
//
//class Builling {
//	//全局函数作为类的友元，可以访问类内的私有成员
//	friend void jinru(Builling& b);
//
//public:
//	Builling() {
//		m_Setting = "ketting";
//		m_Beding = "woshi";
//	}
//
//public:
//	string m_Setting;
//private:
//	string m_Beding;
//
//
//};
//
//
//void jinru(Builling &b) {
//	cout << b.m_Setting << endl;
//	cout << b.m_Beding << endl;
//}
//
//void test_friend01() {
//	Builling b;
//	jinru(b);
//}
//
//int main() {
//	test_friend01();
//}