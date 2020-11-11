#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

#include <boost/algorithm/string.hpp>
//#include <readline/history.h>
//#include <readline/readline.h>

#include "interpreter.h"

using namespace std;

int main(int argc, const char* argv[]) {

	string sql;
	Interpreter itp;

	char line[114];
	size_t found;

	//using_history();

	while (true) {
		std::cout << "MiniDB> ";
		std::cin.getline(line, 100);
		sql = string(line);
		//free(line);
		boost::algorithm::trim(sql);

		if (sql.compare(0, 4, "exit") == 0 || sql.compare(0, 4, "quit") == 0) {
			itp.ExecSQL("quit");
			break;
		}

		while ((found = sql.find(";")) == string::npos) {
			std::cout << "";
			std::cin.getline(line, 100);
			//line = readline("");
			sql += "\n" + string(line);
			//free(line);
		}

		//if (sql.length() != 0) {
		//  add_history(sql.c_str());
		//}

		itp.ExecSQL(sql);
		std::cout << std::endl;
	}
	return 0;
}
