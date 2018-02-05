// structWithArray.c    Illustrate an array inside a struct
// P. Conrad for CS16, Spring 2010
// We see here that we can declare an array of structs
#include <stdio.h>

struct Date
{
  int month;
  int day;
  int year;
};

struct CALotteryTicket 
{
  int nums[5]; // numbers on ticket other than mega
  int mega; // the mega number
  struct Date drawing; // date of drawing;
};

void printDate(struct Date d)
{
  printf("%02d/%02d/%02d",d.month, d.day, d.year);
}

void printLotteryTicket(struct CALotteryTicket ticket)
{
  printDate(ticket.drawing);

  // print the numbers
  int i;
  for (i=0;i<5;i++)
    printf(" %2d",ticket.nums[i]);
  printf(" mega: %2d",ticket.mega);
}

int main()
{
  // On 04/30/2010, the Mega Millions winning numbers were:
  //   14 20 41 47 53 mega: 53

  struct CALotteryTicket mm={ {14,20,41,47,53}, 40, {4,30,2010} };

  // On 04/30/2010, the SuperLottoPlus numbers were:
  //  1 9 15 16 29 mega: 9

  struct CALotteryTicket slp={ {1,9,15,16,29}, 9, {4,30,2010} };

  // print the lottery tickets

  printf(" Mega Millions:    "); printLotteryTicket(mm); printf("\n");
  printf(" Super Lotto Plus: "); printLotteryTicket(slp); printf("\n");

  return 0;

}

