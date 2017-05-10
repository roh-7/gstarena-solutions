/* You can use a better package, this is just an example to solve problem 500 from Edu Round #02 */
/* Solution imported from www.go-hero.net */
package main

import (
	"os"
	"bufio"
	"strconv"
	"fmt"
)

func main() {
	// File handling
	file, _ := os.Open(os.Args[1]);
	defer file.Close();

	scanner := bufio.NewScanner(file);
	scanner.Scan();
	num, _ := strconv.Atoi(scanner.Text());
	// Test Case Run
	for i := 1; i <= num; i++ {
		fmt.Printf("Case #%v: %v\n", i, solve(scanner));
	}
}

func solve(scanner *bufio.Scanner) int {
	scanner.Scan();
	s := scanner.Text()

	last := "+"
	flips := 0

	for i := len(s) - 1; i >= 0; i-- {
		cur := string(s[i])
		if cur != last { // Check if its not equal to +, and if not, then, keep change swap paramter "last" to "cur" and increment flips
			flips += 1
			last = cur
		}
	}

	return flips
}
