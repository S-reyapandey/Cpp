#include<iostream>
using namespace std;
/*
Student --> Test
Srudent -> sports
Test --> result
Sports --> result
*/

class Student{
      protected :
         int roll_no;
      public: 
         void set_number(int a){
            roll_no = a;
         }
         void print_number(void){
            cout<<"Your roll no. is "<<roll_no<<endl;
         }
};

// virtual public Student or public virtual Student both are correct

class Test : virtual public Student{
     protected:
         float maths, physics;
     public:
         void set_marks(float m1, float m2)
         {
            maths = m1;
            physics = m2;
         }
         void print_marks(void){
            cout<<"Your result is here: "<<endl<<"Maths: "<<maths<<endl<<"Physics: "<<physics<<endl;
         }
};

class Sports : virtual public Student{
      protected: 
          float score;
      public : 
          void set_score(float sc){
            score = sc;
          }
          void print_score(void){
            cout<<"Your Pt score is "<<score<<endl;
          }
};

class Result : public Test, public Sports{
       private:
            float total;
       public:
            void display(void){
                total = maths + physics + score;
                print_number();
                print_marks();
                print_score();
                cout<<"Your total score is: "<<total<<endl;
            }
          
};

int main()
{
    Result shreya;
    shreya.set_number(1410);
    shreya.set_marks(82,73);
    shreya.set_score(8);
    shreya.display();
    return 0;
}