main()
{
  copyfile(0,1);
}

#define BLOCK 512

copyfile(fd1, fd2)
int fd1, fd2;
{
  char buffer[BLOCK];
  int n;
                   //deskrryptor, tablica, ile mamy odczytać znaków z pliku
  while ((n = read(fd1, buffer, BLOCK)) > 0)
    write(fd2, buffer, n);
}
