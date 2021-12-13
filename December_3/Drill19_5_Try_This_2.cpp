template<class T, class A>
void vector<T,A>::reserve(int newalloc)
{
if (newalloc<=space) return;
auto_ptr<T> p(alloc.allocate(newalloc));
for (int i = 0; i<sz; ++i) alloc.construct(&p[i],elem[i]);
for (int i = 0; i<sz; ++i) alloc.destroy(&elem[i]);
alloc.deallocate(elem,space);
elem = p.release();
space = newalloc;
}
