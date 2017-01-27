#include "_ieigen.h"


namespace autowig
{
    void method_decorator_111c728028115fd7acc7e31b4de3c127(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_fa325ca07ac051488096371f2d0502b5(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_ac01f17bbe9f5cf9aa5a41e7a6da5f19()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_4bd76410bac554c682d9465b9694d45b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::matrixQR;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_eafde52284cc5e838ecfe62a22ca70e8)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::matrixR;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_4746c8e13893578bbc9ca3a9cae7e3ba)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::colsPermutation;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_2c6b973471235d59bced17c92e73ec95)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::absDeterminant;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_2022536d0c7156f79ca888b13b9b6a84)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b85bb21369aa55668e1a58f1a261458f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_67bbb4bbb8285002bf24655fc6eaa881)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f6423ba31aaa5b4191e4f3e2ecb38276)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_05131356d02a5e6bb7f6d10b03173d5f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_756cd4b5008551049f8beeb168f1bd94)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d997d2d7ef7c5cabb782b801f2521c5b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_6a077bd8bbaf51228448411edfa27cf9)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_836a07b2fcbf5ecdb3c900b5d5a30e37)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_111c728028115fd7acc7e31b4de3c127)(double  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_fa325ca07ac051488096371f2d0502b5)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setThreshold;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_2400cd4a7dde5f85b9c7e2339bd48ee2)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_26494f6688e25df98854ce506e761587)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_080e3b45e4ad588b9625e9ee766efeb1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_392c1dc1fb4e5375814c038372324ab7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > class_ac01f17bbe9f5cf9aa5a41e7a6da5f19("_ColPivHouseholderQR_ac01f17bbe9f5cf9aa5a41e7a6da5f19", "", boost::python::no_init);
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("matrix_qr", method_pointer_4bd76410bac554c682d9465b9694d45b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("matrix_r", method_pointer_eafde52284cc5e838ecfe62a22ca70e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("cols_permutation", method_pointer_4746c8e13893578bbc9ca3a9cae7e3ba, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("abs_determinant", method_pointer_2c6b973471235d59bced17c92e73ec95, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("log_abs_determinant", method_pointer_2022536d0c7156f79ca888b13b9b6a84, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("rank", method_pointer_b85bb21369aa55668e1a58f1a261458f, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("dimension_of_kernel", method_pointer_67bbb4bbb8285002bf24655fc6eaa881, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("is_injective", method_pointer_f6423ba31aaa5b4191e4f3e2ecb38276, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("is_surjective", method_pointer_05131356d02a5e6bb7f6d10b03173d5f, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("is_invertible", method_pointer_756cd4b5008551049f8beeb168f1bd94, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("rows", method_pointer_d997d2d7ef7c5cabb782b801f2521c5b, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("cols", method_pointer_6a077bd8bbaf51228448411edfa27cf9, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("h_coeffs", method_pointer_836a07b2fcbf5ecdb3c900b5d5a30e37, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("set_threshold", method_pointer_111c728028115fd7acc7e31b4de3c127, boost::python::return_internal_reference<>(), "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("set_threshold", autowig::method_decorator_111c728028115fd7acc7e31b4de3c127);
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("set_threshold", method_pointer_fa325ca07ac051488096371f2d0502b5, boost::python::return_internal_reference<>(), "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("set_threshold", autowig::method_decorator_fa325ca07ac051488096371f2d0502b5);
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("threshold", method_pointer_2400cd4a7dde5f85b9c7e2339bd48ee2, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("nonzero_pivots", method_pointer_26494f6688e25df98854ce506e761587, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("max_pivot", method_pointer_080e3b45e4ad588b9625e9ee766efeb1, "");
    class_ac01f17bbe9f5cf9aa5a41e7a6da5f19.def("info", method_pointer_392c1dc1fb4e5375814c038372324ab7, "");

}