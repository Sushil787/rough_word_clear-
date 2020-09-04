#include<iostream>
#include<string>
std::string get_last_word(const std::string& str);
int main(){
    std::string word;
    std::cout<<"Hi there!! \n";
    getline(std::cin,word);
    std::string rough = get_last_word(word);
    if (rough == "hell"){
         word.replace(word.find("hell"),4,"####");
        }
    else if(rough =="fuck"){
         word.replace(word.find("fuck"),4,"####");
    }
        
    else if(rough == "ass"){
         word.replace(word.find("ass"),4,"###");
    }
    else if (rough == "booty"){
         word.replace(word.find("booty"),5,"#####");
    }
    else if (rough == "sexy"){
        word.replace(word.find("sexy"),4,"####");
    }
    else {
         word.replace(word.find("bitch"),5,"#####");
         }
   

    std::cout<<word<<std::endl;
    return 0;
}



std::string get_last_word(const std::string& str)
{
    if (str.length() == 0)
    {
        std::cerr << "No string\n";
        return 0;
    }

    int len = str.length();
    int i = len - 1;
    while (i >= 0 && str[i] != ' ')
    {
        i--;
    }
    std::string last_word;
    for (int j = i + 1; j < len; j++)
    {
        last_word += str[j];
    }
    return last_word;
}
