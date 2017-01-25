#include "_ieigen.h"


namespace autowig
{
}


void wrapper_99b57cd404d850f1ad7ffdaeafd019e6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_be270b754744579686c3457fb3231211)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_da1e0eb574f25f28a0b37e55d672ee7e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_49cb06a220ed57ef9227c26a6717bd69)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_9461a14db1c55de2be3e453a906109ee)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_68e60281c4055d72849b454cea99ba76)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > > > class_99b57cd404d850f1ad7ffdaeafd019e6("_DenseCoeffsBase_99b57cd404d850f1ad7ffdaeafd019e6", "", boost::python::no_init);
    class_99b57cd404d850f1ad7ffdaeafd019e6.def("inner_stride", method_pointer_be270b754744579686c3457fb3231211, "");
    class_99b57cd404d850f1ad7ffdaeafd019e6.def("outer_stride", method_pointer_da1e0eb574f25f28a0b37e55d672ee7e, "");
    class_99b57cd404d850f1ad7ffdaeafd019e6.def("stride", method_pointer_49cb06a220ed57ef9227c26a6717bd69, "");
    class_99b57cd404d850f1ad7ffdaeafd019e6.def("row_stride", method_pointer_9461a14db1c55de2be3e453a906109ee, "");
    class_99b57cd404d850f1ad7ffdaeafd019e6.def("col_stride", method_pointer_68e60281c4055d72849b454cea99ba76, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > > >();
    }

}