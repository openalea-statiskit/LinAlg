#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b8125034860056828748036e2baa258b(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_5f53792bb9295451b269a2e2bc9aa602(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_6cb43381bbc55832908711c0fe71bc04()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_df57c9eef3575ff58ea1da95ff89e7e0)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::matrixQR;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_d9e68c098cb755d7b6fab6e197fa32a1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::matrixR;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_ac11a98b262e5c6f817ccc9a45bf581c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::colsPermutation;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_a651820452955ac0905d0ada1bcff81c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::absDeterminant;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_828df5260e5657ae8511234a060b1564)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_c76c2da1acde54019d5d6272d53e7e0b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b2843054ef485783a674c5b9b33bf354)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_9bff7f4ea84c5fc898f1c257c6a62d8c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_8fc07d75b2c45a9f89535533247fc5f5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_60201f5cc4f05fd2b9448c4c8239aa0b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_1c26b4249b0a5e4c97bb0979129193a7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_1d04e1feed005a799029335c4445360c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_675bf1eaa6a655eaa8818cb0ae70ed80)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b8125034860056828748036e2baa258b)(double  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_5f53792bb9295451b269a2e2bc9aa602)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setThreshold;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_10791e7075bf504ca0add3bb6df25503)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_001cca8045a553d7a66e6079dd392fea)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_f40282d71b2753ed8b3454985730d296)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4bb10eaac83f59a78eb16dcb6f69a724)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > class_6cb43381bbc55832908711c0fe71bc04("_ColPivHouseholderQR_6cb43381bbc55832908711c0fe71bc04", "", boost::python::no_init);
    class_6cb43381bbc55832908711c0fe71bc04.def("matrix_qr", method_pointer_df57c9eef3575ff58ea1da95ff89e7e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6cb43381bbc55832908711c0fe71bc04.def("matrix_r", method_pointer_d9e68c098cb755d7b6fab6e197fa32a1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6cb43381bbc55832908711c0fe71bc04.def("cols_permutation", method_pointer_ac11a98b262e5c6f817ccc9a45bf581c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6cb43381bbc55832908711c0fe71bc04.def("abs_determinant", method_pointer_a651820452955ac0905d0ada1bcff81c, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("log_abs_determinant", method_pointer_828df5260e5657ae8511234a060b1564, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("rank", method_pointer_c76c2da1acde54019d5d6272d53e7e0b, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("dimension_of_kernel", method_pointer_b2843054ef485783a674c5b9b33bf354, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("is_injective", method_pointer_9bff7f4ea84c5fc898f1c257c6a62d8c, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("is_surjective", method_pointer_8fc07d75b2c45a9f89535533247fc5f5, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("is_invertible", method_pointer_60201f5cc4f05fd2b9448c4c8239aa0b, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("rows", method_pointer_1c26b4249b0a5e4c97bb0979129193a7, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("cols", method_pointer_1d04e1feed005a799029335c4445360c, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("h_coeffs", method_pointer_675bf1eaa6a655eaa8818cb0ae70ed80, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6cb43381bbc55832908711c0fe71bc04.def("set_threshold", method_pointer_b8125034860056828748036e2baa258b, boost::python::return_internal_reference<>(), "");
    class_6cb43381bbc55832908711c0fe71bc04.def("set_threshold", autowig::method_decorator_b8125034860056828748036e2baa258b);
    class_6cb43381bbc55832908711c0fe71bc04.def("set_threshold", method_pointer_5f53792bb9295451b269a2e2bc9aa602, boost::python::return_internal_reference<>(), "");
    class_6cb43381bbc55832908711c0fe71bc04.def("set_threshold", autowig::method_decorator_5f53792bb9295451b269a2e2bc9aa602);
    class_6cb43381bbc55832908711c0fe71bc04.def("threshold", method_pointer_10791e7075bf504ca0add3bb6df25503, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("nonzero_pivots", method_pointer_001cca8045a553d7a66e6079dd392fea, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("max_pivot", method_pointer_f40282d71b2753ed8b3454985730d296, "");
    class_6cb43381bbc55832908711c0fe71bc04.def("info", method_pointer_4bb10eaac83f59a78eb16dcb6f69a724, "");

}