/* You can use a better package, this is just an example to solve problem 200 from Edu Round #02 */
package main

import "fmt"

func main() {
	var t, a, b, c int;
	fmt.Scan(&t);
	for qq := 1; qq <= t; qq++ {
		fmt.Scan(&a);
		fmt.Scan(&b);
		fmt.Scan(&c);
		if(a > 0 && b > 0 && c > 0) {
			if(a+b+c == 180) {
				fmt.Printf("Case #%d: YES\n", qq);
			} else {
				fmt.Printf("Case #%d: NO\n", qq);
			}
		} else {
			fmt.Printf("Case #%d: NO\n", qq);
		}
	}
}