#include<iostream>
#include<fstream>
#include<string>
#include<streambuf>

class Json
{
	std::string name;
	int age;
	std::string job;
public:
	Json(){
		this -> name = "Mik";
		this -> age = 18;
		this -> job = "deweloper";
	}
	Json(std::string name,int age,std::string job){
		this -> name = name;
		this -> age = age;
		this -> job = job;
	}
	~Json(){
	}
	void print(){
		std::cout<<"name -> "<< this -> name <<std::endl;
		std::cout<<"age -> "<< this -> age <<std::endl;
		std::cout<<"job -> "<< this -> job <<std::endl;
	}
	void set_name(std::string name){
		this -> name = name;
	}
	std::string get_name(){
		return this -> name;
	}
	void set_age(int age){
		this -> age = age;
	}
	int get_age(){
		return this -> age;
	}
	void set_job(std::string){
		this -> job = job;
	}
	std::string get_job(){
		return this -> job;
	}
	
};
std::string jsonobject_classobject(std::string obj,Json& objarr);
std::string get_object(std::string myjson);
void delete_object(std::string& json);
int string_cast_int(std::string value);

std::string get_object(std::string myjson){
    std::string newobject = "";
	for(int i = 0; i < myjson.length();++i){
		if(myjson[i] == '{'){
			for(int j = i + 1; j < myjson.length();++j){
				if(myjson[j] == '}'){
					return newobject;
				}else if(myjson[j] != ' ' && myjson[j] != '\n' && myjson[j] != '"'){
					newobject = newobject + myjson[j];
				}
			}
		}
	}
}
void delete_object(std::string& json){
	std::string newjson = "[";
	for(int i = 0; i < json.length();++i){
		if(json[i] == '}'){
			for(int j = i + 2; j < json.length();++j){
				newjson = newjson + json[j];
			}
			json = newjson;
			return;
		}
	}	
}
int string_cast_int(std::string text){
	int tiv = text[0] - '0';
	for(int i = 1; i < text.length();++i){
		tiv = (tiv * 10) + (text[i] - '0');
	}
	return tiv;
}
std::string jsonobject_classobject(std::string obj,Json& objarr){
	std::string rows[3] = {"","",""};
	int index = 0;
	for(int i = 0 ; i < 3;++i){
		for(int j = index; j < obj.length();++j){
			if(obj[j] != ','){
				rows[i] = rows[i] + obj[j];
			}else{
				index = index + 1;
				break;
			}
		}
	int index_tox = 0;
	std::string key = "";
	std::string value = "";
	while(rows[i][index_tox] != ':'){
		key = key + rows[i][index_tox];
		++index_tox;
	}
	++index_tox;
	while(index_tox < rows[i].length()){
		value = value + rows[i][index_tox];
	}
	std::cout<<key<<std::endl;
	if(key == "name"){
		objarr.set_name(value);
	}else if(key == "age"){
		objarr.set_age(string_cast_int(value));
	}else if(key == "job"){
		objarr.set_job(value);
	}
	}
}
int main(){
	std::ifstream t("myjson.json");
    std::string json((std::istreambuf_iterator<char>(t)),
    std::istreambuf_iterator<char>());
	int count_object = 0;
	for(int i = 0; i < json.length();++i){
		if(json[i] == '{'){
			++count_object;
		}
	}

	Json* objectarr = new Json[count_object];
	for(int i = 0; i < 3; ++i){
		jsonobject_classobject(get_object(json),objectarr[i]);
		delete_object(json);
	}

	for(int i = 0; i < 3; ++i){
		objectarr[i].print();
		delete []objectarr;
	}

	return 0;
}
