//
//  main.cpp
//  Hello World
//
//  Created by Administrator on 9/19/18.
//  Copyright © 2018 Allen. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Starting read.\n\n";
    std::ifstream fileReader;
    fileReader.open("TestMessage.txt"); //In the Debug folder from right clicking Hello World and show in finder of the of the PRODUCTS folder.
    std::string outPut;
    std::vector<std::string> outPutVec;
    while(fileReader >> outPut) {
        outPutVec.push_back(outPut);
    }
    for (int i = outPutVec.size(); i--; i >=0) {
        std::cout << outPutVec[i] << std::endl;
    }
    
    std::cout << "\n´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶¶¶¶¶¶……..\n´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´¶¶……\n´´´´´´¶¶¶¶¶´´´´´´´¶¶´´´´´´´´´´´´´´¶¶……….\n´´´´´¶´´´´´¶´´´´¶¶´´´´´¶¶´´´´¶¶´´´´´¶¶…………..\n´´´´´¶´´´´´¶´´´¶¶´´´´´´¶¶´´´´¶¶´´´´´´´¶¶…..\n´´´´´¶´´´´¶´´¶¶´´´´´´´´¶¶´´´´¶¶´´´´´´´´¶¶…..\n´´´´´´¶´´´¶´´´¶´´´´´´´´´´´´´´´´´´´´´´´´´¶¶….\n´´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´´´´´´´´´¶¶….\n´´´¶´´´´´´´´´´´´¶´¶¶´´´´´´´´´´´´´¶¶´´´´´¶¶….\n´´¶¶´´´´´´´´´´´´¶´´¶¶´´´´´´´´´´´´¶¶´´´´´¶¶….\n´¶¶´´´¶¶¶¶¶¶¶¶¶¶¶´´´´¶¶´´´´´´´´¶¶´´´´´´´¶¶…\n´¶´´´´´´´´´´´´´´´¶´´´´´¶¶¶¶¶¶¶´´´´´´´´´¶¶….\n´¶¶´´´´´´´´´´´´´´¶´´´´´´´´´´´´´´´´´´´´¶¶…..\n´´¶´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´´´´¶¶….\n´´¶¶´´´´´´´´´´´¶´´¶¶´´´´´´´´´´´´´´´´¶¶….\n´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´¶¶´´´´´´´´´´´´¶¶…..\n´´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶¶¶¶¶¶¶¶…….\nYou will get the chocolate someday!\n";
    return 42;
}
