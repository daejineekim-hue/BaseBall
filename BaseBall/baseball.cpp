#include <stdexcept>

using namespace std;
class Baseball {
public:
	void guess(string input) {
		if (input.length() != 3) {
			throw length_error("Input length must be 3");
		}
	}
};