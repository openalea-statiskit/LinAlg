#include "_ieigen.h"


namespace autowig
{
}


void wrapper_288614f85cd752da9d84878c488f8c05()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_5875025ff7c455abb1147ebb7289a0c8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_c25e003266de5f1ca440852777499c9d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_3cf3052e34f2530cb3f99003f5eb32aa)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_e8cd2e2589dc5bee892bcff166626f0f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::*method_pointer_dad6bf1df7fe52d78aa323f5987cad0d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > > > class_288614f85cd752da9d84878c488f8c05("_DenseCoeffsBase_288614f85cd752da9d84878c488f8c05", "", boost::python::no_init);
    class_288614f85cd752da9d84878c488f8c05.def("inner_stride", method_pointer_5875025ff7c455abb1147ebb7289a0c8, "");
    class_288614f85cd752da9d84878c488f8c05.def("outer_stride", method_pointer_c25e003266de5f1ca440852777499c9d, "");
    class_288614f85cd752da9d84878c488f8c05.def("stride", method_pointer_3cf3052e34f2530cb3f99003f5eb32aa, "");
    class_288614f85cd752da9d84878c488f8c05.def("row_stride", method_pointer_e8cd2e2589dc5bee892bcff166626f0f, "");
    class_288614f85cd752da9d84878c488f8c05.def("col_stride", method_pointer_dad6bf1df7fe52d78aa323f5987cad0d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > > >();
    }

}