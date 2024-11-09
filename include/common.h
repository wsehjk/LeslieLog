
namespace LeslieLog {
    enum class LogLevel : int{
        OFF,
        DEBUG,
        INFO,
        WARN,
        CRITICAL,
        ERROR,
    };
    static constexpr int SPSC_NUM = 10; // why use static and constexptr
    // #define SPSC_THREAD_NUM SPSC_NUM
    static constexpr int SPSC_THREAD_NUM =  SPSC_NUM;
}