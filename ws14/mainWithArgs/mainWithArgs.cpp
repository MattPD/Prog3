#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>

int main(int argc, char *argv[]){
	std::copy(argv+1, argv+argc,
	     std::ostream_iterator<std::string>{std::cout,"-"});
}
