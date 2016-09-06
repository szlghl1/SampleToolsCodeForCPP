#include <random>
int main(int argc, char const *argv[])
{
	//set a seed
	static std::default_random_engine dre(static_cast<int>(time(0)));
	//you can choose different distribution and range here
	static std::uniform_real_distribution<float> urd(0, bound.X);
	auto randomNum = urd(dre);
	return 0;
}