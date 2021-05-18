# makefile hates me
if [ -f $1 ];then
  echo "ERROR: A program at \"$1\" exists, use a different name, or use OVR=1 to override it anyways"
else
  echo "install nsc into $1"
  cp nsc $1
fi
