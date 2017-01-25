#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8552f29a21645c17ba55f3ae255c0579()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 3, 1, 0, 3, 1 >::*method_pointer_dd91d502e9995274ab1b3228df732789)() const = &::Eigen::Matrix< float, 3, 1, 0, 3, 1 >::innerStride;
    long int  (::Eigen::Matrix< float, 3, 1, 0, 3, 1 >::*method_pointer_42ffe60bb3ab5aa3851776afaa141a93)() const = &::Eigen::Matrix< float, 3, 1, 0, 3, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, autowig::HeldType< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > > class_8552f29a21645c17ba55f3ae255c0579("_Matrix_8552f29a21645c17ba55f3ae255c0579", "", boost::python::no_init);
    class_8552f29a21645c17ba55f3ae255c0579.def("inner_stride", method_pointer_dd91d502e9995274ab1b3228df732789, "");
    class_8552f29a21645c17ba55f3ae255c0579.def("outer_stride", method_pointer_42ffe60bb3ab5aa3851776afaa141a93, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > >();
    }

}