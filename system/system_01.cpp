#include <iostream>
#include <string>


            
    
int main(){
    const std::string fileName("a.out");
    //const std::string fileName = "| rm ./*."; //혹시나 실행할까봐 막아둠...
        //실행시키면 시스템 폭파!
        //회사에 높은 사람과 면담 가능!
    
    const std::string cmd = std::string("ls | grep ").append(fileName);
    
    if (std::string::npos != cmd.find("rm")){
        std::cout << "응 삭제는 안돼~" << std::endl;
    }

    system(cmd.c_str());

    return 0;
}