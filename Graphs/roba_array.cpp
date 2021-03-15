#include <iostream>
template <typename T>
T array_reader()
T array_swapper(T& da)



int main() {
  da=array_reader<>();
  da=array_swapper(da);
  std::size_t da;
  for (std::size_t i{0}; i < n; ++i)
    std::cout << "da[" << i << "] = " << da[i] << std::endl;
  delete[] da;
  return 0;
}

template <typename T>
T array_reader(){
  std::cout << "Please insert array lenght: ";
  std::size_t n;
  std:int a
  std::cin >> n;
  int* da{new int[n]};
  for (std::size_t i{0}; i < n; ++i)
  std::cin >> a
    da[i] = a;

  return da
}
template <typename T>
T array_swapper(T& da){
  std::size_t n
  std:int b
  for (std::size_t i{0}; i < n; ++i)
    da[i] = b;
    da[i] = da[size_t-i]
    da[size_t-i]=b
  return da

}