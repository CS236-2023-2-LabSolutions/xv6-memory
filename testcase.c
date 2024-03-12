#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void)
{
	int free = getNumFreePages();
	printf(1, "Free pages: %d\n", free);

	printf(1, "Allocating 4 pages using sbrk\n");
	sbrk(4 * 4096);
	free = getNumFreePages();
	printf(1, "Free pages: %d\n", free);
	exit();
}
