#include <iostream>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <string>

using namespace std;

int main(){

    std::cout << ">>> The SolidWorks add-on has been launched." << std::endl;
    char fileName[] = "VariablesTree.txt";
    char buff[70];
    std::cout << ">>> Read file \"" << fileName << "\": ";
    ifstream data(fileName);
    if (!data)
    {
        // то выводим сообщение об ошибке и выполняем функцию exit()
        cerr << ">>> Uh oh, file could not be opened for writing!" << endl;
        exit(1);
    }
    else{
        std::cout << "correct" << std::endl;
    }
    std::string *consoleLine = new std::string;

    // the main application cycle

    while(true){
    std::cout << ">>> ";
    getline(cin, *consoleLine);

    if (*consoleLine == "close"){
       data.close();
       break;
    }
//    if (*consoleLine == "content"){
//        std::cout << data;
//    }
    if (*consoleLine == "journal"){
        data.close();
        system("D:\\mainData.txt");
        break;
    }
    else{
        std::cout << ">>> incorrect command" << std::endl;
    }

    consoleLine->clear();

    }
    delete consoleLine;
    std::cout << ">>> Console close. Press any key." << std::endl;
    return 0;
}
