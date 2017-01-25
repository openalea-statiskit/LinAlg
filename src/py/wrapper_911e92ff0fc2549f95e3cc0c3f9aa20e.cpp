#include "_ieigen.h"


namespace autowig
{
}


void wrapper_911e92ff0fc2549f95e3cc0c3f9aa20e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_493c5cc7751f540f8f03067aead16040)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_000ab5612864504b98c50976e47eaa9b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_3852259ed7c1503484918ec1421f6120)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_3edf24684a2650f69b49c79d9035c1d3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_405a1106321b56269591f4a1dd49a7d2)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_fae8c1ad9caf5f96a016be0af29c004c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_036a4c734a175f229f918bc466d0c716)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_cd1020ecf3a254268f429c008f02d5b2)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_03395152b38e549e9463c603d064ee21)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_9f96f6d7fe7953c09efed92b667b5a04)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::y;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_1dd277d7ba215e57a2574495a2c1408f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::z;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_0c42734d31765a0dabb1c9587dbc2b92)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > class_911e92ff0fc2549f95e3cc0c3f9aa20e("_DenseCoeffsBase_911e92ff0fc2549f95e3cc0c3f9aa20e", "", boost::python::no_init);
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("row_index_by_outer_inner", method_pointer_493c5cc7751f540f8f03067aead16040, "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("col_index_by_outer_inner", method_pointer_000ab5612864504b98c50976e47eaa9b, "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("coeff", method_pointer_3852259ed7c1503484918ec1421f6120, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("coeff_by_outer_inner", method_pointer_3edf24684a2650f69b49c79d9035c1d3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("__call__", method_pointer_405a1106321b56269591f4a1dd49a7d2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("coeff", method_pointer_fae8c1ad9caf5f96a016be0af29c004c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("__getitem__", method_pointer_036a4c734a175f229f918bc466d0c716, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("__call__", method_pointer_cd1020ecf3a254268f429c008f02d5b2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("x", method_pointer_03395152b38e549e9463c603d064ee21, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("y", method_pointer_9f96f6d7fe7953c09efed92b667b5a04, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("z", method_pointer_1dd277d7ba215e57a2574495a2c1408f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_911e92ff0fc2549f95e3cc0c3f9aa20e.def("w", method_pointer_0c42734d31765a0dabb1c9587dbc2b92, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >();
    }

}