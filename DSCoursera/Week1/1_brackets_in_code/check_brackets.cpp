#include <iostream>
#include <stack>
#include <string>

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main() {
    std::string text;
    getline(std::cin, text);
    
    std::stack <Bracket> opening_brackets_stack;

    bool f=true;

    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if(text.length() < 2) {
            std::cout << "1";
            f=false;
            break;
        }

        if (next == '(' || next == '[' || next == '{') {
            opening_brackets_stack.push(Bracket(next, position+1));
        }

        if (next == ')' || next == ']' || next == '}') {
            if(!opening_brackets_stack.top().Matchc(next)) {
                std::cout << position+1;
                f=false;
                break;
            } else {
                opening_brackets_stack.pop();
            }
        }
    }

    if(f) {
        std::cout << "Success";
    }

    return 0;
}
