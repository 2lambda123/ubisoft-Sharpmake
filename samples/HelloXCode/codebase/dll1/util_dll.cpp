#include "precomp.h"
#include "util_dll.h"

#include "src/util_static_lib1.h"
#include <iostream>

int UtilDll1::ComputeSum(const std::vector<int>& someInts)
{
    int acc = 0;
    for (int item : someInts)
        acc += item;

#if _DEBUG
    std::cout << "- Dll1 is built in Debug!" << std::endl;
#endif

#if NDEBUG
    std::cout << "- Dll1 is built in Release!" << std::endl;
#endif

    acc += static_lib1_utils::GetRandomPosition();
    
    return acc;
}
