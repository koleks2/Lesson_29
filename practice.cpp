//#include <iostream>
//#include <string>
//#include <map>
//
//int main() {
//    std::map<std::string, int> wordCount;
//    std::string word;
//
//    std::cout << "Enter words press Ctrl+Z and Enter to finish: " << std::endl;
//
//    while (std::cin >> word) {
//        for (char& c : word) {
//            c = tolower(c);
//        }
//        wordCount[word]++;
//    }
//
//    std::cout << "\n--- Word Frequency ---\n";
//
//    std::string mostFrequentWord = "";
//    int maxCount = 0;
//
//    for (const auto& [w, count] : wordCount) {
//        std::cout << w << " -> " << count << std::endl;
//
//        if (count > maxCount) {
//            maxCount = count;
//            mostFrequentWord = w;
//        }
//    }
//
//    std::cout << "\nMost frequent word: \"" << mostFrequentWord << "\" (" << maxCount << " times)\n";
//}