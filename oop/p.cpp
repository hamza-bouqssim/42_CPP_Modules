#include <iostream>
using std::string;
class human{
    private:
            string Name;
            string Gender;
            int Age;
    public:
        void SetName(string name){
            Name = name;
        }
        string GetName(){
            return Name;
        }
        void SetGender(string gender){
            Gender = gender;
        }
        string GetGender(){
            return Gender;
        }
        void SetAge(int age){
            Age = age;
        }
        int GetAge(){
            return Age;
        }
            
        void PresenteYourSelf(){
            std::cout<< Name<< std::endl;
            std::cout<< Gender<< std::endl;
            std::cout<< Age << " Years Old" << std::endl;
        }
        human(string name, string gender, int age){
            Name = name;
            Gender = gender;
            Age = age;
        }
};
int main()
{
    human h1 = human("Hamza", "Male", 22);
    h1.PresenteYourSelf();
    h1.SetName("Jugurtha");
    std::cout<< h1.GetName() << " is a "<< h1.GetGender() << " and he is " << h1.GetAge() << "Years Old" << std::endl;
}