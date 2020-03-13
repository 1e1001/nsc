# makefile hates me
if [ -f "/usr/bin/nsc" ];then
  echo "ERROR: NSC (or another program under /usr/bin/nsc) exists already, use OVR=1 if you want to replace NSC, or use LOC=\"[path]\" to save NSC somewhere else"
else
  echo "install nsc into /usr/bin/nsc"
  cp nsc /usr/bin/nsc
fi
