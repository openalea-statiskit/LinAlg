#include "_ieigen.h"


namespace autowig
{
}


void wrapper_06895bd7227351d0a14828cd7d01514d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_19e0824334d35482b490a23a8acea1be)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_c2ac332b668252dc83e81ce7295a0b52)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_4283ca7be6fc5f3092ef27574b40fe7a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_ab257faca20f5e319ceb2e53194bf5f7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::*method_pointer_e489f3c1eeb65bbba54255f1e8b936db)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > > > class_06895bd7227351d0a14828cd7d01514d("_DenseCoeffsBase_06895bd7227351d0a14828cd7d01514d", "", boost::python::no_init);
    class_06895bd7227351d0a14828cd7d01514d.def("inner_stride", method_pointer_19e0824334d35482b490a23a8acea1be, "");
    class_06895bd7227351d0a14828cd7d01514d.def("outer_stride", method_pointer_c2ac332b668252dc83e81ce7295a0b52, "");
    class_06895bd7227351d0a14828cd7d01514d.def("stride", method_pointer_4283ca7be6fc5f3092ef27574b40fe7a, "");
    class_06895bd7227351d0a14828cd7d01514d.def("row_stride", method_pointer_ab257faca20f5e319ceb2e53194bf5f7, "");
    class_06895bd7227351d0a14828cd7d01514d.def("col_stride", method_pointer_e489f3c1eeb65bbba54255f1e8b936db, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > > >();
    }

}