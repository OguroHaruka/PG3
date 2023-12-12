#pragma once
template<typename T>
class Compare
{
public:

	Compare(T x, T y) :x(x), y(y){}

	T Min();
private:
	T x;
	T y;
};

template<typename T>
inline T Compare<T>::Min()
{
	if (x < y) {
		return x;
	}
	else { return y; }
}
