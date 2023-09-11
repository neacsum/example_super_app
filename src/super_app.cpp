#include <cool_A/hdr1.h>
#include <cool_A/hdr2.h>

#include <cool_B/hdr1.h>

#include <stdio.h>
#include <string.h>

int main (int argc, char** argv)
{
  long long n1 = ackermann (3, 10);
  long long n2 = faster_ackermann (3, 10);
  char str1[256], str2[256];
  *str1 = *str2 = 0;

  spell (n1, str1);
  spell (n2, str2);
  if (!strcmp (str1, str2))
    printf ("Both function give the same result\n");

  printf ("ack(3,10) is %s\n", str1);
}