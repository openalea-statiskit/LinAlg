#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e1e34609100f56009686dd554e5169c3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_58e4ce07116b506fa6157fa2cdb217b0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_9facea9a06d253f29b7b65578b282cf9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_c6a25c8027385f55b338100263674432)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_1062b69c11435adab98b4d11a9393e21)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_d6c7c64b58415da2aaf4559049fd74d5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > > > class_e1e34609100f56009686dd554e5169c3("_DenseCoeffsBase_e1e34609100f56009686dd554e5169c3", "", boost::python::no_init);
    class_e1e34609100f56009686dd554e5169c3.def("inner_stride", method_pointer_58e4ce07116b506fa6157fa2cdb217b0, "");
    class_e1e34609100f56009686dd554e5169c3.def("outer_stride", method_pointer_9facea9a06d253f29b7b65578b282cf9, "");
    class_e1e34609100f56009686dd554e5169c3.def("stride", method_pointer_c6a25c8027385f55b338100263674432, "");
    class_e1e34609100f56009686dd554e5169c3.def("row_stride", method_pointer_1062b69c11435adab98b4d11a9393e21, "");
    class_e1e34609100f56009686dd554e5169c3.def("col_stride", method_pointer_d6c7c64b58415da2aaf4559049fd74d5, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > > >();
    }

}