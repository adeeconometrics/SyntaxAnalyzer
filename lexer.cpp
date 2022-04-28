// lexer

#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>

using std::string;
using std::fstream;
using std::cout;
using std::unordered_map;
using std::vector;

class FileReader {
	fstream m_handler;
	
	FileReader() = delete;
	FileReader(const FileReader&) = delete;
	FileReader(FileReader&&) = delete;
	
public:
	FileReader(const string& fname) {
		m_handler.open(fname, fstream::in); // open file for reading
	}

	~FileReader(){
		m_handler.close(); // close file handler
	}
	
	auto content() -> string {
		return {std::istreambuf_iterator<char>(m_handler), 
				std::istreambuf_iterator<char>()};
	}
};


enum struct TokenClass:short int {
	// punctuators
	LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
	COMMA, DOT, MINUS, PLUS, SEMI_COLON, SLASH, STAR,
	// relational operators
	BANG, BANG_EQUAL, EQUAL, EQUAL_EQUAL, GREATER,
	GREATER_EQUAL, LESS, LESS_EQUAL,
	// string literals
	IDENTIFIER, STRING, NUMBER,
	// cpp standard keywords
	AND, AUTO, BOOL, BREAK, CASE, CATCH,
	CHAR, CLASS, CONST, CONSTEVAL, CONSTEXPR,
	CONTINUE, DECLTYPE, DEFAULT, DELETE, DO, 
	DOUBLE, ELSE, ENUM, EXPLICIT, EXPORT, EXTERN,
	FALSE, FLOAT, FOR, FRIEND, GOTO, IF, INLINE,
	INT, LONG, MUTABLE, NAMESPACE, NEW, NOEXCEPT, 
	NOT, NULLPTR, OR, PRIVATE, PROTECTED, PUBLIC,
	RETURN, SHORT, SIGNED, SIZEOF, STATIC, 
	STATIC_ASSERT, STATIC_CAST, STRUCT, SWITCH, 
	TEMPLATE, THIS, THROW, TRUE, TRY, TYPEDEF, TYPEID, 
	TYPENAME, UNION, UNSIGNED, USING, VIRTUAL, VOID, 
	VOLATILE, WHILE
};

class Token {
	string m_lexeme;
	string m_literal;
	TokenType m_type;
	int m_line;

public:
	Token(TokenType type, const string& lexeme, 
		const string& literal, int line);
	
	auto to_string() const -> string;
	
};

class ErrorHandler {
private:
	vector<ErrorInfo> error_list;
	
public:
	struct ErrorInfo {
		int line{};
		string where;
		string message;
	};
	
	ErrorHandler() = default;
	
	auto report() const -> void;
	auto add(int line, const string& where, const string& msg) -> void;
	auto clear() -> void;
	
	bool has_found_error{};
};

class Scanner { 
private:

	unordered_map<string, TokenType> m_keywords;
	vector<Token> m_tokens;
	string source;
	size_t m_start{}, m_current{}, m_line{};
	ErrorHandler& error_handler;
	
public:
	Scanner(const string& source, ErrorHandler& error);
	
	auto is_at_end() -> bool;
	auto is_digit() -> bool;
	auto is_alpha() -> bool; 
	auto is_alphanum() -> bool;
	auto is_keyword() -> bool; 
	auto is_literal() -> bool; 
	
	auto get_tokens() -> vector<Token>;
	                            
private:
	auto peek() const -> char;
	auto peek_next() const -> char;
	auto string() -> void;
	auto number() -> void;
	auto identifier() -> void;
	auto add_token(TokenType) -> void;
	auto add_token(TokenType type, const string& token) -> void;
	auto scan_and_add_token() -> void;
	auto advance_and_get_char() -> char;
};

auto main() -> int {
	FileReader fr{"Sample.txt"};
	cout << fr.content() << '\n';
}
