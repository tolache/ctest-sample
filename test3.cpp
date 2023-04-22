#include <iostream>
#include <cassert>

void test_case_3() {
    const char *test3Message = R""""(
libc++abi.dylib: terminating with uncaught exception of type std::out_of_range: vector
Abort trap: 6
Thread 0 Crashed:: Dispatch queue: com.apple.main-thread
0   libsystem_kernel.dylib        	0x00007fff6d9a9dfa __pthread_kill + 10
1   libsystem_pthread.dylib       	0x00007fff6da6273c pthread_kill + 285
2   libsystem_c.dylib             	0x00007fff6d92b6a6 abort + 127
3   libc++abi.dylib               	0x00007fff6b8453b8 abort_message + 231
4   libc++abi.dylib               	0x00007fff6b8471a7 default_terminate_handler() + 265
5   libobjc.A.dylib               	0x00007fff6d50e4e4 _objc_terminate() + 97
6   libc++abi.dylib               	0x00007fff6b851d69 std::__terminate(void (*)()) + 8
7   libc++abi.dylib               	0x00007fff6b851d23 std::terminate() + 51
8   libdispatch.dylib             	0x00007fff6d88354d _dispatch_client_callout + 28
9   libdispatch.dylib             	0x00007fff6d8876ba _dispatch_main_queue_callback_4CF + 1200
10  com.apple.CoreFoundation      	0x00007fff39a6b5a9 __CFRUNLOOP_IS_SERVICING_THE_MAIN_DISPATCH_QUEUE__ + 9
11  com.apple.CoreFoundation      	0x00007fff39a6679d __CFRunLoopRun + 2045
12  com.apple.CoreFoundation      	0x00007fff39a65ed3 CFRunLoopRunSpecific + 499
13  com.apple.HIToolbox           	0x00007fff3884c65d RunCurrentEventLoopInMode + 292
14  com.apple.HIToolbox           	0x00007fff3884c3f3 ReceiveNextEventCommon + 104
15  com.apple.HIToolbox           	0x00007fff3884c33e _BlockUntilNextEventMatchingListInModeWithFilter + 64
16  com.apple.AppKit              	0x00007fff36b7e863 _DPSNextEvent + 997
17  com.apple.AppKit              	0x00007fff36b7d050 -[NSApplication(NSEvent) _nextEventMatchingEventMask:untilDate:inMode:dequeue:] + 1361
18  com.apple.AppKit              	0x00007fff36b6f8be -[NSApplication run] + 699
19  libqcocoa.dylib               	0x000000011d3f3c76 QCocoaEventDispatcher::processEvents(QFlags<QEventLoop::ProcessEventsFlag>) + 1270
20  org.qt-project.QtCore         	0x000000011df62aa9 QEventLoop::exec(QFlags<QEventLoop::ProcessEventsFlag>) + 425
21  org.qt-project.QtCore         	0x000000011df6a9b3 QCoreApplication::exec() + 211
22  Testing                       	0x000000010ab1f7cc main + 188 (main.cpp:10)
23  libdyld.dylib                 	0x00007fff6d832015 start +
)"""";

    std::cout << test3Message << std::endl;
    assert(false);
}

int main() {
    std::cout << "Running tests 3..." << std::endl;

    test_case_3();

    return 0;
}