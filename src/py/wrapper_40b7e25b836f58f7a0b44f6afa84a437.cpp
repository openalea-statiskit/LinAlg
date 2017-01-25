#include "_ieigen.h"


namespace autowig
{
}


void wrapper_40b7e25b836f58f7a0b44f6afa84a437()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 4, 1, 0, 4, 1 >::*method_pointer_f2613e3ec33c5461918bb3e7daaddac6)() const = &::Eigen::Matrix< float, 4, 1, 0, 4, 1 >::innerStride;
    long int  (::Eigen::Matrix< float, 4, 1, 0, 4, 1 >::*method_pointer_244c2b9c86fe5f7aa2df7a652345e69a)() const = &::Eigen::Matrix< float, 4, 1, 0, 4, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, autowig::HeldType< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > > class_40b7e25b836f58f7a0b44f6afa84a437("_Matrix_40b7e25b836f58f7a0b44f6afa84a437", "", boost::python::no_init);
    class_40b7e25b836f58f7a0b44f6afa84a437.def(boost::python::init<  >(""));
    class_40b7e25b836f58f7a0b44f6afa84a437.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_40b7e25b836f58f7a0b44f6afa84a437.def(boost::python::init< float  const &, float  const &, float  const & >(""));
    class_40b7e25b836f58f7a0b44f6afa84a437.def(boost::python::init< float  const &, float  const &, float  const &, float  const & >(""));
    class_40b7e25b836f58f7a0b44f6afa84a437.def(boost::python::init< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & >(""));
    class_40b7e25b836f58f7a0b44f6afa84a437.def("inner_stride", method_pointer_f2613e3ec33c5461918bb3e7daaddac6, "");
    class_40b7e25b836f58f7a0b44f6afa84a437.def("outer_stride", method_pointer_244c2b9c86fe5f7aa2df7a652345e69a, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > >();
    }

}