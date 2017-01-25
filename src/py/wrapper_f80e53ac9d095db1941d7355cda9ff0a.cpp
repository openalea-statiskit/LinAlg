#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f80e53ac9d095db1941d7355cda9ff0a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >::*method_pointer_354d9fec2dce5b4b9db307be28e7f49e)() const = &::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >::*method_pointer_7afce06157905e6f89ca668fc11bcd6a)() const = &::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > class_f80e53ac9d095db1941d7355cda9ff0a("_Matrix_f80e53ac9d095db1941d7355cda9ff0a", "", boost::python::no_init);
    class_f80e53ac9d095db1941d7355cda9ff0a.def("inner_stride", method_pointer_354d9fec2dce5b4b9db307be28e7f49e, "");
    class_f80e53ac9d095db1941d7355cda9ff0a.def("outer_stride", method_pointer_7afce06157905e6f89ca668fc11bcd6a, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >();
    }

}