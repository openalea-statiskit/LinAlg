#include "_ieigen.h"


namespace autowig
{
}


void wrapper_fe6720930e6d5d7ca6ce150af875a3f7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 3, 3, 0, 3, 3 >::*method_pointer_b92b0ab3b02b53bdba02b7a30ff5f431)() const = &::Eigen::Matrix< float, 3, 3, 0, 3, 3 >::innerStride;
    long int  (::Eigen::Matrix< float, 3, 3, 0, 3, 3 >::*method_pointer_b517c74af7225dc2a1da1bd005e560f4)() const = &::Eigen::Matrix< float, 3, 3, 0, 3, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, autowig::HeldType< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > class_fe6720930e6d5d7ca6ce150af875a3f7("_Matrix_fe6720930e6d5d7ca6ce150af875a3f7", "", boost::python::no_init);
    class_fe6720930e6d5d7ca6ce150af875a3f7.def(boost::python::init<  >(""));
    class_fe6720930e6d5d7ca6ce150af875a3f7.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_fe6720930e6d5d7ca6ce150af875a3f7.def(boost::python::init< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & >(""));
    class_fe6720930e6d5d7ca6ce150af875a3f7.def("inner_stride", method_pointer_b92b0ab3b02b53bdba02b7a30ff5f431, "");
    class_fe6720930e6d5d7ca6ce150af875a3f7.def("outer_stride", method_pointer_b517c74af7225dc2a1da1bd005e560f4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >();
    }

}