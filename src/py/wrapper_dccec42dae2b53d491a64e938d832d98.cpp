#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a2913893036956a3b4d2364ace897190(class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_735fc25e38ee510fbce8aa3cb99a00ce(class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_dccec42dae2b53d491a64e938d832d98()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_892f6b9f01515e4cbe80a9b28f769d5d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_09e25717d99f5c9f93d2b66a260f0764)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6e67873bfe4550c38eb863303aeb9945)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::maxPivot;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_05f51a62fc00549d86d3cca20006d71f)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::permutationP;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_b3c0945136135db899305ddc679f6270)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::permutationQ;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_dec020a188e7585bbabbf56dd0d809bf)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rcond;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_d78d0a52185a522ea7b9f945056595da)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_a2913893036956a3b4d2364ace897190)(float  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_735fc25e38ee510fbce8aa3cb99a00ce)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setThreshold;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0dea715d7dcb5cecbb6a4952b13e32cb)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_458ecf9cc742516e8bc3f9c1f90e6a83)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_2492db8802f55b70aa7a12fb4fae0b85)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_76bdf8b4643d5a0e9aecbe23dff24226)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_cc454869fe625b558225339974b68384)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_3bf5cbaa7ffd5eb997a0fca52125a43b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isInvertible;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_a7f216f837955ac4b41c4e647a710a85)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_d2257b217e865711afbfdd58371079be)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_573aa5c341fd5d76a73b2c147ca92111)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > > class_dccec42dae2b53d491a64e938d832d98("_FullPivLU_dccec42dae2b53d491a64e938d832d98", "", boost::python::no_init);
    class_dccec42dae2b53d491a64e938d832d98.def(boost::python::init<  >(""));
    class_dccec42dae2b53d491a64e938d832d98.def(boost::python::init< long int , long int  >(""));
    class_dccec42dae2b53d491a64e938d832d98.def("matrix_lu", method_pointer_892f6b9f01515e4cbe80a9b28f769d5d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dccec42dae2b53d491a64e938d832d98.def("nonzero_pivots", method_pointer_09e25717d99f5c9f93d2b66a260f0764, "");
    class_dccec42dae2b53d491a64e938d832d98.def("max_pivot", method_pointer_6e67873bfe4550c38eb863303aeb9945, "");
    class_dccec42dae2b53d491a64e938d832d98.def("permutation_p", method_pointer_05f51a62fc00549d86d3cca20006d71f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dccec42dae2b53d491a64e938d832d98.def("permutation_q", method_pointer_b3c0945136135db899305ddc679f6270, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dccec42dae2b53d491a64e938d832d98.def("rcond", method_pointer_dec020a188e7585bbabbf56dd0d809bf, "");
    class_dccec42dae2b53d491a64e938d832d98.def("determinant", method_pointer_d78d0a52185a522ea7b9f945056595da, "");
    class_dccec42dae2b53d491a64e938d832d98.def("set_threshold", method_pointer_a2913893036956a3b4d2364ace897190, boost::python::return_internal_reference<>(), "");
    class_dccec42dae2b53d491a64e938d832d98.def("set_threshold", autowig::method_decorator_a2913893036956a3b4d2364ace897190);
    class_dccec42dae2b53d491a64e938d832d98.def("set_threshold", method_pointer_735fc25e38ee510fbce8aa3cb99a00ce, boost::python::return_internal_reference<>(), "");
    class_dccec42dae2b53d491a64e938d832d98.def("set_threshold", autowig::method_decorator_735fc25e38ee510fbce8aa3cb99a00ce);
    class_dccec42dae2b53d491a64e938d832d98.def("threshold", method_pointer_0dea715d7dcb5cecbb6a4952b13e32cb, "");
    class_dccec42dae2b53d491a64e938d832d98.def("rank", method_pointer_458ecf9cc742516e8bc3f9c1f90e6a83, "");
    class_dccec42dae2b53d491a64e938d832d98.def("dimension_of_kernel", method_pointer_2492db8802f55b70aa7a12fb4fae0b85, "");
    class_dccec42dae2b53d491a64e938d832d98.def("is_injective", method_pointer_76bdf8b4643d5a0e9aecbe23dff24226, "");
    class_dccec42dae2b53d491a64e938d832d98.def("is_surjective", method_pointer_cc454869fe625b558225339974b68384, "");
    class_dccec42dae2b53d491a64e938d832d98.def("is_invertible", method_pointer_3bf5cbaa7ffd5eb997a0fca52125a43b, "");
    class_dccec42dae2b53d491a64e938d832d98.def("reconstructed_matrix", method_pointer_a7f216f837955ac4b41c4e647a710a85, "");
    class_dccec42dae2b53d491a64e938d832d98.def("rows", method_pointer_d2257b217e865711afbfdd58371079be, "");
    class_dccec42dae2b53d491a64e938d832d98.def("cols", method_pointer_573aa5c341fd5d76a73b2c147ca92111, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > >();
    }

}