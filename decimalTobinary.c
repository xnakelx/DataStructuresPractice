# DataStructuresPractice#include <stdio.h>


void decimalTobinary(int decimal);
int main(int argc, char* argv[]){
  decimalTobinary(54);
  return 0;
}
void decimalTobinary(int decimal){
  if(decimal < 0)return;
  if(decimal == 0)return;
  decimalTobinary(decimal/2);
  printf("%d",decimal%2);
  return;
}
		   
