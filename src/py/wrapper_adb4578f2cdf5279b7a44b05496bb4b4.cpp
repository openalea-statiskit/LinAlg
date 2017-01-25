#include "_ieigen.h"


namespace autowig
{
}


void wrapper_adb4578f2cdf5279b7a44b05496bb4b4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_f27efd564142570b8d8d543c61312c9c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_59d9e7a6141458d7bd24e6e18eaa69ca)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_390b94fbe2f75d23835e0735081905a7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_9118d5236144585696c0df58a85c72dc)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_70ac6ccc2410591f8e77fe9fc6537fdf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > > > class_adb4578f2cdf5279b7a44b05496bb4b4("_DenseCoeffsBase_adb4578f2cdf5279b7a44b05496bb4b4", "", boost::python::no_init);
    class_adb4578f2cdf5279b7a44b05496bb4b4.def("inner_stride", method_pointer_f27efd564142570b8d8d543c61312c9c, "");
    class_adb4578f2cdf5279b7a44b05496bb4b4.def("outer_stride", method_pointer_59d9e7a6141458d7bd24e6e18eaa69ca, "");
    class_adb4578f2cdf5279b7a44b05496bb4b4.def("stride", method_pointer_390b94fbe2f75d23835e0735081905a7, "");
    class_adb4578f2cdf5279b7a44b05496bb4b4.def("row_stride", method_pointer_9118d5236144585696c0df58a85c72dc, "");
    class_adb4578f2cdf5279b7a44b05496bb4b4.def("col_stride", method_pointer_70ac6ccc2410591f8e77fe9fc6537fdf, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > > >();
    }

}