#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7bb021689d6a51b9af30a1f3b2e7bc05(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_0efd3c13e0695eab96ae5854a66cc0cf(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_7d4094dc561752a386ac74d36038a871()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_141e5bd79a9b5eb6a87efe952026439b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::matrixQR;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_ed88ae096cc85fcbbdbf6a87cb88c76a)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::matrixR;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5009d79db95d55f88b9d7cc6c61e52b0)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::colsPermutation;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a96d1d17090a5561b10d30f4a0e3732f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::absDeterminant;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_cfa16d9884825f61af5081492f70d40b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_bf85251be89b5cb0944d71d6a1c68fd5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a8d2135f0a5c55089b26c158aa2a1239)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_9b53da5dc6355d8db78d04e451d886a7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_e1ead643af1f5519963ece4dccec80eb)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_202f16d641995cffa418a479ed713509)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_2b377176b8635436849685610ab6738c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_45eeb723ccd655269159d24655d712ec)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_aeb166aafa8b55049fb7c85d86fbb590)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_7bb021689d6a51b9af30a1f3b2e7bc05)(double  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_0efd3c13e0695eab96ae5854a66cc0cf)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setThreshold;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_10670f905cb15ea7a889949bc50f2f9d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_2e047b53f2085816a305d8646d43aca1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_346b7703e81c55eba904f91d97a4c0c7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_da4edac55c3a54d09412c7402f80c3a1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > class_7d4094dc561752a386ac74d36038a871("_ColPivHouseholderQR_7d4094dc561752a386ac74d36038a871", "", boost::python::no_init);
    class_7d4094dc561752a386ac74d36038a871.def("matrix_qr", method_pointer_141e5bd79a9b5eb6a87efe952026439b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7d4094dc561752a386ac74d36038a871.def("matrix_r", method_pointer_ed88ae096cc85fcbbdbf6a87cb88c76a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7d4094dc561752a386ac74d36038a871.def("cols_permutation", method_pointer_5009d79db95d55f88b9d7cc6c61e52b0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7d4094dc561752a386ac74d36038a871.def("abs_determinant", method_pointer_a96d1d17090a5561b10d30f4a0e3732f, "");
    class_7d4094dc561752a386ac74d36038a871.def("log_abs_determinant", method_pointer_cfa16d9884825f61af5081492f70d40b, "");
    class_7d4094dc561752a386ac74d36038a871.def("rank", method_pointer_bf85251be89b5cb0944d71d6a1c68fd5, "");
    class_7d4094dc561752a386ac74d36038a871.def("dimension_of_kernel", method_pointer_a8d2135f0a5c55089b26c158aa2a1239, "");
    class_7d4094dc561752a386ac74d36038a871.def("is_injective", method_pointer_9b53da5dc6355d8db78d04e451d886a7, "");
    class_7d4094dc561752a386ac74d36038a871.def("is_surjective", method_pointer_e1ead643af1f5519963ece4dccec80eb, "");
    class_7d4094dc561752a386ac74d36038a871.def("is_invertible", method_pointer_202f16d641995cffa418a479ed713509, "");
    class_7d4094dc561752a386ac74d36038a871.def("rows", method_pointer_2b377176b8635436849685610ab6738c, "");
    class_7d4094dc561752a386ac74d36038a871.def("cols", method_pointer_45eeb723ccd655269159d24655d712ec, "");
    class_7d4094dc561752a386ac74d36038a871.def("h_coeffs", method_pointer_aeb166aafa8b55049fb7c85d86fbb590, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7d4094dc561752a386ac74d36038a871.def("set_threshold", method_pointer_7bb021689d6a51b9af30a1f3b2e7bc05, boost::python::return_internal_reference<>(), "");
    class_7d4094dc561752a386ac74d36038a871.def("set_threshold", autowig::method_decorator_7bb021689d6a51b9af30a1f3b2e7bc05);
    class_7d4094dc561752a386ac74d36038a871.def("set_threshold", method_pointer_0efd3c13e0695eab96ae5854a66cc0cf, boost::python::return_internal_reference<>(), "");
    class_7d4094dc561752a386ac74d36038a871.def("set_threshold", autowig::method_decorator_0efd3c13e0695eab96ae5854a66cc0cf);
    class_7d4094dc561752a386ac74d36038a871.def("threshold", method_pointer_10670f905cb15ea7a889949bc50f2f9d, "");
    class_7d4094dc561752a386ac74d36038a871.def("nonzero_pivots", method_pointer_2e047b53f2085816a305d8646d43aca1, "");
    class_7d4094dc561752a386ac74d36038a871.def("max_pivot", method_pointer_346b7703e81c55eba904f91d97a4c0c7, "");
    class_7d4094dc561752a386ac74d36038a871.def("info", method_pointer_da4edac55c3a54d09412c7402f80c3a1, "");

}