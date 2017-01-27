#include "_ieigen.h"


namespace autowig
{
    void method_decorator_25e79bdc7f5c59cb850d8cc9585b5809(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_ab5322a0318552b58742fed6f3baab69(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_1ebbbab11f6a5927828ff5a36ef7fc5c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c0ce8bac45075b5280da6fe362b015f8)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_9c7649aec1855dde8c25e26fea14881e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_4e10b9c274ff54e78155bf908fb4d140)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_7539f32bcdc750cba7ffa18f429965e2)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::permutationP;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_343dd1df63ec54399d1727b15765a3ff)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::permutationQ;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_488b30ff6f655aacbb1431fcd671a493)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rcond;
    struct ::std::complex< double >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_8ea773ea9d9552f2bb26161f86668a94)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_25e79bdc7f5c59cb850d8cc9585b5809)(double  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_ab5322a0318552b58742fed6f3baab69)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setThreshold;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_02451099ecf6572ea59e51dba4853b78)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c6a23ed40f255c3fade35f74fa3c0b6b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fd43ccae84e45087b5fb5181f8b99b7c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_4360ed8f63db562eb2965bba22675331)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_f0ead689934f5ee3a20e54a5ad1ae7e7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_1a715d28aca3575dab55a73f35d5c315)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isInvertible;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c5660417a30356f4aa34ba5f4990011b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_b936eab0b4e251739edaecece6038c39)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c9376bbb411d5a6ea9fabb283dbdcbca)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > > class_1ebbbab11f6a5927828ff5a36ef7fc5c("_FullPivLU_1ebbbab11f6a5927828ff5a36ef7fc5c", "", boost::python::no_init);
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def(boost::python::init<  >(""));
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def(boost::python::init< long int , long int  >(""));
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("matrix_lu", method_pointer_c0ce8bac45075b5280da6fe362b015f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("nonzero_pivots", method_pointer_9c7649aec1855dde8c25e26fea14881e, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("max_pivot", method_pointer_4e10b9c274ff54e78155bf908fb4d140, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("permutation_p", method_pointer_7539f32bcdc750cba7ffa18f429965e2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("permutation_q", method_pointer_343dd1df63ec54399d1727b15765a3ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("rcond", method_pointer_488b30ff6f655aacbb1431fcd671a493, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("determinant", method_pointer_8ea773ea9d9552f2bb26161f86668a94, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("set_threshold", method_pointer_25e79bdc7f5c59cb850d8cc9585b5809, boost::python::return_internal_reference<>(), "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("set_threshold", autowig::method_decorator_25e79bdc7f5c59cb850d8cc9585b5809);
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("set_threshold", method_pointer_ab5322a0318552b58742fed6f3baab69, boost::python::return_internal_reference<>(), "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("set_threshold", autowig::method_decorator_ab5322a0318552b58742fed6f3baab69);
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("threshold", method_pointer_02451099ecf6572ea59e51dba4853b78, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("rank", method_pointer_c6a23ed40f255c3fade35f74fa3c0b6b, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("dimension_of_kernel", method_pointer_fd43ccae84e45087b5fb5181f8b99b7c, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("is_injective", method_pointer_4360ed8f63db562eb2965bba22675331, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("is_surjective", method_pointer_f0ead689934f5ee3a20e54a5ad1ae7e7, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("is_invertible", method_pointer_1a715d28aca3575dab55a73f35d5c315, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("reconstructed_matrix", method_pointer_c5660417a30356f4aa34ba5f4990011b, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("rows", method_pointer_b936eab0b4e251739edaecece6038c39, "");
    class_1ebbbab11f6a5927828ff5a36ef7fc5c.def("cols", method_pointer_c9376bbb411d5a6ea9fabb283dbdcbca, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > >();
    }

}