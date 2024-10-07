#include <iostream>
#include <string>
#include <regex>
using namespace std;
int calculateCyclomaticComplexity(const string& code) {
    regex decisionPointRegex(R"(if|else|for|while|case|default|do|return|\|\||&&|\?)");
    auto decisionPoints =sregex_iterator(code.begin(), code.end(), decisionPointRegex);
    int complexity = distance(decisionPoints,sregex_iterator());
    // The final complexity is the number of decision points plus 1
    return complexity + 1;
}
int main() {
    string code = R"(
        void exampleFunction(int x) {
            if (x > 0) {
                // Some code
            }
            if(a>b){
                //
            }
            for (int i = 0; i < 10; ++i) {
                // Another code block
            }
            while{
                //
            }
        }
    )";
    int complexity = calculateCyclomaticComplexity(code);
    cout << "Cyclomatic Complexity: " << complexity <<endl;
    return 0;
}