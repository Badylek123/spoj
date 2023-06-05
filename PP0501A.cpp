#include <iostream>

int nwd(int a, int b) // algorytm euklidesa
{
    if (a<b)          return nwd(a, b-a);
    else if (a>b)     return nwd(a-b, b);
    return a;
}
int main()
{
	int t;
    int x,y;
    std::cin>>t;
    for(int i=0; i<t; i++){
    	std::cin>>x>>y;
    	std::cout<<nwd(x,y)<<'\n';
    }
    return 0;
}
