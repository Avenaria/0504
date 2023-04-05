//
#include <iostream>
using namespace std;
#include "animal.h"
 #include"baza.h"
//class a{
//public :
//	virtual void F() = 0;//чисто виртуальная ф-я, если класс является абстрактным класс создать нельзя
//	//предазначено для командной разработки
//	virtual void F2() = 0;
//};
//class b: public a{
//public:
//	virtual void F() {
//		cout << "Class b ";
//	}
//};
//class c:public a{
//	void F() {
//		cout << " Class C";
//	};
//class d:public b{
//public:
//	virtual void F() {
//		cout << "Class d ";
//	}
//};
class a {
public:
	int val;
};
class b: public virtual a{};
class c: public virtual a{};
class d: public b, public c{
public: 
	//int getVal() {
	//	return b:: val;// расшерение видимости, вот с этого класса ты забираешь значение
	//}
	int getVal() {
		return val;//когда обозначаем класс виртуальный, то переменная будет одна и также, просто пееременная будет переда каждому из клас. и расшерение не нужно
	}
};

int main()
{
	//a* pA;
	////a A;//абстракция так как в нем содержится одна вертуальная функция, если есть классы наследники они обязаны реализовать данную функцию
	//b B;
	//c C;
	//d D;

	//
	//pA = &B;
	//pA = &C;
	//pA->F();
	////указатель второстепенно класса не может ссылать на сновной, только обтрака
	//pA = &D;//указатель второстепенно класса не может ссылать на сновной, только обтрака
	//pA->F();

	animal* animals[3] =// массив обьектов 
	{
		new dog{"Bovik "},
		new Cat{"Barsik "},
		new frog{"Barsik "}
	};
	for (int i = 0; i < 3; i++) {
		animals[i]->Speak();
	}

	Dav MString{ "sring 1", 1, " string 2", 2 };
}

