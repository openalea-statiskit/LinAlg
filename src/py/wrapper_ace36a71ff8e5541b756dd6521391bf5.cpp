#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ace36a71ff8e5541b756dd6521391bf5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_402a2e873b81571e964d216b1b0a0a17)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_8996585953e6536b89d7f821e2fdc090)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_a741c7c41789599b89ce2478d15ce36d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_1b080b5b568856c798352b7afa899eb0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_ef5609b716355c44934b6983a6d9e241)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_1acfcfdbc6a65fddbd2db9b05b78301e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_cfaef8566c705355b363862c4b41d0e8)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_3bdba04d7ff757e38a95623525350257)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_7dd665b9d6e55b19bd7eaa036aefbb56)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_f1d645efa19b58b8936fa32c61463173)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_1b1d07e80c9d515085f9fd5ca137101a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::z;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_39bcebd1d90f53c6bb226d3d358f66b0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > > class_ace36a71ff8e5541b756dd6521391bf5("_DenseCoeffsBase_ace36a71ff8e5541b756dd6521391bf5", "", boost::python::no_init);
    class_ace36a71ff8e5541b756dd6521391bf5.def("row_index_by_outer_inner", method_pointer_402a2e873b81571e964d216b1b0a0a17, "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("col_index_by_outer_inner", method_pointer_8996585953e6536b89d7f821e2fdc090, "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("coeff", method_pointer_a741c7c41789599b89ce2478d15ce36d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("coeff_by_outer_inner", method_pointer_1b080b5b568856c798352b7afa899eb0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("__call__", method_pointer_ef5609b716355c44934b6983a6d9e241, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("coeff", method_pointer_1acfcfdbc6a65fddbd2db9b05b78301e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("__getitem__", method_pointer_cfaef8566c705355b363862c4b41d0e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("__call__", method_pointer_3bdba04d7ff757e38a95623525350257, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("x", method_pointer_7dd665b9d6e55b19bd7eaa036aefbb56, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("y", method_pointer_f1d645efa19b58b8936fa32c61463173, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("z", method_pointer_1b1d07e80c9d515085f9fd5ca137101a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ace36a71ff8e5541b756dd6521391bf5.def("w", method_pointer_39bcebd1d90f53c6bb226d3d358f66b0, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > >();
    }

}