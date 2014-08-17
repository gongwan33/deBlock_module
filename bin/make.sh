#/bin/sh
cd ../ldecod
#make clean
make
res=$?
cd ../bin
echo make return $res
if [ 0 -eq $res ];then
  ./ldecod decoder.cfg
fi
