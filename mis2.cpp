#include <iostream>
#include <cstdlib>
#include <ctime>


int main()

{
 std::string sm;
 int level=1, select, random_select;
 int check_menu=1, check=1;
 int number, win, count;

// srand(time(NULL));

 do  //menu
 {
   std::cout<<"[Level 1] Woul'd like to play? [p] - play, [l]- select level, [q] - quit.'";
   std::cin>>sm;
 if (sm=="l")
 {
   std::cout<<"select level from 1 to 10:";
   std::cin>>level;
 }
 else
 if (sm=="q")
   check_menu=0;
 if (sm=="p")
 {
  win=0;
 // srand(time());
  random_select=rand() % level*10;
  count=0;
  std::cout<<"Random select:"<<random_select<<std::endl;
  
  do
  {
   std::cout<<"try#:"<<count<<std::endl;
   std::cout<<"enter a number from 0 to "<<level*10-1<<":";
   std::cin>>number;
   if (random_select==number)
   {
     std::cout<<"You win!"<<std::endl;
     win=1; 
   }
   else 
   if (random_select>number)
    std::cout<<"Greater!"<<std::endl;
  else
   std::cout<<"Less"<<std::endl;
   count++;
 
 std::cout<<"win="<<win<<" count="<<count<<std::endl;

  } while (win==0&&count<10);
 }

 }
 while (check_menu==1);

}
