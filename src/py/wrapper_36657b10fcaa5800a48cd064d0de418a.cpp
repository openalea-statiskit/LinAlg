#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d873538217bd5cde81d4f05a0c301c52(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_12875dd70b3357b49923f3280d771094(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_36657b10fcaa5800a48cd064d0de418a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_6df07df5507859528d458bf126b33580)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_fe47fc7443035f438d28eb27813219f8)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 3, 1, 1, 3 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f67e65d3999a5a8bb0b26aa0983b7c60)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rowsTranspositions;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_88fd19271d4b5617bc85c1fff1e35583)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::absDeterminant;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8d8483cc5ed85ebfb5e7f24bcf8cc6e3)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_79200cea32cd53ac9fb5f81627dc7461)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_1a38c9ebabb35676b09ccde0db89dffa)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_bb8b8d09f10d566da8d1902935faad36)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_6c3a34b3049a52158dc2b4e0a63a7a8e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_00c8276e9eb15ae99a442ef2dad55073)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_fe09067c7d145ceea8d40dc5f2a99111)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_65aa492ff4eb5fb3b08b73bd2a740af6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_abdb54ae4a40522a861710db12ea8835)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d873538217bd5cde81d4f05a0c301c52)(double  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_12875dd70b3357b49923f3280d771094)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setThreshold;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_9971e781cf7f5e4ab5cda75bad958b47)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d60f7371b5b35c12918b310aaf8e4a29)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f07a321b263a5659b272ac44588953a9)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > class_36657b10fcaa5800a48cd064d0de418a("_FullPivHouseholderQR_36657b10fcaa5800a48cd064d0de418a", "", boost::python::no_init);
    class_36657b10fcaa5800a48cd064d0de418a.def("matrix_qr", method_pointer_6df07df5507859528d458bf126b33580, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36657b10fcaa5800a48cd064d0de418a.def("cols_permutation", method_pointer_fe47fc7443035f438d28eb27813219f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36657b10fcaa5800a48cd064d0de418a.def("rows_transpositions", method_pointer_f67e65d3999a5a8bb0b26aa0983b7c60, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36657b10fcaa5800a48cd064d0de418a.def("abs_determinant", method_pointer_88fd19271d4b5617bc85c1fff1e35583, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("log_abs_determinant", method_pointer_8d8483cc5ed85ebfb5e7f24bcf8cc6e3, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("rank", method_pointer_79200cea32cd53ac9fb5f81627dc7461, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("dimension_of_kernel", method_pointer_1a38c9ebabb35676b09ccde0db89dffa, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("is_injective", method_pointer_bb8b8d09f10d566da8d1902935faad36, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("is_surjective", method_pointer_6c3a34b3049a52158dc2b4e0a63a7a8e, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("is_invertible", method_pointer_00c8276e9eb15ae99a442ef2dad55073, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("rows", method_pointer_fe09067c7d145ceea8d40dc5f2a99111, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("cols", method_pointer_65aa492ff4eb5fb3b08b73bd2a740af6, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("h_coeffs", method_pointer_abdb54ae4a40522a861710db12ea8835, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36657b10fcaa5800a48cd064d0de418a.def("set_threshold", method_pointer_d873538217bd5cde81d4f05a0c301c52, boost::python::return_internal_reference<>(), "");
    class_36657b10fcaa5800a48cd064d0de418a.def("set_threshold", autowig::method_decorator_d873538217bd5cde81d4f05a0c301c52);
    class_36657b10fcaa5800a48cd064d0de418a.def("set_threshold", method_pointer_12875dd70b3357b49923f3280d771094, boost::python::return_internal_reference<>(), "");
    class_36657b10fcaa5800a48cd064d0de418a.def("set_threshold", autowig::method_decorator_12875dd70b3357b49923f3280d771094);
    class_36657b10fcaa5800a48cd064d0de418a.def("threshold", method_pointer_9971e781cf7f5e4ab5cda75bad958b47, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("nonzero_pivots", method_pointer_d60f7371b5b35c12918b310aaf8e4a29, "");
    class_36657b10fcaa5800a48cd064d0de418a.def("max_pivot", method_pointer_f07a321b263a5659b272ac44588953a9, "");

}