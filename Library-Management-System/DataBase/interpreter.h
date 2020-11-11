#pragma once
#include <string>
#include <vector>

#include "minidb_api.h"
#include "sql_statement.h"

class Interpreter {
private:
	MiniDBAPI* api;
	std::string sql_statement_;
	std::vector<std::string> sql_vector_;
	int sql_type_;
	void TellSQLType();
	void FormatSQL();
	void Run();

public:
	Interpreter();
	~Interpreter();
	void ExecSQL(std::string statement);
	std::string GetRes();
	int GetStatusID();
};