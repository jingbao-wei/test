//#include <iostream>
//using namespace std;
//
//class Builling {
//	//ȫ�ֺ�����Ϊ�����Ԫ�����Է������ڵ�˽�г�Ա
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