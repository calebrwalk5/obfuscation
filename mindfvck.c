/*
have fun :D
anusO1
*/
int c;
char * s = "{ }	;\n*";
b() {

  return

  strchr(s, getchar()) - s;
}
n() {
  int c;
  c = b() * 3;
  c += b() / 2;
  c = c * 3 + b() / 2;

  return

  c == 0 ? ' ' :
    c == 1 ? '\n' :
    c == 2 ? '	' :
    c < 33 ? c + 'a' -
    3 : (c - 32) *
    3 + ' ' + b() / 2;

}
main() {

  while (b() != 6);
  while ((c = n()) != '$')
    putchar(c);
}
