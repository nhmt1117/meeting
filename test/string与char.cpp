#include <iostream>
#include <string>
#include <cstring>
// #include <string_view>
using namespace std;
int main()
{
	//char测试 
	{
		cout << "char测试" << endl;
		char ch1[] {'a', 'b', 'c', 'd'};
		char ch2[5] {'a', 'b', 'c', 'd'};
		char ch3[5] {};
		char* ch4 {ch1};
		char ch5[] {"abcd"};
		char ch6[6] {"abcd"} ;
		
		cout << sizeof(ch1) << ' ' << sizeof(ch2) << ' ' << sizeof(ch3) << ' ' << sizeof(ch4) << ' ' << sizeof(ch5) << ' ' << sizeof(ch6) << ' ' << endl;
		//4 5 5 8 5 6
		cout << sizeof(ch1[0]) << ' ' << sizeof(&ch1) << ' ' << sizeof(&ch1[0]) << ' ' << endl;
		//1 8 8
		cout << strlen(ch1) << ' ' << strlen(&ch1[0])   << ' ' << strlen(ch2) << ' ' << strlen(&ch2[2])   << ' ' << strlen(ch3) << ' ' << strlen(ch6)   << ' ' << endl;
		//4 4 4 2 0 4
		cout << ch1 << ' ' << ch1[0] << ' ' << ch5[0] << ' ' << &ch4[0] << ' ' << &ch1 << ' ' << &ch1[0] << ' ' << &ch1[2] << ' ' << endl;
		//abcd a a abcd 0x7ffdd0 abcd cd
		//cout << ch1.size() << ' ' << endl;  报错 
		//注意：char*不能使用.size() 
	}
	//string测试
	{
		cout << "string测试" << endl;
		string str1 {'a', 'b', 'c', 'd'};
		string str2 {"abcd"};
		string str3[2]{"ab", "cd"};
		
		cout << str1 << ' ' << &str1 << ' ' << &str1[0] << ' ' << str3 << ' ' << &str3 << ' ' << str3[0] << ' '<< ' ' << &str3[0] << ' ' << &str3[1] << ' ' << endl;
		//abcd 0x70fd80 abcd 0x70fd60 0x70fd60 ab  0x70fd60 0x70fd68
		cout << sizeof(str1) << ' ' << sizeof(str1[0]) << ' ' << sizeof(&str1) << ' ' << sizeof(str3) << ' ' << sizeof(&str3) << ' ' << sizeof(str3[0]) << ' ' << sizeof(str3[1]) << ' ' << sizeof(&str3[0]) << ' ' << endl;
		//8 1 8 16 8 8 8 8
	} 
	
	//char* / char[] 转 string
	//1. 朴实无华
	{
		cout << "char* 转 string" << endl;
		char ch[] {'a', 'b', 'c', 'd'};
		char *ch_p {ch};
		
		string str1{ch};
		string str2{ch_p};
		
		cout << str1 << ' ' << str2 << ' ' << str1[0] << ' ' << &str1[0] << ' ' << &str1[2] << ' ' << endl;
		//abcd abcd a abcd cd
		cout << sizeof(str1) << ' ' << sizeof(str2) << ' ' << sizeof(str1[0]) << ' ' << sizeof(&str1[0]) << ' ' << sizeof(&str1[2]) << ' ' << endl;
		//8 8 1 8 8
	}
		
	//string 转 char* 
	//1. data() + const_cast<type>(expression)
	{
		cout << "string 转 char* _1" << endl;
		string str {"abcd"};
	  	char *ch {const_cast<char*>(str.data())};
	  	
	  	cout << ch << endl;
	  	//abcd
	}
	//2. c_str() + const_cast<type>(expression) 类似1 
	{
		cout << "string 转 char* _2" << endl;
		string str {"abcd"};
	  	char *ch {const_cast<char*>(str.c_str())};
	  	
	  	cout << ch << endl;
	  	//abcd
	}
	//3. copy()
	{
		cout << "string 转 char* _3" << endl;
		string str {"abcd"};
	  	char *ch {new char(str.size() + 1)};
	  	str.copy(ch, str.size(), 0);
	  	
	  	cout << ch << ' ' << endl;
	  	//abcd
	}
	//string 转 char[]
	//1. for() / while()
	{
		cout << "string 转 char[] _1" << endl;
		string str {"abcd"};
		char ch1[10];
		for(size_t i = 0; i < str.size(); i++){
			ch1[i] = str[i];
		}
		char ch2[10];
		size_t i = 0;
		while(i < str.size()){
			ch2[i] = str[i];
			i++;
		}
		cout << ch1 << ' ' << ch2 << ' ' << endl;
		//abcd abcd
	}
	//2. copy()
	{
		cout << "string 转 char[] _2" << endl;
		string str {"abcd"};
		char ch[10];
		str.copy(ch, str.size(), 0);
		ch[str.size()] = '\0';
		cout << ch << ' ' << strlen(ch) << ' ' << sizeof(ch) << ' ' << endl;
		//abcd 4 10
	}
    return 0;
}
