#include "_ieigen.h"


namespace autowig
{
    void method_decorator_202c5c268cd45f18b10304bcae327aa3(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_eafb07506d56535c803e7343890bb130(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_7776fb96b24b5db68d37e581c6aa0e49()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_5618bb1e7be25cccacbb00b97bc1fdad)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::matrixQR;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_935113c6dfcf5e13b3aefe6644ed9a57)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::matrixR;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_19c098589f805f4584f5a9fc452a8081)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::colsPermutation;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2495821b87845888b5a16c7261ee5ee3)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::absDeterminant;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_5fb8a58ca04556de874eee7e78f9a2f6)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_955eecd7a816536eb2062f39a24940ef)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_3c9d0b0df90e5bf99bff48776a04530e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_80c3e799c63151acaf49eddb66da1eda)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_96fb1bd65db45f8e980bc5e6dbb19089)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_b3829c867ebe5c6f94575df8e1d01e37)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_37b0f5f7a84c56af99c8a41799d517e3)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_0ff7553fc5e0567f81dd985c3037b322)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_bf8faca5a06b5f85a019bb6d81cbdae5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_202c5c268cd45f18b10304bcae327aa3)(float  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_eafb07506d56535c803e7343890bb130)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setThreshold;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_a0c215f7e9285573bcf101cdf531e164)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_02f311d70e7c5fb5b0d76a28ad76cb18)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_a30e7999515951fe876c7d4c52e6d2ff)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_065e88646b7b5f90ac4b67b6136abda7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > class_7776fb96b24b5db68d37e581c6aa0e49("_ColPivHouseholderQR_7776fb96b24b5db68d37e581c6aa0e49", "", boost::python::no_init);
    class_7776fb96b24b5db68d37e581c6aa0e49.def("matrix_qr", method_pointer_5618bb1e7be25cccacbb00b97bc1fdad, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("matrix_r", method_pointer_935113c6dfcf5e13b3aefe6644ed9a57, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("cols_permutation", method_pointer_19c098589f805f4584f5a9fc452a8081, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("abs_determinant", method_pointer_2495821b87845888b5a16c7261ee5ee3, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("log_abs_determinant", method_pointer_5fb8a58ca04556de874eee7e78f9a2f6, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("rank", method_pointer_955eecd7a816536eb2062f39a24940ef, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("dimension_of_kernel", method_pointer_3c9d0b0df90e5bf99bff48776a04530e, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("is_injective", method_pointer_80c3e799c63151acaf49eddb66da1eda, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("is_surjective", method_pointer_96fb1bd65db45f8e980bc5e6dbb19089, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("is_invertible", method_pointer_b3829c867ebe5c6f94575df8e1d01e37, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("rows", method_pointer_37b0f5f7a84c56af99c8a41799d517e3, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("cols", method_pointer_0ff7553fc5e0567f81dd985c3037b322, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("h_coeffs", method_pointer_bf8faca5a06b5f85a019bb6d81cbdae5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("set_threshold", method_pointer_202c5c268cd45f18b10304bcae327aa3, boost::python::return_internal_reference<>(), "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("set_threshold", autowig::method_decorator_202c5c268cd45f18b10304bcae327aa3);
    class_7776fb96b24b5db68d37e581c6aa0e49.def("set_threshold", method_pointer_eafb07506d56535c803e7343890bb130, boost::python::return_internal_reference<>(), "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("set_threshold", autowig::method_decorator_eafb07506d56535c803e7343890bb130);
    class_7776fb96b24b5db68d37e581c6aa0e49.def("threshold", method_pointer_a0c215f7e9285573bcf101cdf531e164, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("nonzero_pivots", method_pointer_02f311d70e7c5fb5b0d76a28ad76cb18, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("max_pivot", method_pointer_a30e7999515951fe876c7d4c52e6d2ff, "");
    class_7776fb96b24b5db68d37e581c6aa0e49.def("info", method_pointer_065e88646b7b5f90ac4b67b6136abda7, "");

}