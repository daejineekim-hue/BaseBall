#include <stdexcept>

using namespace std;
class Baseball {
public:
	void guess(string input) {
		if (input.length() != 3) {
			throw length_error("Input length must be 3");
		}

		for (char c : input) {
			if (c  < '0' || c > '9') {
				throw invalid_argument("Input must be a number");
			}
		}
	}
};