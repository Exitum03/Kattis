#include <iostream>
#include <string>

int main(){
	std::string jon, doc;
	std::getline(std::cin, jon);
	std::getline(std::cin, doc);

	if (jon.length() >= doc.length()) std::cout << "go\n";
	else std::cout << "no\n";

	return 0;	
}
