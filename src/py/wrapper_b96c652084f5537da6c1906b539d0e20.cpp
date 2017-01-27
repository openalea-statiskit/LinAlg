#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b96c652084f5537da6c1906b539d0e20()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, -1, 1, 0, -1, 1 >::*method_pointer_2e0013a52def591eba40dbb94ef8d8f3)() const = &::Eigen::Matrix< float, -1, 1, 0, -1, 1 >::innerStride;
    long int  (::Eigen::Matrix< float, -1, 1, 0, -1, 1 >::*method_pointer_a3181e6104d65aa9a7b75804fd4ddcde)() const = &::Eigen::Matrix< float, -1, 1, 0, -1, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, autowig::HeldType< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > > class_b96c652084f5537da6c1906b539d0e20("_Matrix_b96c652084f5537da6c1906b539d0e20", "", boost::python::no_init);
    class_b96c652084f5537da6c1906b539d0e20.def(boost::python::init<  >(""));
    class_b96c652084f5537da6c1906b539d0e20.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_b96c652084f5537da6c1906b539d0e20.def(boost::python::init< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & >(""));
    class_b96c652084f5537da6c1906b539d0e20.def("inner_stride", method_pointer_2e0013a52def591eba40dbb94ef8d8f3, "");
    class_b96c652084f5537da6c1906b539d0e20.def("outer_stride", method_pointer_a3181e6104d65aa9a7b75804fd4ddcde, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > >();
    }

}