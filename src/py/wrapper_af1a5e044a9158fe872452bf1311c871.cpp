#include "_ieigen.h"


namespace autowig
{
    void method_decorator_34d699f30067599ba64f1f2ae9307afb(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_46a74cc9a51f5660bee105a20be7adba(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_af1a5e044a9158fe872452bf1311c871()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_b4a7ef23d38a5a7c81b032321a0c313b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_cfdb2824479f5d0f94e3ae9b1358a6b9)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c2fe9b5ad04252479e10cecd592af8a4)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_868b670c59665aa49506379e9e7f87d5)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::permutationP;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_59b22a1a2fe95538ba6724b1cb37061b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::permutationQ;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_393deddbe03f5b41b24c7e596225bf0b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rcond;
    struct ::std::complex< float >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_75668a857753581786ff33c2fa1bc8d8)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_34d699f30067599ba64f1f2ae9307afb)(float  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_46a74cc9a51f5660bee105a20be7adba)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setThreshold;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_8518c33c81525865948ac7632d99b077)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_50167c617ebe5c719ded9d0955417c04)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_99ea3332068b55f084e14e21fc487bb2)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_3bb483ab09e85a46a1f23f8cf18d5255)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_9756cfcd87bf50589d53e1b42b7922a3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_36690dd4b27354c9b6ea47ec3f62fd42)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isInvertible;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_411994d8fd2050f18cf78c6cea9bc712)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_953e81b20269599ca67a010fcba48767)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_9bdd2306ebea567f983936b7b44a0255)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > > class_af1a5e044a9158fe872452bf1311c871("_FullPivLU_af1a5e044a9158fe872452bf1311c871", "", boost::python::no_init);
    class_af1a5e044a9158fe872452bf1311c871.def(boost::python::init<  >(""));
    class_af1a5e044a9158fe872452bf1311c871.def(boost::python::init< long int , long int  >(""));
    class_af1a5e044a9158fe872452bf1311c871.def("matrix_lu", method_pointer_b4a7ef23d38a5a7c81b032321a0c313b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_af1a5e044a9158fe872452bf1311c871.def("nonzero_pivots", method_pointer_cfdb2824479f5d0f94e3ae9b1358a6b9, "");
    class_af1a5e044a9158fe872452bf1311c871.def("max_pivot", method_pointer_c2fe9b5ad04252479e10cecd592af8a4, "");
    class_af1a5e044a9158fe872452bf1311c871.def("permutation_p", method_pointer_868b670c59665aa49506379e9e7f87d5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_af1a5e044a9158fe872452bf1311c871.def("permutation_q", method_pointer_59b22a1a2fe95538ba6724b1cb37061b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_af1a5e044a9158fe872452bf1311c871.def("rcond", method_pointer_393deddbe03f5b41b24c7e596225bf0b, "");
    class_af1a5e044a9158fe872452bf1311c871.def("determinant", method_pointer_75668a857753581786ff33c2fa1bc8d8, "");
    class_af1a5e044a9158fe872452bf1311c871.def("set_threshold", method_pointer_34d699f30067599ba64f1f2ae9307afb, boost::python::return_internal_reference<>(), "");
    class_af1a5e044a9158fe872452bf1311c871.def("set_threshold", autowig::method_decorator_34d699f30067599ba64f1f2ae9307afb);
    class_af1a5e044a9158fe872452bf1311c871.def("set_threshold", method_pointer_46a74cc9a51f5660bee105a20be7adba, boost::python::return_internal_reference<>(), "");
    class_af1a5e044a9158fe872452bf1311c871.def("set_threshold", autowig::method_decorator_46a74cc9a51f5660bee105a20be7adba);
    class_af1a5e044a9158fe872452bf1311c871.def("threshold", method_pointer_8518c33c81525865948ac7632d99b077, "");
    class_af1a5e044a9158fe872452bf1311c871.def("rank", method_pointer_50167c617ebe5c719ded9d0955417c04, "");
    class_af1a5e044a9158fe872452bf1311c871.def("dimension_of_kernel", method_pointer_99ea3332068b55f084e14e21fc487bb2, "");
    class_af1a5e044a9158fe872452bf1311c871.def("is_injective", method_pointer_3bb483ab09e85a46a1f23f8cf18d5255, "");
    class_af1a5e044a9158fe872452bf1311c871.def("is_surjective", method_pointer_9756cfcd87bf50589d53e1b42b7922a3, "");
    class_af1a5e044a9158fe872452bf1311c871.def("is_invertible", method_pointer_36690dd4b27354c9b6ea47ec3f62fd42, "");
    class_af1a5e044a9158fe872452bf1311c871.def("reconstructed_matrix", method_pointer_411994d8fd2050f18cf78c6cea9bc712, "");
    class_af1a5e044a9158fe872452bf1311c871.def("rows", method_pointer_953e81b20269599ca67a010fcba48767, "");
    class_af1a5e044a9158fe872452bf1311c871.def("cols", method_pointer_9bdd2306ebea567f983936b7b44a0255, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > >();
    }

}