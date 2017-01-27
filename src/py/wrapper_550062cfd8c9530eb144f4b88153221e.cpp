#include "_ieigen.h"


namespace autowig
{
    void method_decorator_833903fcc01b5a50ad11ac51b91d0328(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_6bc56043b8985713bb6a31eaa2cba4c6(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_550062cfd8c9530eb144f4b88153221e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_b2837f2a21be5c6f9be5d5b5938a2583)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_508f6a26c83f59489fe88f97ec56c84b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_4c9c89ad9c1e5898ac0d205a169d246d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_5638066ad89758b7b90e386268d4dbb3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::permutationP;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_808611afd084564ea61b5a68e2b96c0b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::permutationQ;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_c6e7e9cb274758f887d693d38620a4f1)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rcond;
    struct ::std::complex< double >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_4e9682f88f5c56fd87a8bb743211b49c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_833903fcc01b5a50ad11ac51b91d0328)(double  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_6bc56043b8985713bb6a31eaa2cba4c6)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setThreshold;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_0f7d15ab8fe157fa8a3db55b118e1cc7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_e7cf7676de9c508798f16888ec5df7bc)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_8c526c89001757c09798164a29f086e9)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_e3b8813190f05619ae1ed6c95b5c21e6)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_1b4941f38fed5d159d660f2243fba78f)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_29737d075c3a5876a809ac961e9095fc)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isInvertible;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_e1b714f0248a55888e14c881cdd207f3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_bceb9f4ff9025b35ab4f0f848ae2e712)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_3103a0c08f36526693a8c7bfadd95e0d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > > class_550062cfd8c9530eb144f4b88153221e("_FullPivLU_550062cfd8c9530eb144f4b88153221e", "", boost::python::no_init);
    class_550062cfd8c9530eb144f4b88153221e.def(boost::python::init<  >(""));
    class_550062cfd8c9530eb144f4b88153221e.def(boost::python::init< long int , long int  >(""));
    class_550062cfd8c9530eb144f4b88153221e.def("matrix_lu", method_pointer_b2837f2a21be5c6f9be5d5b5938a2583, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_550062cfd8c9530eb144f4b88153221e.def("nonzero_pivots", method_pointer_508f6a26c83f59489fe88f97ec56c84b, "");
    class_550062cfd8c9530eb144f4b88153221e.def("max_pivot", method_pointer_4c9c89ad9c1e5898ac0d205a169d246d, "");
    class_550062cfd8c9530eb144f4b88153221e.def("permutation_p", method_pointer_5638066ad89758b7b90e386268d4dbb3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_550062cfd8c9530eb144f4b88153221e.def("permutation_q", method_pointer_808611afd084564ea61b5a68e2b96c0b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_550062cfd8c9530eb144f4b88153221e.def("rcond", method_pointer_c6e7e9cb274758f887d693d38620a4f1, "");
    class_550062cfd8c9530eb144f4b88153221e.def("determinant", method_pointer_4e9682f88f5c56fd87a8bb743211b49c, "");
    class_550062cfd8c9530eb144f4b88153221e.def("set_threshold", method_pointer_833903fcc01b5a50ad11ac51b91d0328, boost::python::return_internal_reference<>(), "");
    class_550062cfd8c9530eb144f4b88153221e.def("set_threshold", autowig::method_decorator_833903fcc01b5a50ad11ac51b91d0328);
    class_550062cfd8c9530eb144f4b88153221e.def("set_threshold", method_pointer_6bc56043b8985713bb6a31eaa2cba4c6, boost::python::return_internal_reference<>(), "");
    class_550062cfd8c9530eb144f4b88153221e.def("set_threshold", autowig::method_decorator_6bc56043b8985713bb6a31eaa2cba4c6);
    class_550062cfd8c9530eb144f4b88153221e.def("threshold", method_pointer_0f7d15ab8fe157fa8a3db55b118e1cc7, "");
    class_550062cfd8c9530eb144f4b88153221e.def("rank", method_pointer_e7cf7676de9c508798f16888ec5df7bc, "");
    class_550062cfd8c9530eb144f4b88153221e.def("dimension_of_kernel", method_pointer_8c526c89001757c09798164a29f086e9, "");
    class_550062cfd8c9530eb144f4b88153221e.def("is_injective", method_pointer_e3b8813190f05619ae1ed6c95b5c21e6, "");
    class_550062cfd8c9530eb144f4b88153221e.def("is_surjective", method_pointer_1b4941f38fed5d159d660f2243fba78f, "");
    class_550062cfd8c9530eb144f4b88153221e.def("is_invertible", method_pointer_29737d075c3a5876a809ac961e9095fc, "");
    class_550062cfd8c9530eb144f4b88153221e.def("reconstructed_matrix", method_pointer_e1b714f0248a55888e14c881cdd207f3, "");
    class_550062cfd8c9530eb144f4b88153221e.def("rows", method_pointer_bceb9f4ff9025b35ab4f0f848ae2e712, "");
    class_550062cfd8c9530eb144f4b88153221e.def("cols", method_pointer_3103a0c08f36526693a8c7bfadd95e0d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > >();
    }

}