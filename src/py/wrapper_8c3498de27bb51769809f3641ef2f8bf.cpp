#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8c3498de27bb51769809f3641ef2f8bf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_448249c6946d5be4853c98013774cdb8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_522e04d3164b52a889a8a2e52949390a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_6bf097eb180256f7bd6ff77f5777bc17)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_c8edde62689f5226814baae5ad6fb88c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_cbfc1e86e67d59e29b7fbffb2afc8e36)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > > > class_8c3498de27bb51769809f3641ef2f8bf("_DenseCoeffsBase_8c3498de27bb51769809f3641ef2f8bf", "", boost::python::no_init);
    class_8c3498de27bb51769809f3641ef2f8bf.def("inner_stride", method_pointer_448249c6946d5be4853c98013774cdb8, "");
    class_8c3498de27bb51769809f3641ef2f8bf.def("outer_stride", method_pointer_522e04d3164b52a889a8a2e52949390a, "");
    class_8c3498de27bb51769809f3641ef2f8bf.def("stride", method_pointer_6bf097eb180256f7bd6ff77f5777bc17, "");
    class_8c3498de27bb51769809f3641ef2f8bf.def("row_stride", method_pointer_c8edde62689f5226814baae5ad6fb88c, "");
    class_8c3498de27bb51769809f3641ef2f8bf.def("col_stride", method_pointer_cbfc1e86e67d59e29b7fbffb2afc8e36, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > > >();
    }

}