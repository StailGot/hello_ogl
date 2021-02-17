# conan install . -if ./props/ --build=missing -s build_type=RelWithDebInfo -s arch=x86
# conan install . -if ./props/ --build=missing -s build_type=Debug -s arch=x86

conan install . -if ./props/ --build=missing -s build_type=RelWithDebInfo -s arch=x86_64
conan install . -if ./props/ --build=missing -s build_type=MinSizeRel -s arch=x86_64
conan install . -if ./props/ --build=missing -s build_type=Release -s arch=x86_64
conan install . -if ./props/ --build=missing -s build_type=Debug -s arch=x86_64