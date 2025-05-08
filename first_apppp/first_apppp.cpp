#include <windows.h>
#include <iostream>

struct Player {
    Actor* actor;      // pointer to an Actor object    // pointer to an array of items
    // … other fields …
};

struct Actor {
    Hello* hello;
};

struct Hello {
    float haha;
};


int main() {
  //  // 1) Replace with the PID of the target process
  //  DWORD pid = 20560;

  //  // 2) Open with rights to read and write its memory
  //  HANDLE hProc = OpenProcess(
  //      PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION,
  //      FALSE,
  //      pid
  //  );
  //  if (!hProc) {
  //      std::cerr << "OpenProcess failed (need Admin?): "
  //          << GetLastError() << "\n";
  //      return 1;
  //  }

  //  // 3) Specify the exact address you want
  //  LPCVOID address = reinterpret_cast<LPCVOID>(0x269763B8);

  //  // 4) Read an 'int' from that address
  //  int value = 0;
  //  SIZE_T bytesRead = 0;
  //  if (ReadProcessMemory(hProc, address, &value, sizeof(value), &bytesRead)
  //      && bytesRead == sizeof(value)) {
  //      std::cout << "Original value: " << value << "\n";
  //  }
  //  else {
  //      std::cerr << "ReadProcessMemory failed: "
  //          << GetLastError() << "\n";
  //  }

  //  // 5) Write '1000' back to the same address
  //  value = 10000;
  //  SIZE_T bytesWritten = 0;

  //  int cooldown = 1;

  //  while (true) {
		//Sleep(cooldown);

  //      value += 1;

  //      if (value >= MAXINT - 100) {
  //          value == 10000;
  //      }

  //      if (WriteProcessMemory(hProc,
  //          const_cast<LPVOID>(address),
  //          &value,
  //          sizeof(value),
  //          &bytesWritten)
  //          && bytesWritten == sizeof(value)) {
  //          std::cout << "New value written: " << value << "\n";
  //      }
  //      else {
  //          std::cerr << "WriteProcessMemory failed: "
  //              << GetLastError() << "\n";
  //      }
  //  }


  //  CloseHandle(hProc);
    return 0;
}
