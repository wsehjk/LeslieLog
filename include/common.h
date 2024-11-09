#include <exception>
#include <string>
namespace LeslieLog {
    enum class LogLevel : int{
        OFF,
        DEBUG,
        INFO,
        WARN,
        CRITICAL,
        ERROR,
    };

    class LeslieLogEx : public std::exception {
        private:
            std::string msg_;
        public:
        explicit LeslieLogEx(const std::string& msg): msg_(msg) {
        }
        explicit LeslieLogEx(std::string&& msg): msg_(std::move(msg)) { // check
        }
        inline const char* what() {
            return msg_.c_str();
        }

    };
    static constexpr int SPSC_NUM = 10; // why use static and constexptr
    // #define SPSC_THREAD_NUM SPSC_NUM
    static constexpr int SPSC_THREAD_NUM =  SPSC_NUM;
}