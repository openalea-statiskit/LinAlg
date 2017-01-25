#include "_ieigen.h"


namespace autowig
{
}


void wrapper_367475d27ef0563badf47ace043249c3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_234db1e2c6fa58bc9cc26000ad2f6c30)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_3b2e6de4b21d59f2bf787b09769bd725)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_c1a2253d6001572c89e183c9d23f6ba3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_b92923df0af156ac97accb222ca736d5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_b6e1ee327b4b5bf4a843a5cf71ffd46c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > > > class_367475d27ef0563badf47ace043249c3("_DenseCoeffsBase_367475d27ef0563badf47ace043249c3", "", boost::python::no_init);
    class_367475d27ef0563badf47ace043249c3.def("inner_stride", method_pointer_234db1e2c6fa58bc9cc26000ad2f6c30, "");
    class_367475d27ef0563badf47ace043249c3.def("outer_stride", method_pointer_3b2e6de4b21d59f2bf787b09769bd725, "");
    class_367475d27ef0563badf47ace043249c3.def("stride", method_pointer_c1a2253d6001572c89e183c9d23f6ba3, "");
    class_367475d27ef0563badf47ace043249c3.def("row_stride", method_pointer_b92923df0af156ac97accb222ca736d5, "");
    class_367475d27ef0563badf47ace043249c3.def("col_stride", method_pointer_b6e1ee327b4b5bf4a843a5cf71ffd46c, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > > >();
    }

}