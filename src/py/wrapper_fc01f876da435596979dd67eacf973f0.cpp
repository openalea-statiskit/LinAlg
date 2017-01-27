#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b054e967be5c5191ac99445e256a0405(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_64f2eb6ddb97534999b6a9ecc67719a2(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_fc01f876da435596979dd67eacf973f0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_2cb4851360cc5137a96c6b7834f81f7b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::matrixQR;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_178c1fa0fc3d5bc9b889e328ecfa28bc)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::matrixR;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_56aba3fdb9fa584297bc951f7918bbf5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::colsPermutation;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_4e409420150658ddbc8dbc676f87b42a)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::absDeterminant;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_c641f632ce435bcd9618e3e25bfb25f3)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_7f8edfd053b75959a7b20a3f84a45480)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_1902822ef03d529bb7f60d3a73cfa69d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_77f13e00099e54f9b876bae0d73358c1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_b81f1c5c9a6556cbae387ee33b8fdcb0)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ee93976db45957a4878821e8279448a1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_c94c5ded81745119a646fc6be30783fb)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_4e43f6078c5555c197a9eb2eeafe1646)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_9392af3e700e595e8eb863e6f511bfd4)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_b054e967be5c5191ac99445e256a0405)(float  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_64f2eb6ddb97534999b6a9ecc67719a2)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setThreshold;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_45b10693349b55cea36921140f308f0c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_18f1b2f2b30058659597a153b60064ff)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_0c383d64178d55bcae4794d8f92a4e19)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_51a50954c4bb5039a71ce0a26c0da562)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > class_fc01f876da435596979dd67eacf973f0("_ColPivHouseholderQR_fc01f876da435596979dd67eacf973f0", "", boost::python::no_init);
    class_fc01f876da435596979dd67eacf973f0.def("matrix_qr", method_pointer_2cb4851360cc5137a96c6b7834f81f7b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc01f876da435596979dd67eacf973f0.def("matrix_r", method_pointer_178c1fa0fc3d5bc9b889e328ecfa28bc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc01f876da435596979dd67eacf973f0.def("cols_permutation", method_pointer_56aba3fdb9fa584297bc951f7918bbf5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc01f876da435596979dd67eacf973f0.def("abs_determinant", method_pointer_4e409420150658ddbc8dbc676f87b42a, "");
    class_fc01f876da435596979dd67eacf973f0.def("log_abs_determinant", method_pointer_c641f632ce435bcd9618e3e25bfb25f3, "");
    class_fc01f876da435596979dd67eacf973f0.def("rank", method_pointer_7f8edfd053b75959a7b20a3f84a45480, "");
    class_fc01f876da435596979dd67eacf973f0.def("dimension_of_kernel", method_pointer_1902822ef03d529bb7f60d3a73cfa69d, "");
    class_fc01f876da435596979dd67eacf973f0.def("is_injective", method_pointer_77f13e00099e54f9b876bae0d73358c1, "");
    class_fc01f876da435596979dd67eacf973f0.def("is_surjective", method_pointer_b81f1c5c9a6556cbae387ee33b8fdcb0, "");
    class_fc01f876da435596979dd67eacf973f0.def("is_invertible", method_pointer_ee93976db45957a4878821e8279448a1, "");
    class_fc01f876da435596979dd67eacf973f0.def("rows", method_pointer_c94c5ded81745119a646fc6be30783fb, "");
    class_fc01f876da435596979dd67eacf973f0.def("cols", method_pointer_4e43f6078c5555c197a9eb2eeafe1646, "");
    class_fc01f876da435596979dd67eacf973f0.def("h_coeffs", method_pointer_9392af3e700e595e8eb863e6f511bfd4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc01f876da435596979dd67eacf973f0.def("set_threshold", method_pointer_b054e967be5c5191ac99445e256a0405, boost::python::return_internal_reference<>(), "");
    class_fc01f876da435596979dd67eacf973f0.def("set_threshold", autowig::method_decorator_b054e967be5c5191ac99445e256a0405);
    class_fc01f876da435596979dd67eacf973f0.def("set_threshold", method_pointer_64f2eb6ddb97534999b6a9ecc67719a2, boost::python::return_internal_reference<>(), "");
    class_fc01f876da435596979dd67eacf973f0.def("set_threshold", autowig::method_decorator_64f2eb6ddb97534999b6a9ecc67719a2);
    class_fc01f876da435596979dd67eacf973f0.def("threshold", method_pointer_45b10693349b55cea36921140f308f0c, "");
    class_fc01f876da435596979dd67eacf973f0.def("nonzero_pivots", method_pointer_18f1b2f2b30058659597a153b60064ff, "");
    class_fc01f876da435596979dd67eacf973f0.def("max_pivot", method_pointer_0c383d64178d55bcae4794d8f92a4e19, "");
    class_fc01f876da435596979dd67eacf973f0.def("info", method_pointer_51a50954c4bb5039a71ce0a26c0da562, "");

}