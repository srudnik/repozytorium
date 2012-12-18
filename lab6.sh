#/!bin/bash

#punkt 1

grep -n  [[:alnum:]] plik.txt

#punkt 2

grep -n ^[:0-9:] pl*

#punkt 3

grep -l -E ^.{8}r.* *

#punkt 4

grep -c bash$ /etc/passwd

#punkt 5

grep -E '\<[IVXLCDM]{1,3}\>' plik.txt