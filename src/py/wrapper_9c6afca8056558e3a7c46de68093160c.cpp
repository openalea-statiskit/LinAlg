#include "_ieigen.h"


namespace autowig
{
}


void wrapper_9c6afca8056558e3a7c46de68093160c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >::*method_pointer_559be5372da456b4a56ecc33d5180c19)() const = &::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >::*method_pointer_a900d220a65951f6ad9a4fefbd7180ef)() const = &::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > > class_9c6afca8056558e3a7c46de68093160c("_Matrix_9c6afca8056558e3a7c46de68093160c", "", boost::python::no_init);
    class_9c6afca8056558e3a7c46de68093160c.def(boost::python::init<  >(""));
    class_9c6afca8056558e3a7c46de68093160c.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_9c6afca8056558e3a7c46de68093160c.def(boost::python::init< struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const & >(""));
    class_9c6afca8056558e3a7c46de68093160c.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const & >(""));
    class_9c6afca8056558e3a7c46de68093160c.def("inner_stride", method_pointer_559be5372da456b4a56ecc33d5180c19, "");
    class_9c6afca8056558e3a7c46de68093160c.def("outer_stride", method_pointer_a900d220a65951f6ad9a4fefbd7180ef, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > >();
    }

}