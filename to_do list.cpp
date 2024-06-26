#include <iostream>
#include <string>
#include <vector>
#include <array>
#include<limits>

class TO_do_List
{
public:
    std::vector<std::string> List;
    int si_ze;
    int list_num;
    void addList()
    {
    std::cout << "How many Tasks Do You Want To Add To List: ";
    std::cin >> si_ze;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    List.resize(si_ze); 

    for (int i = 0; i < si_ze; i++)
    {
        std::cout << "Enter List [" << i << "] : ";
        std::getline(std::cin, List[i]);
    }
    }
    void view_List()
    {
        std::cout << "To Do List :" << std::endl;
        for (size_t i = 0; i < si_ze; i++)
        {
            std::cout << "| " << i + 1 << ". " << List[i] << " |" << std::endl;
        }
    }
    void Mark_list()
    {
        std::cout << "Enter List Number : ";
        std::cin >> list_num;
        if (list_num > List.size())
        {
            std::cout << "Invalid List Number !" << std::endl;
        }
        else
        {
            List[list_num - 1] += " __/";
        }
    }
    void remove_task()
    {
        std::cout << "To Delete A Task " << std::endl;
        std::cout << "Enter List Number : ";
        std::cin >> list_num;
        if (list_num > List.size())
        {
            std::cout << "Invalid List Number !" << std::endl;
        }
        else
        {
            List.erase(List.begin() + list_num);
        }
        list_num--;
        si_ze--;
    }
};

int main()
{
    TO_do_List to_do;
    int task;

    while (task != 0){
        std::cout << "_______Welcome______" << std::endl;
    std::cout << "1. Add  List! " << std::endl;
    std::cout << "2. View Lists!" << std::endl;
    std::cout << "3. Mark List!" << std::endl;
    std::cout << "4. Remove List!" << std::endl;
    std::cout << "0. Leave TO DO List "<<std::endl;
    std::cout << "Use The To Do List No: ";
    std::cin >> task;
    std::cin.ignore();

    switch (task)
    {
    case 1:
    {
        to_do.addList();
    }
    break;
    case 2:
    {
        to_do.view_List();
    }
    break;
    case 3:
    {
        to_do.Mark_list();
    }
    break;
    case 4:
    {
        to_do.remove_task();
    }
    break;
    case 0:
    {
        std::cout << "BYE!"<<std::endl;
        std::cout << "Don't forget To Do All Aour Task Today!!\n";
    }break;
    default:
        std::cout << "Invalid Input !!" << std::endl;
        break;
    }    }

    return 0;
}