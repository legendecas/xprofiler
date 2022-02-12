#ifndef XPROFILER_SRC_HOOKS_FATAL_ERROR_H
#define XPROFILER_SRC_HOOKS_FATAL_ERROR_H

namespace xprofiler {
[[noreturn]] void OnFatalError(const char* location, const char* message);
void SetFatalErrorHandler(v8::Isolate* isolate);
}

#endif /* XPROFILER_SRC_HOOKS_FATAL_ERROR_H */
