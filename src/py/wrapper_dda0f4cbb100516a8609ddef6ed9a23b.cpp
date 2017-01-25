#include "_ieigen.h"


namespace autowig
{
}


void wrapper_dda0f4cbb100516a8609ddef6ed9a23b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_248bdbcc75e25fbfb8266b1d9451e693)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_3041f722b6e157a5a3c83843392f55dd)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_8c10a0243faa5870b76158fabd4a103f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_cca5d8989cb65a6ebca038ebbe64538e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_047d26f9d8ba5204ada3903ea37f108b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > > > class_dda0f4cbb100516a8609ddef6ed9a23b("_DenseCoeffsBase_dda0f4cbb100516a8609ddef6ed9a23b", "", boost::python::no_init);
    class_dda0f4cbb100516a8609ddef6ed9a23b.def("inner_stride", method_pointer_248bdbcc75e25fbfb8266b1d9451e693, "");
    class_dda0f4cbb100516a8609ddef6ed9a23b.def("outer_stride", method_pointer_3041f722b6e157a5a3c83843392f55dd, "");
    class_dda0f4cbb100516a8609ddef6ed9a23b.def("stride", method_pointer_8c10a0243faa5870b76158fabd4a103f, "");
    class_dda0f4cbb100516a8609ddef6ed9a23b.def("row_stride", method_pointer_cca5d8989cb65a6ebca038ebbe64538e, "");
    class_dda0f4cbb100516a8609ddef6ed9a23b.def("col_stride", method_pointer_047d26f9d8ba5204ada3903ea37f108b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > > >();
    }

}