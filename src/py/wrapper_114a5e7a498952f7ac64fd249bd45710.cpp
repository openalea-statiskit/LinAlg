#include "_ieigen.h"


namespace autowig
{
}


void wrapper_114a5e7a498952f7ac64fd249bd45710()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >::*method_pointer_a396bd1d2e565b56bca70ff125cbbea9)() const = &::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >::*method_pointer_44ec8187d68d5ca0996e19aea8c261a2)() const = &::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > class_114a5e7a498952f7ac64fd249bd45710("_Matrix_114a5e7a498952f7ac64fd249bd45710", "", boost::python::no_init);
    class_114a5e7a498952f7ac64fd249bd45710.def(boost::python::init<  >(""));
    class_114a5e7a498952f7ac64fd249bd45710.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_114a5e7a498952f7ac64fd249bd45710.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & >(""));
    class_114a5e7a498952f7ac64fd249bd45710.def("inner_stride", method_pointer_a396bd1d2e565b56bca70ff125cbbea9, "");
    class_114a5e7a498952f7ac64fd249bd45710.def("outer_stride", method_pointer_44ec8187d68d5ca0996e19aea8c261a2, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >();
    }

}