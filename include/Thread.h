#include <thread>
#include <memory>
#include "Spsc.h"

// Tread 可以访问 spsc对象
// 指针 或者 weak_ptr
namespace LeslieLog {
    enum class THREADSTATE {
        IDLE = 0,
        RUNNING = 1,
    };
    class Thread {
        private:
            std::thread worker_;
            THREADSTATE state_;
        public:



    };
    using ThreadPtr = std::unique_ptr<Thread>;
    using ThreadRawPtr = Thread*;
};