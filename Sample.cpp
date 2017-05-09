#include "RAM.h"

// Sample
// Add two number from input plus 1
// Example,
// Input: "10 22"
// Output: "33"

// number 5 means there are 5 registers (0..4)
RAM(5)
{
    READ(1)
    READ(2)
    LOAD(1)
    ADD(2)
    ADDv(1)
    STORE(1)
    WRITE(1)
    HALT
}
END_RAM
