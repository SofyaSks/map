#include <iostream>
#include <map>
#include <string> // позволяют по дереву поиска быстрее находить информацию
#include <chrono>
#include <vector>

// найти среднюю зарплату всех сотрудников, ночных.дневных, 10 пользователей макимально близких к среднему значению
class User {
public:
	int id;
	std::string name;
	bool graphic;
	int salary;

	bool operator == (const User& other) const {
		                                                                                                                                  
	}
};

int task(int count) {
	std::vector<User> database;
	database.reserve(count);
	auto begin = std::chrono::steady_clock::now();
	for (int i = 0; i < database.capacity(); i++) {
		database.emplace_back(i + 1, "user" + std::to_string(i + 1));
	}
	auto end = std::chrono::steady_clock::now();
	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
	std::cout << "create vector: " << elapsed_ms.count() << " ms\n";
}

std::map<std::string, User> g_Users;

int main() {

	//vector <std::string> nammes;

	g_Users.insert({ "user", {1, "user"}});
	User local;
	local.id = 2;
	local.name = "user2";
	g_Users.insert({ local.name, local });
	g_Users["Users3"];
	g_Users["Users3"].id = 3;
	g_Users["Users3"].name = "User3";
	std:: pair<const std::string, User> &tmp =  *(g_Users.begin());
	auto where = g_Users.find("User3");
	where->second.id;
	/*auto [login, user] = *(g_Users.find("User3"));
	user.id;*/ //стандарт языка 17

	//vector,list, создать карту по списку 
	//линейный поиск, поиск по дереву, составление дерева

	

	return 0;
}