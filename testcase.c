#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void)
{
  printf(1, "Hello, world!\n");
  printf(1, "VPs %d\n", numvp());
  printf(1, "PPs %d\n", numpp());
  exit();
}
