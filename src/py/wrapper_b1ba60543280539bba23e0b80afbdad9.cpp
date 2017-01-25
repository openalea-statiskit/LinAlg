#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b1ba60543280539bba23e0b80afbdad9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 1, -1, 1, 1, -1 >::*method_pointer_c3ae8db64b475001bb3336c750cfc038)() const = &::Eigen::Matrix< float, 1, -1, 1, 1, -1 >::innerStride;
    long int  (::Eigen::Matrix< float, 1, -1, 1, 1, -1 >::*method_pointer_5cff36ee12105fda96ff7334df3e4755)() const = &::Eigen::Matrix< float, 1, -1, 1, 1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, autowig::HeldType< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > > class_b1ba60543280539bba23e0b80afbdad9("_Matrix_b1ba60543280539bba23e0b80afbdad9", "", boost::python::no_init);
    class_b1ba60543280539bba23e0b80afbdad9.def("inner_stride", method_pointer_c3ae8db64b475001bb3336c750cfc038, "");
    class_b1ba60543280539bba23e0b80afbdad9.def("outer_stride", method_pointer_5cff36ee12105fda96ff7334df3e4755, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > >();
    }

}