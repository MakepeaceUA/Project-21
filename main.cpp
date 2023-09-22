#include <iostream>
using namespace std;




/* Задание 1
void Sort(int list[], int S)
{
 int i, j, l, n;
 int key, F_index, S_index;
 int res, res1, res2;
 
  for (i = 0; i < S; i++) 
 {
   if (list[i] < 0) 
   {
     F_index = i;
     res1 = list[i];
     break;
   }
 } 
  for (j = 9; j > 0; j--)
  {
    if (list[j] < 0) 
   {
     S_index = j;
     res2 = list[j];
     break;
   }
  }
 
  for (l = F_index; l <= S_index; l++) 
   {
    key = l;
    res = list[l];

    for (n = l + 1; n <= S_index; n++) 
    {
      if (list[n] > res) 
      {
       key = n;
       res = list[n];
      }
     }
      if (key != l) 
      {
        list[key] = list[l];
        list[l] = res;
      }
     }
}


int main()
{
 srand(time(NULL));
 setlocale(0,"RUS");
 
 const int size = 10;
 int arr[size];
 

 for (int i = 0; i < size; i++)
 {
 arr[i] = -20 + rand() % 40;
 cout << arr[i] << " ";
 }
 cout << "\n\n";

 Sort(arr,size);

 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }
 cout << "\n\n";
}






Задание 2
void First_Func(int list[], int S) 
{
  int j;
  for (int i = 0;i < S;i++) 
    { 
      j = rand() % S;
      
      int res = list[i];
      list[i] = list[j];
      list[j] = res;
    }
  cout << "\n";
}

void Second_Func(int list[],int S,int position) 
{
  for (int i = 0; i <= position; i++) 
   {
    int key = i;
    int res = list[i];

    for (int j = i + 1; j <= position; j++) 
    {
      if (list[j] > res) 
      {
        key = j;
        res = list[j];
      }
    }
      if (key != i) 
      {
        list[key] = list[i];
        list[i] = res;
      }
    }
  
  for (int l = position; l <= S; l++) 
   {
    int key = l;
    int res = list[l];

    for (int n = l + 1; n <= S; n++) 
    {
      if (list[n] < res) 
      {
        key = n;
        res = list[n];
      }
    }
      if (key != l) 
      {
        list[key] = list[l];
        list[l] = res;
      }
    }
}



int main()
{
 srand(time(NULL));
 setlocale(0,"RUS");
 
 
 const int size = 19;
 int RandNum = rand() % 20;
 int index;
 int arr[size];
 
 for (int i = 0; i < size; i++) 
  {
    arr[i] = i + 1;
    cout << arr[i] << " ";
  }
 cout << "\n\n";
 cout << RandNum << "\n";

 First_Func(arr,size);
 
 for (int i = 0; i < size; i++) 
  {
    cout << arr[i] << " ";
  }
 
  cout << "\n";
 
  for (int i = 0; i < size; i++) 
  {
    if (RandNum == arr[i]) 
    {
       index = i;
       cout << "Индекс случайного числа:" << i;
    }
  } 

  Second_Func(arr,size,index);
  
  cout << "\n\n";
  
  for (int i = 0; i < size; i++) 
  {
    cout << arr[i] << " ";
  }
}*/
