#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ce0d1affb33656e89dc98964fa3da56c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_19fced4d94ec5c7fa40887a5d366d884)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_df6a7bbaa8145f3daaa30f36237ed538)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_01b18822f98f5c1b9d89d91cc2d8b167)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_a002d49b8ec45729bacd10c8931e3bd7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_3b16d8686ed45fb9936637e36a18563c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > > > class_ce0d1affb33656e89dc98964fa3da56c("_DenseCoeffsBase_ce0d1affb33656e89dc98964fa3da56c", "", boost::python::no_init);
    class_ce0d1affb33656e89dc98964fa3da56c.def("inner_stride", method_pointer_19fced4d94ec5c7fa40887a5d366d884, "");
    class_ce0d1affb33656e89dc98964fa3da56c.def("outer_stride", method_pointer_df6a7bbaa8145f3daaa30f36237ed538, "");
    class_ce0d1affb33656e89dc98964fa3da56c.def("stride", method_pointer_01b18822f98f5c1b9d89d91cc2d8b167, "");
    class_ce0d1affb33656e89dc98964fa3da56c.def("row_stride", method_pointer_a002d49b8ec45729bacd10c8931e3bd7, "");
    class_ce0d1affb33656e89dc98964fa3da56c.def("col_stride", method_pointer_3b16d8686ed45fb9936637e36a18563c, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > > >();
    }

}