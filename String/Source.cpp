#include<iostream>
#include<string> //




int main() {
	setlocale(LC_ALL, "Ru");

	//Символьный массивв на языке с

	/*char c_str[]{ 'H', 'i', '!','\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello World!" };
	std::cout << c_str2 << std::endl;*/

	// Символьный массивв на языке с++

	//std::string str;
	//std::cout << str << std::endl; // выводится пустая строка
	//str = "Hello World!";
	//std::cout << str << std::endl;
	//str = "Bye world!";
	//std::cout << str << std::endl;
	//str += " !!!"; // Добавление текста к концу строки
	//std::cout << str << std::endl;

	// ввод строки
	
	//std::cout << " Привет, как тебя зовут? \n Ввод: ";
	//std::string name;
	//std::cin >> name; // Ввод одного слова до первого разделителя (пробела)
	//std::cout << " Привет " << name << "!\n";
	//std::cin.ignore();
	//std::cout << " А кем теы работаешь? - ";
	//std::string job;
	//std::getline(std::cin, job);
	//std::cout << " Ого, " << job << "? Круто! \n";

	//std::cout << " А сколько тебе лет? ";
	//int age;
	//std::cin >> age;
	//std::cout << " Когда-то и мне было " << age << " лет...\n";

	// методы строк

	std::string my_str = "Hello World!";


	// Метод Length и Size
	//std::cout << my_str.length() << std::endl;
	//std::cout << my_str.size() << std::endl;

	// метод insert

	/*my_str.insert(3, "WERWEW");
	std::cout << my_str << std::endl;*/

	// метод Replace (Замена части строки на новую)

	/*my_str.replace(3, 5, "!!!");
	std::cout << my_str << std::endl;*/

	// метод find возвращающий позицию первого вхождения

	//std::cout << my_str.find("lo") << std::endl; // 2
	//std::cout << my_str.find("l", 5) << std::endl; //9

	// метод rfind возвращ позицию последнего вхождения подстроки в массив
	
	/*std::cout << my_str.rfind("lo") << std::endl; 
	std::cout << my_str.rfind("l", 5) << std::endl; */

	// метод substr  - возвращает подстроку из строки

	//std::cout << my_str.substr(4) << std::endl;
	//std::cout << my_str.substr(4,5) << std::endl;


	// функции для работы со строками
	// to_string:

	int num = 123;
	//std::string num_str = std::to_string(num);
	//num_str += '!';
	//std::cout << "num_str = " << num_str << std::endl;

	//
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num =" << num << std::endl;




	return 0;
}