#!/bin/sh
ifconfig -a | grep "ether" | sed -e 's/.*ether //g' | tr -d ' '
