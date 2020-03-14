echo "1"
NSCOUT=$(./nsc test1.n.c -o test)
echo $NSCOUT | grep 'exit 1$'
NSCYEA=$?
NSCOUT=$(./nsc test2.n.c -o test)
echo $NSCOUT | grep 'exit 1$'
NSCYEB=$?
NSCOUT=$(./nsc test3.n.c -o test)
echo $NSCOUT | grep 'exit 1$'
NSCYEC=$?
if [ $NSCYEA -eq 0 ] && [ $NSCYEB -eq 0 ] && [ $NSCYEC -ne 0 ]; then
  echo -e "\x1b[32m\x1b[1mTest Successful!\x1b[0m"
fi
