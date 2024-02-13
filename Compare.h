#pragma once
template<typename T1,typename T2>
class Compare
{
public:

	Compare(T1 x, T2 y) :x(x), y(y){}

	T1 Min() {

		if (x < y) {
			return x;
		}
		else { return y; }
	}
private:
	T1 x;
	T2 y;
};
