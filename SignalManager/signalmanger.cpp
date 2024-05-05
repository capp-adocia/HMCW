#include "signalmanger.h"

SignalManager::SignalManager() {}

// 实现单例方法
SignalManager& SignalManager::instance() {
    static SignalManager instance; // 静态局部变量，只会被初始化一次
    return instance;
}
