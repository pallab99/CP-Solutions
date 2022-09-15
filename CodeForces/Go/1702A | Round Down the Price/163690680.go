package main
 
import (
 "fmt"
 "math"
)
 
func main() {
 var t int
 fmt.Scan(&t)
 var i int = 0
 for i = 0; i < t; i++ {
  var n int
  fmt.Scan(&n)
  var d int = n
  var s int = 0
  for d > 9 {
   s++
   d = d / 10
  }
  n = n - int(math.Pow10(s))
 
  fmt.Println(n)
 }
}