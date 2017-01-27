#include "_ieigen.h"


namespace autowig
{
    void method_decorator_364a637c8fe756abb3c2e19053b550ea(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_4f4f7a2fed595243976eea9c2e5d0f60(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_97ef693f8f5b5d8b914373ad2f8313f9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_8165ba13fcd55f22bd765efd14d5390e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b5d118a4923c59a1877fd3192186e9ac)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_8e236a294e5e5713994e2463446daa27)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_f3942b8c48e151a69b51feb2728c12d7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::permutationP;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_139a2b2031b8597884dc6c9add1326ba)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::permutationQ;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_2e41bd6f9c2750c3a3bb272dd15c3f98)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rcond;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_233c32bb09f353debb91daaa1bd915a4)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_364a637c8fe756abb3c2e19053b550ea)(double  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_4f4f7a2fed595243976eea9c2e5d0f60)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setThreshold;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_c95f88632fe2569fbd01dbc645fe5cc3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_f0658661f25f59e69b07d91934d18828)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_3392446d83fd5d63b9c8d4037b6235e5)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_5162eccc7b335ada958105310b6e7a84)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_6adc0a2f04be5f708ce648afc70a2a69)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b712002e4b4056f080e498b066bab41a)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isInvertible;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_331499589f9659879a77f28fc9617b62)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b8c03adb43ae59139a0a37644e975935)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b33a8c4fd0565777ba69ddeb8febc7e5)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > > class_97ef693f8f5b5d8b914373ad2f8313f9("_FullPivLU_97ef693f8f5b5d8b914373ad2f8313f9", "", boost::python::no_init);
    class_97ef693f8f5b5d8b914373ad2f8313f9.def(boost::python::init<  >(""));
    class_97ef693f8f5b5d8b914373ad2f8313f9.def(boost::python::init< long int , long int  >(""));
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("matrix_lu", method_pointer_8165ba13fcd55f22bd765efd14d5390e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("nonzero_pivots", method_pointer_b5d118a4923c59a1877fd3192186e9ac, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("max_pivot", method_pointer_8e236a294e5e5713994e2463446daa27, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("permutation_p", method_pointer_f3942b8c48e151a69b51feb2728c12d7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("permutation_q", method_pointer_139a2b2031b8597884dc6c9add1326ba, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("rcond", method_pointer_2e41bd6f9c2750c3a3bb272dd15c3f98, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("determinant", method_pointer_233c32bb09f353debb91daaa1bd915a4, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("set_threshold", method_pointer_364a637c8fe756abb3c2e19053b550ea, boost::python::return_internal_reference<>(), "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("set_threshold", autowig::method_decorator_364a637c8fe756abb3c2e19053b550ea);
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("set_threshold", method_pointer_4f4f7a2fed595243976eea9c2e5d0f60, boost::python::return_internal_reference<>(), "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("set_threshold", autowig::method_decorator_4f4f7a2fed595243976eea9c2e5d0f60);
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("threshold", method_pointer_c95f88632fe2569fbd01dbc645fe5cc3, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("rank", method_pointer_f0658661f25f59e69b07d91934d18828, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("dimension_of_kernel", method_pointer_3392446d83fd5d63b9c8d4037b6235e5, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("is_injective", method_pointer_5162eccc7b335ada958105310b6e7a84, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("is_surjective", method_pointer_6adc0a2f04be5f708ce648afc70a2a69, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("is_invertible", method_pointer_b712002e4b4056f080e498b066bab41a, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("reconstructed_matrix", method_pointer_331499589f9659879a77f28fc9617b62, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("rows", method_pointer_b8c03adb43ae59139a0a37644e975935, "");
    class_97ef693f8f5b5d8b914373ad2f8313f9.def("cols", method_pointer_b33a8c4fd0565777ba69ddeb8febc7e5, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > >();
    }

}