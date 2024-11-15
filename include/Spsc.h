// single producer and single consumer lock-free queue
#include <memory>
namespace LeslieLog {
    template<typename T, typename allocator = std::allocator<T>>
    class Queue {
        private:

        public:
    };
    template<typename T>
    using QueuePtr = std::unique_ptr<Queue<T>>;

    template<typename T>
    using QueueRawPtr = Queue<T>*;
}