#include <iostream>
using namespace std;

#define ERROR_MSG(code, ...) ErrorMessage(code, #__VA_ARGS__)

void ErrorMessage(int code, const char *message) {
  cout << "Error code " << code << ": " << message << endl;
}

#define ERR_FILE_NOT_FOUND 1
#define ERR_INVALID_INPUT 2
#define ERR_OUT_OF_RANGE 3

#define ENABLE_FILE_ERROR
#define ENABLE_INPUT_ERROR

int main() {
#ifdef ENABLE_FILE_ERROR
  ERROR_MSG(ERR_FILE_NOT_FOUND, File, not, found);
#endif

#ifdef ENABLE_INPUT_ERROR
  ERROR_MSG(ERR_INVALID_INPUT, Invalid, input, detected);
#endif

#ifdef ENABLE_RANGE_ERROR
  ERROR_MSG(ERR_OUT_OF_RANGE, Value, out, of, range);
#endif

  return 0;
}
