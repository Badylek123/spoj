#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Point {
	std::string name;
	int x;
	int y;
};
bool compare(const Point &p1, const Point &p2) {
    int distance1 = p1.x * p1.x + p1.y * p1.y;
    int distance2 = p2.x * p2.x + p2.y * p2.y;
    return distance1 < distance2;
}

int main() {
	int tests;
	std::cin>>tests;
	std::vector<Point> points;
	points.reserve(1000);
	int pointCount;
	for(int i=0; i<tests; i++) {
		std::cin>>pointCount;
		std::vector<Point> points(pointCount);
		for(int j=0; j<pointCount; j++){
			std::cin>>points[j].name>>points[j].x>>points[j].y;
		}
		std::sort(points.begin(), points.end(), compare);
		for(int j=0; j<pointCount; j++) {
			std::cout<<points[j].name<<" "<<points[j].x<<" "<<points[j].y<<"\n";
		}
		std::cout<<'\n';
	}
	return 0;
}
