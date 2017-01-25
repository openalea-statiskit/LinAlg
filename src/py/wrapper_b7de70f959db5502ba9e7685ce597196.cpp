#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b7de70f959db5502ba9e7685ce597196()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 1, 4, 1, 1, 4 >::*method_pointer_9bebf5cd69f250db8b5c93bfb14100e1)() const = &::Eigen::Matrix< int, 1, 4, 1, 1, 4 >::innerStride;
    long int  (::Eigen::Matrix< int, 1, 4, 1, 1, 4 >::*method_pointer_19994bb435f059869a769fa70aed3034)() const = &::Eigen::Matrix< int, 1, 4, 1, 1, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, autowig::HeldType< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > > class_b7de70f959db5502ba9e7685ce597196("_Matrix_b7de70f959db5502ba9e7685ce597196", "", boost::python::no_init);
    class_b7de70f959db5502ba9e7685ce597196.def("inner_stride", method_pointer_9bebf5cd69f250db8b5c93bfb14100e1, "");
    class_b7de70f959db5502ba9e7685ce597196.def("outer_stride", method_pointer_19994bb435f059869a769fa70aed3034, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > >();
    }

}