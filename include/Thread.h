#include <thread>
#include <memory>
#include "Spsc.h"
#include "Common.h"

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
        Thread() = default;
        Thread(const Thread&) = delete;
        Thread(Thread&& ) = delete;
        Thread& operator = (const Thread& ) = delete;
        Thread& operator = (Thread&& ) = delete;

        THREADSTATE GetState() const {
            return state_;
        }
        template<typename T>
        void SetToWork() {
            if (state_ == THREADSTATE::RUNNING) {
                throw LeslieLogEx("Thread state is RUNNING");
            }
            state_ = THREADSTATE::RUNNING;

        }
        
    };
    using ThreadPtr = std::unique_ptr<Thread>;
    using ThreadRawPtr = Thread*;
};