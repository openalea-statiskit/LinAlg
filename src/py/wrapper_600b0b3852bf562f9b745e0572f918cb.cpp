#include "_ieigen.h"


namespace autowig
{
}


void wrapper_600b0b3852bf562f9b745e0572f918cb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_a68ce1ac7bef515493a797bc41c524f1)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_4623d14823e2569bad8594a5742f9fa2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_b7b233925c4057708e9f2e5f7aa296f2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_97c2bcd1e78457548305a3de707e4dd3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_f758b7485916574780b7a49729c0e015)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > > > class_600b0b3852bf562f9b745e0572f918cb("_DenseCoeffsBase_600b0b3852bf562f9b745e0572f918cb", "", boost::python::no_init);
    class_600b0b3852bf562f9b745e0572f918cb.def("inner_stride", method_pointer_a68ce1ac7bef515493a797bc41c524f1, "");
    class_600b0b3852bf562f9b745e0572f918cb.def("outer_stride", method_pointer_4623d14823e2569bad8594a5742f9fa2, "");
    class_600b0b3852bf562f9b745e0572f918cb.def("stride", method_pointer_b7b233925c4057708e9f2e5f7aa296f2, "");
    class_600b0b3852bf562f9b745e0572f918cb.def("row_stride", method_pointer_97c2bcd1e78457548305a3de707e4dd3, "");
    class_600b0b3852bf562f9b745e0572f918cb.def("col_stride", method_pointer_f758b7485916574780b7a49729c0e015, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > > >();
    }

}