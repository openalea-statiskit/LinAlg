#include "_ieigen.h"


namespace autowig
{
    void method_decorator_534f96aa51f55f4d9ee145d4b8446204(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_4d9ef9d7a8895da8a1228d412f7e6eb9(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_7465f46f54a85cd382780fb61d091444()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_e35a128efd805c22a44673c7f2cd10c9)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_111eaa7512ee5cbc8692a99fbcb9bac3)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 3, 1, 1, 3 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_ac05c9a4e4db5e16bea45a3c04bb08c4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rowsTranspositions;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2d3bcf7104a25902a77da5e270b28e32)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::absDeterminant;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_f8c1265e0516579b8b75eecf41d86561)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_a5af8ee84a4d540b9f7c1a4dae4b97a5)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2a7935f47d8453b5b896b7f33dc9d38b)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_3d9e4d6d598859afae865ca1e02aab97)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2872620aa334574c95a1bc7178410e5a)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_a67c182002805331b5a998d8afd1bcd8)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_a47bc78f791e5d838545596ac3837b52)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_3fa9addc652656b78ae7c2565959d972)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7ef3d2ac0efc56fc84dbb5c79c6f6f9c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_534f96aa51f55f4d9ee145d4b8446204)(float  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_4d9ef9d7a8895da8a1228d412f7e6eb9)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setThreshold;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_1d5a4190abce5dfe846ec3d242759c48)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_74f6e224e523555996295c4003d69bc4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_6cf8b84dd6675c09ab53579d82826704)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > class_7465f46f54a85cd382780fb61d091444("_FullPivHouseholderQR_7465f46f54a85cd382780fb61d091444", "", boost::python::no_init);
    class_7465f46f54a85cd382780fb61d091444.def("matrix_qr", method_pointer_e35a128efd805c22a44673c7f2cd10c9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7465f46f54a85cd382780fb61d091444.def("cols_permutation", method_pointer_111eaa7512ee5cbc8692a99fbcb9bac3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7465f46f54a85cd382780fb61d091444.def("rows_transpositions", method_pointer_ac05c9a4e4db5e16bea45a3c04bb08c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7465f46f54a85cd382780fb61d091444.def("abs_determinant", method_pointer_2d3bcf7104a25902a77da5e270b28e32, "");
    class_7465f46f54a85cd382780fb61d091444.def("log_abs_determinant", method_pointer_f8c1265e0516579b8b75eecf41d86561, "");
    class_7465f46f54a85cd382780fb61d091444.def("rank", method_pointer_a5af8ee84a4d540b9f7c1a4dae4b97a5, "");
    class_7465f46f54a85cd382780fb61d091444.def("dimension_of_kernel", method_pointer_2a7935f47d8453b5b896b7f33dc9d38b, "");
    class_7465f46f54a85cd382780fb61d091444.def("is_injective", method_pointer_3d9e4d6d598859afae865ca1e02aab97, "");
    class_7465f46f54a85cd382780fb61d091444.def("is_surjective", method_pointer_2872620aa334574c95a1bc7178410e5a, "");
    class_7465f46f54a85cd382780fb61d091444.def("is_invertible", method_pointer_a67c182002805331b5a998d8afd1bcd8, "");
    class_7465f46f54a85cd382780fb61d091444.def("rows", method_pointer_a47bc78f791e5d838545596ac3837b52, "");
    class_7465f46f54a85cd382780fb61d091444.def("cols", method_pointer_3fa9addc652656b78ae7c2565959d972, "");
    class_7465f46f54a85cd382780fb61d091444.def("h_coeffs", method_pointer_7ef3d2ac0efc56fc84dbb5c79c6f6f9c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7465f46f54a85cd382780fb61d091444.def("set_threshold", method_pointer_534f96aa51f55f4d9ee145d4b8446204, boost::python::return_internal_reference<>(), "");
    class_7465f46f54a85cd382780fb61d091444.def("set_threshold", autowig::method_decorator_534f96aa51f55f4d9ee145d4b8446204);
    class_7465f46f54a85cd382780fb61d091444.def("set_threshold", method_pointer_4d9ef9d7a8895da8a1228d412f7e6eb9, boost::python::return_internal_reference<>(), "");
    class_7465f46f54a85cd382780fb61d091444.def("set_threshold", autowig::method_decorator_4d9ef9d7a8895da8a1228d412f7e6eb9);
    class_7465f46f54a85cd382780fb61d091444.def("threshold", method_pointer_1d5a4190abce5dfe846ec3d242759c48, "");
    class_7465f46f54a85cd382780fb61d091444.def("nonzero_pivots", method_pointer_74f6e224e523555996295c4003d69bc4, "");
    class_7465f46f54a85cd382780fb61d091444.def("max_pivot", method_pointer_6cf8b84dd6675c09ab53579d82826704, "");

}