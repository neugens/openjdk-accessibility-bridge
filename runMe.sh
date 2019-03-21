#!/bin/sh

RUNTIME="$JDK11_DEV/bin/java"
if [ -z ${JDK11_DEV+x} ] || [ ! -x ${RUNTIME} ]
then
    echo "build a jdk11 and set the JDK11_DEV env variable to it, for example jdk11-dev/build/linux-x86_64-normal-server-release/images/jdk"
else
    if [ ! -f ./target/openjdk-accessibility-bridge-1.0-SNAPSHOT.jar ]
    then
	mvn clean package
    fi
    
    $RUNTIME -Djavax.accessibility.assistive_technologies=net.java.openjdk.internal.accessibility.AccessBridge \
	     -Djava.library.path=./target/ \
	     -cp ./target/openjdk-accessibility-bridge-1.0-SNAPSHOT.jar:$JDK11_DEV/demo/jfc/J2Ddemo/J2Ddemo.jar\
	     java2d.J2Ddemo
fi
