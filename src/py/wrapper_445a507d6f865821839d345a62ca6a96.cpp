#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e0e457336e595b5cac3cb08c0a72c1d2(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, double  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_512a21607db95099b19313adb98b60d7(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_445a507d6f865821839d345a62ca6a96()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_eb2831c16fd05be6884d8ec56026cd89)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_04cb57b6e56a5bf3a45e12f279c8ef66)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_7808ecda76765a5ab08f3a5a09aad6dd)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::maxPivot;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_92cca3fac2975862b94b5c0793f9e09e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::permutationP;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_1a39350151ae5ebd8ad2091367af6a1d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::permutationQ;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_c9e8ee330b1056bb87672676b665d0a0)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rcond;
    struct ::std::complex< double >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_00e9a47df6125da5b40d489e5e40030e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e0e457336e595b5cac3cb08c0a72c1d2)(double  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_512a21607db95099b19313adb98b60d7)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setThreshold;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_9da5b8924acb50809f21a04d59c6e927)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_10c8f88786955e78b87b3d266756671e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_b47b216deb6757fa92c07127a30262a4)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_0ea8d0d52b485b62a34874526544c235)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_cea0eeb134de5d9e92b6e3cd2aede8dd)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_eda5a957f1dc521e825a09dd6c1ee734)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isInvertible;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_1880bda7c65f50d694a0f1bed99d2561)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_bec402148b4958a8a49ba43b4494ef88)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_99c8e116cfb75baf86894038fbc6c5bb)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > > class_445a507d6f865821839d345a62ca6a96("_FullPivLU_445a507d6f865821839d345a62ca6a96", "", boost::python::no_init);
    class_445a507d6f865821839d345a62ca6a96.def(boost::python::init<  >(""));
    class_445a507d6f865821839d345a62ca6a96.def(boost::python::init< long int , long int  >(""));
    class_445a507d6f865821839d345a62ca6a96.def("matrix_lu", method_pointer_eb2831c16fd05be6884d8ec56026cd89, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_445a507d6f865821839d345a62ca6a96.def("nonzero_pivots", method_pointer_04cb57b6e56a5bf3a45e12f279c8ef66, "");
    class_445a507d6f865821839d345a62ca6a96.def("max_pivot", method_pointer_7808ecda76765a5ab08f3a5a09aad6dd, "");
    class_445a507d6f865821839d345a62ca6a96.def("permutation_p", method_pointer_92cca3fac2975862b94b5c0793f9e09e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_445a507d6f865821839d345a62ca6a96.def("permutation_q", method_pointer_1a39350151ae5ebd8ad2091367af6a1d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_445a507d6f865821839d345a62ca6a96.def("rcond", method_pointer_c9e8ee330b1056bb87672676b665d0a0, "");
    class_445a507d6f865821839d345a62ca6a96.def("determinant", method_pointer_00e9a47df6125da5b40d489e5e40030e, "");
    class_445a507d6f865821839d345a62ca6a96.def("set_threshold", method_pointer_e0e457336e595b5cac3cb08c0a72c1d2, boost::python::return_internal_reference<>(), "");
    class_445a507d6f865821839d345a62ca6a96.def("set_threshold", autowig::method_decorator_e0e457336e595b5cac3cb08c0a72c1d2);
    class_445a507d6f865821839d345a62ca6a96.def("set_threshold", method_pointer_512a21607db95099b19313adb98b60d7, boost::python::return_internal_reference<>(), "");
    class_445a507d6f865821839d345a62ca6a96.def("set_threshold", autowig::method_decorator_512a21607db95099b19313adb98b60d7);
    class_445a507d6f865821839d345a62ca6a96.def("threshold", method_pointer_9da5b8924acb50809f21a04d59c6e927, "");
    class_445a507d6f865821839d345a62ca6a96.def("rank", method_pointer_10c8f88786955e78b87b3d266756671e, "");
    class_445a507d6f865821839d345a62ca6a96.def("dimension_of_kernel", method_pointer_b47b216deb6757fa92c07127a30262a4, "");
    class_445a507d6f865821839d345a62ca6a96.def("is_injective", method_pointer_0ea8d0d52b485b62a34874526544c235, "");
    class_445a507d6f865821839d345a62ca6a96.def("is_surjective", method_pointer_cea0eeb134de5d9e92b6e3cd2aede8dd, "");
    class_445a507d6f865821839d345a62ca6a96.def("is_invertible", method_pointer_eda5a957f1dc521e825a09dd6c1ee734, "");
    class_445a507d6f865821839d345a62ca6a96.def("reconstructed_matrix", method_pointer_1880bda7c65f50d694a0f1bed99d2561, "");
    class_445a507d6f865821839d345a62ca6a96.def("rows", method_pointer_bec402148b4958a8a49ba43b4494ef88, "");
    class_445a507d6f865821839d345a62ca6a96.def("cols", method_pointer_99c8e116cfb75baf86894038fbc6c5bb, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > >();
    }

}