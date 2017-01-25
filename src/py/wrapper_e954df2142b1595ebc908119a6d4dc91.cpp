#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e497d59b414253369b6ed63e5e4ed3dd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_b7addbdb4dbb5124a231045243dd4cb5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_e62ebc477d8c55c5b2fb059f3ffd45c8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_d92ca789742e5a9abec27b4b89d5eda3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_da0b19b937bb5e6ca9bffc37e9a466bc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_b60156027040589ba45f022abe695f07(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_8a80bf48532e5072af9fa5f78ba41f03(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, const double  & param_out)
    { instance.x() = param_out; }
    void method_decorator_0977a9551d1b5d25bf32120c9b8576f3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, const double  & param_out)
    { instance.y() = param_out; }
    void method_decorator_5013238d1f895d37b9d9065a7e5265ff(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, const double  & param_out)
    { instance.z() = param_out; }
    void method_decorator_325113c435bd521a9ced20edf63da900(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > & instance, const double  & param_out)
    { instance.w() = param_out; }
}


void wrapper_e954df2142b1595ebc908119a6d4dc91()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_e497d59b414253369b6ed63e5e4ed3dd)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_b7addbdb4dbb5124a231045243dd4cb5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_e62ebc477d8c55c5b2fb059f3ffd45c8)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_d92ca789742e5a9abec27b4b89d5eda3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_da0b19b937bb5e6ca9bffc37e9a466bc)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_b60156027040589ba45f022abe695f07)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_8a80bf48532e5072af9fa5f78ba41f03)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_0977a9551d1b5d25bf32120c9b8576f3)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::y;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_5013238d1f895d37b9d9065a7e5265ff)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::z;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_325113c435bd521a9ced20edf63da900)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 > > > class_e954df2142b1595ebc908119a6d4dc91("_DenseCoeffsBase_e954df2142b1595ebc908119a6d4dc91", "", boost::python::no_init);
    class_e954df2142b1595ebc908119a6d4dc91.def("coeff_ref", method_pointer_e497d59b414253369b6ed63e5e4ed3dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("coeff_ref", autowig::method_decorator_e497d59b414253369b6ed63e5e4ed3dd);
    class_e954df2142b1595ebc908119a6d4dc91.def("coeff_ref_by_outer_inner", method_pointer_b7addbdb4dbb5124a231045243dd4cb5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("coeff_ref_by_outer_inner", autowig::method_decorator_b7addbdb4dbb5124a231045243dd4cb5);
    class_e954df2142b1595ebc908119a6d4dc91.def("__call__", method_pointer_e62ebc477d8c55c5b2fb059f3ffd45c8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("__call__", autowig::method_decorator_e62ebc477d8c55c5b2fb059f3ffd45c8);
    class_e954df2142b1595ebc908119a6d4dc91.def("coeff_ref", method_pointer_d92ca789742e5a9abec27b4b89d5eda3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("coeff_ref", autowig::method_decorator_d92ca789742e5a9abec27b4b89d5eda3);
    class_e954df2142b1595ebc908119a6d4dc91.def("__getitem__", method_pointer_da0b19b937bb5e6ca9bffc37e9a466bc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("__getitem__", autowig::method_decorator_da0b19b937bb5e6ca9bffc37e9a466bc);
    class_e954df2142b1595ebc908119a6d4dc91.def("__call__", method_pointer_b60156027040589ba45f022abe695f07, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("__call__", autowig::method_decorator_b60156027040589ba45f022abe695f07);
    class_e954df2142b1595ebc908119a6d4dc91.def("x", method_pointer_8a80bf48532e5072af9fa5f78ba41f03, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("x", autowig::method_decorator_8a80bf48532e5072af9fa5f78ba41f03);
    class_e954df2142b1595ebc908119a6d4dc91.def("y", method_pointer_0977a9551d1b5d25bf32120c9b8576f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("y", autowig::method_decorator_0977a9551d1b5d25bf32120c9b8576f3);
    class_e954df2142b1595ebc908119a6d4dc91.def("z", method_pointer_5013238d1f895d37b9d9065a7e5265ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("z", autowig::method_decorator_5013238d1f895d37b9d9065a7e5265ff);
    class_e954df2142b1595ebc908119a6d4dc91.def("w", method_pointer_325113c435bd521a9ced20edf63da900, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e954df2142b1595ebc908119a6d4dc91.def("w", autowig::method_decorator_325113c435bd521a9ced20edf63da900);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 0 > > >();
    }

}