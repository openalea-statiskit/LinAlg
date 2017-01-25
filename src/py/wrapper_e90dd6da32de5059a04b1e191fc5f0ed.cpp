#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e90dd6da32de5059a04b1e191fc5f0ed()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, -1, 1, 0, -1, 1 >::*method_pointer_4c04304c09145aa7b2e5ed259b213954)() const = &::Eigen::Matrix< int, -1, 1, 0, -1, 1 >::innerStride;
    long int  (::Eigen::Matrix< int, -1, 1, 0, -1, 1 >::*method_pointer_d5534c9ebcf15be2bb7be12e7bf92c39)() const = &::Eigen::Matrix< int, -1, 1, 0, -1, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, autowig::HeldType< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > > class_e90dd6da32de5059a04b1e191fc5f0ed("_Matrix_e90dd6da32de5059a04b1e191fc5f0ed", "", boost::python::no_init);
    class_e90dd6da32de5059a04b1e191fc5f0ed.def("inner_stride", method_pointer_4c04304c09145aa7b2e5ed259b213954, "");
    class_e90dd6da32de5059a04b1e191fc5f0ed.def("outer_stride", method_pointer_d5534c9ebcf15be2bb7be12e7bf92c39, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > >();
    }

}