#include <chrono>

int main(int argc, char const *argv[])
{
	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> diff = end - start;
	std::cout << diff.count() << "seconds passed." << std::endl;
	return 0;
}