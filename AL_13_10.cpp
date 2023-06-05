#include <iostream>
#include <string>

std::string check(std::string &A, std::string &B) {
	if(A.length()<B.length()) {
		return "Nie";
	}
	auto i_B=B.begin();
	for(auto i_A=A.begin(); i_A!=A.end(); ++i_A){
		if(*i_A==*i_B) {
			++i_B;
		}
	}
	return (i_B==B.end())?"Tak":"Nie";
}

int main() {
	int t;
	std::cin>>t;
	std::string X,Y;
	for (int i=0; i<t; i++) {
		std::cin>>X>>Y;
		std::cout<<check(X,Y)<<'\n';
	}
	return 0;
}
