#!/bin/bash

ip link show | grep ether | awk '{print $2}'
