#include "_ieigen.h"


namespace autowig
{
}


void wrapper_258d8c6003cf569a93f70cf7bdb7ffe4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 2, 2, 0, 2, 2 >::*method_pointer_bfc4c3f74285555eafa5bf8ea917b283)() const = &::Eigen::Matrix< float, 2, 2, 0, 2, 2 >::innerStride;
    long int  (::Eigen::Matrix< float, 2, 2, 0, 2, 2 >::*method_pointer_b16b1dddceb45413b1490c4e26f97433)() const = &::Eigen::Matrix< float, 2, 2, 0, 2, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, autowig::HeldType< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > class_258d8c6003cf569a93f70cf7bdb7ffe4("_Matrix_258d8c6003cf569a93f70cf7bdb7ffe4", "", boost::python::no_init);
    class_258d8c6003cf569a93f70cf7bdb7ffe4.def("inner_stride", method_pointer_bfc4c3f74285555eafa5bf8ea917b283, "");
    class_258d8c6003cf569a93f70cf7bdb7ffe4.def("outer_stride", method_pointer_b16b1dddceb45413b1490c4e26f97433, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >();
    }

}