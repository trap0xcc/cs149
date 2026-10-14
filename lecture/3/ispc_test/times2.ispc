export void times2(uniform int data[], uniform int n) {
  uniform int nextIter;
  if (programIndex == 0)
    nextIter = 0;

  int i = atomic_add_local(&nextIter, 1);
  while (i < n) {
    data[i] += data[i];

    i = atomic_add_local(&nextIter, 1);
  }
}
