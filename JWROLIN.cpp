#include <iostream>
#include <iomanip>
#define fix(x) std::fixed<<std::setprecision(2)<<(x)

void calculate(double a, double b, double c)
{
	if(a==0) {
		if(b==c) {
			std::cout<<"NWR\n";
			return;
		} else {
			std::cout<<"BR\n";
			return;
		}
	}
	std::cout<<fix((c-b)/a)<<'\n';
}

int main()
{
	double a,b,c;
	std::cin>>a>>b>>c;
	calculate(a,b,c);
	return 0;
}
