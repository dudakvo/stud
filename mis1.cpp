#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{
  int random_select, select, check=0;
  std::string row;
do
{
  std::cout<<"Enter Rock, Scissors or Paper:";
  std::cin>>row;
  std::cout<<row<<std::endl;
  srand(time(NULL));
  random_select=rand() % 3;
//  std::cout<<random_select<<std::endl;
  if (row=="Rock")
   select=0;
  else
   if (row=="Scissors")
     select=1;
   if (row=="Paper")
     select=2;
   else
     select=3;
  //std::cout<<select<<std::endl;
  if((select==0&&random_select==1)||(select==1&&random_select==2)||(select==2&&random_select==0))
  {
    std::cout<<"You win!!";
    check=1;
  }
  else
  if ((select=0&&random_select==0)||(select==1&&random_select==1)||(select==2&&random_select==2))
  {
    std::cout<<"Draw Try again!";
  }	
  else
  {
    std::cout<<"Looser!";
    check=1;
  }

} while (check==0);
}
