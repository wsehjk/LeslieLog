
namespace LeslieLog {
    enum class LogLevel : int{
        OFF,
        DEBUG,
        INFO,
        WARN,
        CRITICAL,
        ERROR,
    };
    #define SPSC_NUM 10
    #define SPSC_THREAD_NUM SPSC_NUM
}