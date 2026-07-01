#include <stdexcept>

using namespace std;
class Baseball {
public:
	void guess(string guessnumber) {
		ExceptionCase(guessnumber);
	}

	void ExceptionCase(std::string& guessnumber)
	{
		if (guessnumber.length() != 3) {
			throw length_error("Input length must be 3");
		}

		for (char c : guessnumber) {
			if (c >= '0' && c <= '9') {
				continue;
			}
			throw invalid_argument("Input must be a number");
		}

		if (IsDuplicatedNumber(guessnumber)) {
			throw invalid_argument("Input must not have duplicate digits");
		}
	}

	bool IsDuplicatedNumber(string guessnumber) {
		return guessnumber[0] == guessnumber[1] || guessnumber[0] == guessnumber[2] || guessnumber[1] == guessnumber[2];
	}
};