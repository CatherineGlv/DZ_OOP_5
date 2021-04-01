#include <iostream>


template <class T>
class Pair
{
private:
	T m_a;
	T m_b;

public:
	Pair(const T& a, const T& b) : m_a(a), m_b(b)
	{
	}

	T& first() { 
		return m_a; 
	}
	
	const T& first() const { 
		return m_a; 
	}
	
	T& second() { 
		return m_b; 
	}
	
	const T& second() const { 
		return m_b; 
	}
};

int main()
{
	Pair<int> p1(6, 9);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	return 0;
}