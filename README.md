Example cmake multipackage
--

mkdir build
cd build
cmake ..
cpack -G DEB

Notes
--

You can only set a single set of debian package properties
per cpack invokation. You'll notice the description from
demo1 and demo2 are not propogated to their packages.
