# NSC

Compiler to make your semicolon key last longer

### Video coming soon

## Install instructions

First clone the repo and cd into it
```
git clone https://github.com/RedMikePumpkin/nsc.git
cd nsc/
```
then there are multiple options for building NSC

- build
- build & test
- install

### Build
To build simply run
```
make build
```
or simply
```
make
```
if you want to specify a specific C compiler to use (e.g. a different version of `gcc`, or `clang`, etc.), just use
```
make build CMP=clang
```
or something. It will make a file called "nsc"

### Build & Test
Use
```
make test
```
once again, using something like
```
make test CMP=gcc-9
```
also works, it will print
```md
Test Successful!
```
in green if it passes the tests (note that there should be a compiler error and a "semicolon" error).

Once again it will create a file called "nsc" in the repo directory

### Install
Use
```
sudo make install
```
Note that you will need to use `sudo` for the default install location (or any location you need root perms to write to)
There are a few extra flags that also work, the first is `LOC`, which you can use to specify the install location, such as
```
sudo make install LOC=/usr/bin/nsc2
```
`LOC` defaults to `/usr/bin/nsc`.

If a file already exists in `LOC` then it will give an error, you can use `OVR=1` to force overriding the file.