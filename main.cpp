#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//grid width is 31
//grid length is 323

int main()
{
  ifstream inputObject1("input.txt");

  string grid[323];

  for(int i=0; i<323; ++i)
  {
    inputObject1>>grid[i];
  }

  int y=0; //y position
  int x=0; //x position
  long treeHit1=0; //# of trees hit for the different slopes
  long treeHit2=0;
  long treeHit3=0;
  long treeHit4=0;
  long treeHit5=0;
  long part2Ans=0;


  //we start at position [0][0]

  //part 1
  while(y<323) //right 3, down 1
  {
    if(grid[y][x]=='#')
    {
      ++treeHit1;
    }
    for(int i=0; i<3; ++i)
    {
      ++x; //go right on the grid
      x=x%31; //keeps x in the range of 0-30
    }
    ++y; //go down the grid once
  }
  cout << treeHit1 << endl;

  //part 2
  x=0;
  y=0;
  while(y<323) //right 1, down 1
  {
    if(grid[y][x]=='#')
    {
      ++treeHit2;
    }
    for(int i=0; i<1; ++i)
    {
      ++x; //go right on the grid
      x=x%31; //keeps x in the range of 0-30
    }
    ++y; //go down the grid once
  }

  x=0;
  y=0;
  while(y<323) //right 7, down1
  {
    if(grid[y][x]=='#')
    {
      ++treeHit3;
    }
    for(int i=0; i<7; ++i)
    {
      ++x; //go right on the grid
      x=x%31; //keeps x in the range of 0-30
    }
    ++y; //go down the grid once
  }

  x=0;
  y=0;
  while(y<323)
  {
    if(grid[y][x]=='#')
    {
      ++treeHit4;
    }
    for(int i=0; i<1; ++i)
    {
      ++x; //go right on the grid
      x=x%31; //keeps x in the range of 0-30
    }
    y+=2; //go down the grid twice
  }

  x=0;
  y=0;
  while(y<323) //right 5, down1
  {
    if(grid[y][x]=='#')
    {
      ++treeHit5;
    }
    for(int i=0; i<5; ++i)
    {
      ++x; //go right on the grid
      x=x%31; //keeps x in the range of 0-30
    }
    ++y; //go down the grid once
  }

  part2Ans=treeHit1*treeHit2*treeHit3*treeHit4;

  cout << part2Ans << endl;
  cout << treeHit5 << endl; //Size got too large, did physical multiplication for last step

  return 0;
}