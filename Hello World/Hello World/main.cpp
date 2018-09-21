//


//   First upload test to github.
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
    while(!fileReader.eof()) {
        getline(fileReader, outPut);
        outPutVec.push_back(outPut);
    }
    
    std::ofstream toTheFuture;
    toTheFuture.open("maybeCSV.csv");
    toTheFuture << "1,1,2,3,5,8\n3.14,2.72,1.4\nData,Magic,Lies";
    
    //toTheFuture.open("plsWork.txt");
    //for (int i = outPutVec.size(); i--; i >=0) {
    //    toTheFuture << outPutVec[i] << std::endl;
    //    toTheFuture << "´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´\n";
    //}
    
    std::cout << "\n´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶¶¶¶¶¶……..\n´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´¶¶……\n´´´´´´¶¶¶¶¶´´´´´´´¶¶´´´´´´´´´´´´´´¶¶……….\n´´´´´¶´´´´´¶´´´´¶¶´´´´´¶¶´´´´¶¶´´´´´¶¶…………..\n´´´´´¶´´´´´¶´´´¶¶´´´´´´¶¶´´´´¶¶´´´´´´´¶¶…..\n´´´´´¶´´´´¶´´¶¶´´´´´´´´¶¶´´´´¶¶´´´´´´´´¶¶…..\n´´´´´´¶´´´¶´´´¶´´´´´´´´´´´´´´´´´´´´´´´´´¶¶….\n´´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´´´´´´´´´¶¶….\n´´´¶´´´´´´´´´´´´¶´¶¶´´´´´´´´´´´´´¶¶´´´´´¶¶….\n´´¶¶´´´´´´´´´´´´¶´´¶¶´´´´´´´´´´´´¶¶´´´´´¶¶….\n´¶¶´´´¶¶¶¶¶¶¶¶¶¶¶´´´´¶¶´´´´´´´´¶¶´´´´´´´¶¶…\n´¶´´´´´´´´´´´´´´´¶´´´´´¶¶¶¶¶¶¶´´´´´´´´´¶¶….\n´¶¶´´´´´´´´´´´´´´¶´´´´´´´´´´´´´´´´´´´´¶¶…..\n´´¶´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´´´´¶¶….\n´´¶¶´´´´´´´´´´´¶´´¶¶´´´´´´´´´´´´´´´´¶¶….\n´´´¶¶¶¶¶¶¶¶¶¶¶¶´´´´´¶¶´´´´´´´´´´´´¶¶…..\n´´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶¶¶¶¶¶¶¶…….\nYou will get the chocolate someday!\n";
    return 42;
}
