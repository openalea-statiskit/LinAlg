#include "_linalg.h"


namespace autowig
{
}


void wrapper_46adc430781159f5a12dc115462f8603()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_b24d3c834a6b51e5b46b4749a30aa175)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_990c8b033ab05876966da2cc89a62433)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_2837969ed47554b1858d7cdb607e15dd)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_4552d83b54e85c07824b25bb4a4a8a5c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_bbab27f52f305e13a6f04ee0df9506e9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > > > class_46adc430781159f5a12dc115462f8603("_DenseCoeffsBase_46adc430781159f5a12dc115462f8603", "", boost::python::no_init);
    class_46adc430781159f5a12dc115462f8603.def("inner_stride", method_pointer_b24d3c834a6b51e5b46b4749a30aa175, "");
    class_46adc430781159f5a12dc115462f8603.def("outer_stride", method_pointer_990c8b033ab05876966da2cc89a62433, "");
    class_46adc430781159f5a12dc115462f8603.def("stride", method_pointer_2837969ed47554b1858d7cdb607e15dd, "");
    class_46adc430781159f5a12dc115462f8603.def("row_stride", method_pointer_4552d83b54e85c07824b25bb4a4a8a5c, "");
    class_46adc430781159f5a12dc115462f8603.def("col_stride", method_pointer_bbab27f52f305e13a6f04ee0df9506e9, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > > >();
    }

}