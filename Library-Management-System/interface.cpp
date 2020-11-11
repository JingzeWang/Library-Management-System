#include "lib_json\json.h"
#include "DataBase/interpreter.h"
using namespace std;
Interpreter itp;
bool InterfaceInit() {
	itp.ExecSQL("use LibraryManagementSystem;");
}
/*
	#1
	函数名称：根据书名查询书籍
	传入参数：姓名(string), 书籍id vector数组的引用
	返回值：有结果返回1，没有结果返回0
*/
int searchBookByName(std::string _name, std::vector<std::string>&idNums) {
	//查询主键不用打包
	Json::Value in;
	itp.ExecSQL("select * from BookInfo where name = \'" + _name + "\';");
	string res = itp.GetRes();
	Json::Reader reader;
	in["name"] = string_name;
	string test = in.toStyledString();
	cout << test << endl;
	/*
		通过名字进行查询，得到Json类型的idNums。
	*/
}

/*
	#2
	函数名称：根据id查询书籍全部信息
	传入参数：书籍的id，所有需要得到的信息
	返回值：成功返回1，异常失败返回0
*/
int searchBookById(std::string _id, std::string &_ISBN, int &_hasBorrowedNum,int &_isBorrowed,std::string &_startBorrowTime,std::string &_shouldReturnTime,std::string &_name,int &_price, std::string &_type,std::string &_author, int &_pageNum, int &_wordNum){
	//主键不用打包
	// Json::Value in;
	// in["id"] = string_id;


	// string test = in.toStyledString();
	// cout << test << endl;
	/*
		得到Json类型的变量信息
	*/
	Json::Reader reader;
	Json::Value value;
	string s_book = NULL;
	bool isOK = reader.parse(s_book, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	_ISBN = value["ISBN"].asString();
	_lock = value["lock"].asInt();
	_hasBorrowedNum = value["hasBorrowedNum"].asInt(); 
	_isBorrowed = value["isBorrowed"].asInt();
	_startBorrowTime = value["startBorrowTime"].asString();
	_shouldReturnTime = value["shouldReturnTime"].asString();

	/*
		通过ISBN在数据库进行查找得到s_bookinfo
	*/
	string s_bookinfo = NULL;
	bool isOK = reader.parse(s_bookinfo, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	_name = value["name"].asString();
	_price = value["price"].asInt();
	_type = value["type"].asString();
	_author = value["author"].asString();
	_pageNum = value["pageNum"].asInt();
	_wordNum = value["wordNum"].asInt();
	return 1;
}

/*
	#3
	函数名称：查询书籍id是否存在
	传入参数：书籍的id
	返回值：存在返回1，不存在返回0
*/
int idExist(std::string _id) {
	/*
		传入数据库
	*/
	//根据查询结果返回
}

/*
	#4
	函数名称：更新书籍信息bookinfo
	传入参数：书籍的ISBN(主键)，需要更新的一系列信息
	返回值：成功返回1，失败返回0
*/
int modifyBookinfo(std::string _ISBN, std::string _name, int _price, std::string _type,std::string _author, int _pageNum, int _wordNum){
	Json::Value in;
	in["name"] = _name;
	in["price"] = _price;
	in["type"] = _type;
	in["author"] = _author;
	in["pageNum"] = _pageNum;
	in["wordNum"] = _wordNum;
	string test = in.toStyledString();
	//上传_ISBN和test到数据库
}

/*
	#5
	函数名称：更新书籍状态（book）
	补充：更新书籍的各种状态（这里的id一定存在，是从查询结里导入的
	传入参数：书籍的id，书籍的ISBN等需要更新的书籍信息
	返回值：正在被操作lock等原因失败，成功返回1
*/
int modifyBook(std::string _id, std::string _ISBN, int _lock, int _hasBorrowedNum,int _isBorrowed,std::string _startBorrowTime,std::string _shouldReturnTime){
	Json::Value in;
	in["ISBN"] = _ISBN;
	in["lock"] = _lock;
	in["hasBorrowedNum"] = _hasBorrowedNum;
	in["isBorrowed"] = _isBorrowed;
	in["startBorrowTime"] = _startBorrowTime;
	in["shouldReturnTime"] = _shouldReturnTime;
	string test = in.toStyledString();
	//上传string _id和修改的test上去

}

/*
	#6
	函数名称：添加书籍
	传入参数：ISBN，书籍的name等需要添加的书籍信息
	返回值：正在被操作lock等原因失败，成功返回1
*/
int addBook(std::string _ISBN, std::string _name,int _price, std::string _type,std::string _author, int _pageNum, int _wordNum,int num,std::vector<std::string>&idNums){
	Json::Value in;
	in["name"] = _name;
	in["price"] = _price;
	in["type"] = _type;
	in["author"] = _author;
	in["pageNum"] = _pageNum;
	in["wordNum"] = _wordNum;
	string test = in.toStyledString(); 
	//将test插入bookInfo表
	idNums.resize(num);
	for(int i = 0; i < num; ++i) {
		//主键自动生成
		idNums[i] = createID();
		//id为主键	
		Json::Value inBookInfo;
		inBookInfo["ISBN"] = _ISBN;
		inBookInfo["borrowerId"] = "";
		inBookInfo["lock"] = 0;
		inBookInfo["hasBorrowedNum"] = 0;
		inBookInfo["isBorrowed"] = 0;
		inBookInfo["startBorrowTime"] = "";
		inBookInfo["shouldReturnTime"] = "";
		string testBookInfo = inBookInfo.toStyledString(); 
		/*
			以id为主键插入，testBookInfo
		*/
	}
	return 1;
}

/*
	#7
	函数名称：删除书籍
	传入参数：书籍的id
	返回值：删除book（id一定存在，是从查询结果导入的 0:正在被操作lock等原因失败 1：成功 2：书正在借阅中
*/
int deleteBook(std::string _id){
	//根据id删除
	if(isOK) {
		return 1;
	} else {
		return 0;
	}
}

/*
	#8
	函数名称：查找借阅者基本信息
	传入参数：人物的id，name等系列需要得到的引用信息
	返回值：成功返回1，失败返回0
*/
int searchPeople(std::string id, std::string &name, int &age, char &gender, int &money){
	//通过id查找之后得到s_people
	//解析过程
	Json::Reader reader;
	Json::Value value;
	string s_people = NULL;
	bool isOK = reader.parse(s_people, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	name = value["name"].asString();
	age = value["age"].asInt();
	gender = value["gender"].asInt();
	money = value["money"].asInt();
	return 1;
}

/*
	#9
	函数名称：修改借阅者基本信息
	传入参数：人物的id，修改后的值
	返回值：根据ID找到对应借阅者，修改其基本信息为(name_、age_、gender_) 0：失败 1：成功
*/
int modifyPeople(std::string id, std::string name_, int age_ , char gender_){
	Json::Value in;
	in["name"] = name_;
	in["age"] = age_;
	in["gender"] = gender_;
	string test = in.toStyledString();
	//以id为主键，上传这个test
	return 1;
}

/*
	#10
	函数名称：查看历史借阅
	传入参数：人物的id，人物历史借阅的书籍
	返回值：0：失败 1：成功
*/
int searchHistory(std::string id, std::vector<std::string>&idNums) {
	//由id查找得到s_history JSON
	Json::Reader reader;
	Json::Value value;
	string s_history = NULL;
	bool isOK = reader.parse(s_history, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	int sz = value["idNums"].size();
	for(int i = 0; i < sz; ++i) {
		idNums.push_back(value["idNums"][i].asString());
	}
	return 1;
}

/*
	#11
	函数名称：查看当前借阅
	传入参数：人物的id，人物当前借阅的书籍
	返回值：0：失败 1：成功
*/
int searchCurrent(std::string id, std::vector<std::string>&idNums){
	//由id查找得到s_current JSON
	Json::Reader reader;
	Json::Value value;
	bool isOK = reader.parse(s_current, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	int sz = value["idNums"].size();
	for(int i = 0; i < sz; ++i) {
		idNums.push_back(value["idNums"][i].asString());
	}
	return 1;
}

/*
	#12
	函数名称：修改密码
	传入参数：人物的id，修改后的密码
	返回值：根据ID找到对应借阅者，修改其密码为code_ 0：失败(不存在该用户) 1：成功

*/
int changeCode(std::string id, std::string code_) {
	//根据id查找，上传更新密码
	Json::Value in;
	in["code"] = code_;
	string test = in.toStyledString();
	//以id为主键，上传这个test
}

/*
	#13
	函数名称：匹配密码
	传入参数：人物的id，输入的密码
	返回值：成功返回1，失败返回0

*/
int matchCode(std::string id, std::string code){
	//根据id查找，得到s_people
	Json::Reader reader;
	Json::Value value;
	string s_people = NULL;
	bool isOK = reader.parse(s_people, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	if(code == value["code"].asString()) {
		return 1;
	} else {
		return 0;
	}
}

/*
	#14
	函数名称：判断读者是否存在
	传入参数：人物的id
	返回值：成功返回1，失败返回0

*/
int hasId(std::string id) {
	//根据id查找
	if(isOK) {
		return 1;
	} else {
		return 0;
	}
}

/*
	#15
	函数名称：显示当前money
	传入参数：人物的id，当前的money
	返回值：成功返回1，失败返回0

*/
int getFine(std::string id, int &money){
	//根据id查找，得到s_people
	Json::Reader reader;
	Json::Value value;
	string s_people = NULL;
	bool isOK = reader.parse(s_people, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	money = value["money"].asInt();
	return 1;
}

/*
	#16
	函数名称：修改money
	传入参数：人物的id，缴纳的钱数pay，修改后得到的money
	返回值：成功返回1，失败返回0

*/
int payMoney(std::string id, int pay_, int &money){
	//根据id查找，得到s_people
	Json::Reader reader;
	Json::Value value;
	string s_people = NULL;
	bool isOK = reader.parse(s_people, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	money = value["money"].asInt();
	money -= pay_;
	value["money"] = money;
	string test = value.toStyledString();
	//根据id将test上传
}

/*
	#17
	函数名称：添加借阅者
	传入参数：人物的需要添加的信息
	返回值：返回id

*/
string addPeople(std::string name_, int age_ , char gender_, std::string code_) {
	//首先利用id生成器生成一个id
	Json::Value in;
	in["name"] = name_;
	in["age"] = age_;
	in["gender"] = gender_;
	string test = in.toStyledString();
	//以id为主键，上传这个test
	return 1;
}

/*
	#18
	函数名称：删除借阅者
	传入参数：删除这个借阅者
	返回值：成功返回1，失败返回0
*/
int deletePeople(std::string id) {
	//根据id调用语句删除即可
}

/*
	#19
	函数名称：操作借阅记录
	传入参数：借阅者的id，借阅书的id，借阅的数目
	返回值：isborrow  传1就是正在执行借书 传0就是正在执行还书
	返回0：异常失败
	返回1：成功
	返回2：如果isborrow=1进行数当前借阅是否等于10，是的话就返回2说明当前借阅已经到达最大值
*/
int addHistory(std::string borrowerId, std::string bookId, int isborrow) {
	//根据借阅者的id查询得到s_history
	if(isborrow == 0) {
		std::vector<string> idNumsH;
		std::vector<string> idNumsC;
		searchHistory(borrowerId, idNumsH);
		searchCurrent(borrowerId, idNumsC);
		vector<string>::iterator it = find(idNumsC.begin(), idNumsC.end(), bookId); //第一次查找
		while (it != idNumsC.end())  //判断是否找到
		{
			it = idNumsC.erase(it); //找到了删除  并 移动 it  指向下一个位置   
			it = find(it, idNumsC.end(), bookId); //继续查找
		}
		idNumsH.push_back(bookId);
		Json::Value in;
		for(int i = 0; i < idNumsH.size(); ++i) {
			in["idNums"].append(idNumsH[i]);
		}
		string History_in = in.toStyledString();
		//上传到history表


		Json::Value in;
		for(int i = 0; i < idNumsH.size(); ++i) {
			in["idNums"].append(idNumsC[i]);
		}
		string Current_in = in.toStyledString();
		//上传到current表
	} else if(isborrow == 1) {
		std::vector<string> idNumsH;
		std::vector<string> idNumsC;
		searchCurrent(borrowerId, idNumsC);
		if(idNumsC.size() == 10) {
			return 2;
		} 
		idNumsC.push_back(bookId);
		Json::Value in;
		for(int i = 0; i < idNumsH.size(); ++i) {
			in["idNums"].append(idNumsC[i]);
		}

		//通过书的id查到s_book
		Json::Reader reader;
		Json::Value value;
		string s_book = NULL;
		bool isOK = reader.parse(s_book, value);	//s代表数据库返回过来的string
		if (isOK == false) {
			printf("JsonStringToStructData reader parse error.\n");
			return 0;
		}
		value["borrowerId"] = borrowerId;
		string book_in = value.toStyledString();
		//更新这个图书id对应的字符串
	}
	return 1;
}

/*
	#20
	函数名称：根据ISBN添加现有书籍

	返回0：异常失败 返回1：成功
*/
int addByISBN(std::string _ISBN, int num, std::vector<std::string>&idNums){	
	//将test插入bookInfo表
	idNums.resize(num);
	for(int i = 0; i < num; ++i) {
		//自动生成id
		idNums[i] = id;
		//id为主键	
		Json::Value inBookInfo;
		inBookInfo["ISBN"] = _ISBN;
		inBookInfo["borrowerId"] = "";
		inBookInfo["lock"] = 0;
		inBookInfo["hasBorrowedNum"] = 0;
		inBookInfo["isBorrowed"] = 0;
		inBookInfo["startBorrowTime"] = "";
		inBookInfo["shouldReturnTime"] = "";
		string testBookInfo = inBookInfo.toStyledString(); 
		/*
			以id为主键插入，testBookInfo
		*/
	}
	return 1;
}

/*
	#21
	函数名称：查询ISBN是否存在
	传入参数ISBN
	返回值：返回0：异常失败 返回1：成功
*/
int exist_ISBN(std::string _ISBN) {
	//查找判断是否存在
}

/*
	#22
	函数名称：根据书id查阅书的的借阅者id
	传入参数：书id，借阅者id（引用）
	返回值：0没有借阅者，1成功
*/
int getBorrowerID(std::string _id, std::string &_borrowerID) {
	//查找得到s_book
	Json::Reader reader;
	Json::Value value;
	string s_book = NULL;
	bool isOK = reader.parse(s_book, value);	//s代表数据库返回过来的string
	if (isOK == false) {
		printf("JsonStringToStructData reader parse error.\n");
		return 0;
	}
	_borrowerID = value["borrowerId"].asString(); 
	return 1;
}
