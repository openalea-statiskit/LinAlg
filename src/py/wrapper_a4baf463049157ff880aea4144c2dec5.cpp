#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a4baf463049157ff880aea4144c2dec5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 3, 1, 0, 3, 1 >::*method_pointer_0184b23cba1f523fbe3cc1739730f532)() const = &::Eigen::Matrix< int, 3, 1, 0, 3, 1 >::innerStride;
    long int  (::Eigen::Matrix< int, 3, 1, 0, 3, 1 >::*method_pointer_acde620ef75456b89c8a36bda2f35975)() const = &::Eigen::Matrix< int, 3, 1, 0, 3, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, autowig::HeldType< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > > class_a4baf463049157ff880aea4144c2dec5("_Matrix_a4baf463049157ff880aea4144c2dec5", "", boost::python::no_init);
    class_a4baf463049157ff880aea4144c2dec5.def("inner_stride", method_pointer_0184b23cba1f523fbe3cc1739730f532, "");
    class_a4baf463049157ff880aea4144c2dec5.def("outer_stride", method_pointer_acde620ef75456b89c8a36bda2f35975, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > >();
    }

}