#!/bin/bash

# 检查是否提供了至少一个参数
if [ "$#" -lt 1 ]; then
    echo "Usage: $0 <cmake-arguments>"
    exit 1
fi

# Source 环境设置脚本
source /opt/ros/jazzy/setup.bash

# 运行传递进来的 cmake 命令
cmake "$@"