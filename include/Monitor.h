#include "common.h"
#include <memory>

// 创建 logger
// 分发 线程 & spsc
namespace LeslieLog {
    // using MoniterPtr = std::unique_ptr<Moniter>;

    class Monitor {
        private:

        public:
            static Monitor& GetInstance() {
                static Monitor monitor_instance;
                return monitor_instance;  
            };
             
    };
};