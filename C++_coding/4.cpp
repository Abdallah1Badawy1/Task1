#include "task.h"

int main() {
    string sentence;
    cout << " sentence : ";
    getline(cin, sentence);
    int wordCount = fourthq(sentence);
    cout << " words in the sentence: " << wordCount << endl;
    return (0);
}



/**
 * @brief Counts the number of words in a given sentence.
 * 
 * The function takes a string as input and counts the number of words in it.
 * It considers a word to be any sequence of characters separated by spaces.
 * 
 * @param sentence The input sentence in string format.
 * @return The number of words in the sentence.
 */

int fourthq(const string& sentence)
{
    int Count = 0;
    bool Word = 0;
	for (char ch : sentence) {
        word = (ch == ' ' || ch == '\n') ? false : true;
        count += (word && !(ch == ' ' || ch == '\n')) ? 0 : (word ? 1 : 0);
    }

    count += word ? 1 : 0;
    return count;

}
