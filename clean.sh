#/bin/sh

LIST=`ls -l |awk -F" " '{print $9}'`

for i in ${LIST}; do
    if [ -d ""$i ]; then
        echo "clean ${i}/*.out ${i}/*.dSYM"
        rm -rf $i/*.out $i/*.dSYM
    fi
done