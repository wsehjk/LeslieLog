#include "Thread.h"
#include "Common.h"

namespace LeslieLog {

    // todo [] get the idle Thread
    // 
    class ThreadPool {   // for the use of spsc
        private:
            std::vector<LeslieLog::ThreadPtr> pool_;
            int thread_count_;
        public:
            ThreadPool(const ThreadPool& ) = delete;
            ThreadPool(ThreadPool&& ) = delete;
            ThreadPool& operator=(const ThreadPool& ) = delete;
            ThreadPool& operator=(ThreadPool&& ) = delete;

            ThreadPool(int num = LeslieLog::SPSC_THREAD_NUM): thread_count_(num){
                pool_.reserve(thread_count_);
                for(int i = 0; i < thread_count_; ++i) {
                    
                }
            }
            ThreadRawPtr Poll() {

            } 
            ~ThreadPool() {

            }
    };
}