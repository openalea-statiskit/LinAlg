#include "_ieigen.h"


namespace autowig
{
    void method_decorator_37d4de99ec025ccdb27be70127d8383b(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_acff8d92ec365e3da4fd75e18c998942(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_d1ba0cf6a3c15e1d8ab30995a4c0b355()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_fb533f0304785e51851b9129faf8f2f2)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::matrixQR;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_b96b512beb3d59909a5b2d4aee192b50)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::matrixR;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_b062e79d85c55213ae184bcd112059c7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::colsPermutation;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_7ea72bb1401253139471ef21f13d30c5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::absDeterminant;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_ed7e7c56c5135335ad4a631033c807f0)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_022a9da4fbe55150aedae5194dcd033b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_6a7f0a5f73e75d7387aea4e06479ce01)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_9712f5ad2c145660a400722263ca82a0)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_4dcce61198fa59768e51fffe41d69102)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_a8f4177c7e2b5954a1dda72b9240f097)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_b1df4b9ac23d5af8a40996b247445e5e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_4f2d179f384b560e99146421ae832097)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_017ba80470775632afad5c7841ff9c89)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_37d4de99ec025ccdb27be70127d8383b)(float  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_acff8d92ec365e3da4fd75e18c998942)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setThreshold;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_3def14d3eecf562792bc03867bf99c77)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_9c04daaf8a0c59dc87a8040b560b6b06)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_4700b34741c25101a45e76080d5f51b6)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_beba5f51897854b99e9c9e40f1a92515)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > class_d1ba0cf6a3c15e1d8ab30995a4c0b355("_ColPivHouseholderQR_d1ba0cf6a3c15e1d8ab30995a4c0b355", "", boost::python::no_init);
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("matrix_qr", method_pointer_fb533f0304785e51851b9129faf8f2f2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("matrix_r", method_pointer_b96b512beb3d59909a5b2d4aee192b50, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("cols_permutation", method_pointer_b062e79d85c55213ae184bcd112059c7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("abs_determinant", method_pointer_7ea72bb1401253139471ef21f13d30c5, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("log_abs_determinant", method_pointer_ed7e7c56c5135335ad4a631033c807f0, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("rank", method_pointer_022a9da4fbe55150aedae5194dcd033b, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("dimension_of_kernel", method_pointer_6a7f0a5f73e75d7387aea4e06479ce01, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("is_injective", method_pointer_9712f5ad2c145660a400722263ca82a0, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("is_surjective", method_pointer_4dcce61198fa59768e51fffe41d69102, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("is_invertible", method_pointer_a8f4177c7e2b5954a1dda72b9240f097, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("rows", method_pointer_b1df4b9ac23d5af8a40996b247445e5e, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("cols", method_pointer_4f2d179f384b560e99146421ae832097, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("h_coeffs", method_pointer_017ba80470775632afad5c7841ff9c89, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("set_threshold", method_pointer_37d4de99ec025ccdb27be70127d8383b, boost::python::return_internal_reference<>(), "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("set_threshold", autowig::method_decorator_37d4de99ec025ccdb27be70127d8383b);
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("set_threshold", method_pointer_acff8d92ec365e3da4fd75e18c998942, boost::python::return_internal_reference<>(), "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("set_threshold", autowig::method_decorator_acff8d92ec365e3da4fd75e18c998942);
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("threshold", method_pointer_3def14d3eecf562792bc03867bf99c77, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("nonzero_pivots", method_pointer_9c04daaf8a0c59dc87a8040b560b6b06, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("max_pivot", method_pointer_4700b34741c25101a45e76080d5f51b6, "");
    class_d1ba0cf6a3c15e1d8ab30995a4c0b355.def("info", method_pointer_beba5f51897854b99e9c9e40f1a92515, "");

}