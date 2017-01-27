#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c9b6a3db97ed5f8c84493692196811aa(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_0b8ce394e24b5f85bf411594096b1f35(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_b0501b2a690552a598dbc2e70412d032()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b4ff2ff6ed245c83b80058173ea9d908)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_669928a091935f8eb3b92cf2ac512bbb)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f850ed6d2f3a57cea5b1ebd4810313ab)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_92a47214198a5303afe0d5253149b228)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::permutationP;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_a0344bdb2a8f5f1b8cbd4bdcebefe6f3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::permutationQ;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_a3bb272eb05c5d079dabf2c3fef9e744)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rcond;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f72ecb9632c853cab1432aff9b711b3d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_c9b6a3db97ed5f8c84493692196811aa)(double  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_0b8ce394e24b5f85bf411594096b1f35)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setThreshold;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_16ef4ef897ce58a18cfbbaca50d641b8)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_5e8f67ca855f5e98b33da17caf789351)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_692c4b1240be5591bb3b1711578aab5a)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_148931fd88c35919a60edc9dc8162785)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b8028b7ec7f3556996b07e89267ed1ae)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_c0dce2d5fa2d5204b59d0173286d6c56)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isInvertible;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_03acd15d8f785f98a53546b115aa4a7d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_74743a5c703f597e8c0551612407d765)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d883196d654750bdb2d55049a36b537c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > > class_b0501b2a690552a598dbc2e70412d032("_FullPivLU_b0501b2a690552a598dbc2e70412d032", "", boost::python::no_init);
    class_b0501b2a690552a598dbc2e70412d032.def(boost::python::init<  >(""));
    class_b0501b2a690552a598dbc2e70412d032.def(boost::python::init< long int , long int  >(""));
    class_b0501b2a690552a598dbc2e70412d032.def("matrix_lu", method_pointer_b4ff2ff6ed245c83b80058173ea9d908, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b0501b2a690552a598dbc2e70412d032.def("nonzero_pivots", method_pointer_669928a091935f8eb3b92cf2ac512bbb, "");
    class_b0501b2a690552a598dbc2e70412d032.def("max_pivot", method_pointer_f850ed6d2f3a57cea5b1ebd4810313ab, "");
    class_b0501b2a690552a598dbc2e70412d032.def("permutation_p", method_pointer_92a47214198a5303afe0d5253149b228, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b0501b2a690552a598dbc2e70412d032.def("permutation_q", method_pointer_a0344bdb2a8f5f1b8cbd4bdcebefe6f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b0501b2a690552a598dbc2e70412d032.def("rcond", method_pointer_a3bb272eb05c5d079dabf2c3fef9e744, "");
    class_b0501b2a690552a598dbc2e70412d032.def("determinant", method_pointer_f72ecb9632c853cab1432aff9b711b3d, "");
    class_b0501b2a690552a598dbc2e70412d032.def("set_threshold", method_pointer_c9b6a3db97ed5f8c84493692196811aa, boost::python::return_internal_reference<>(), "");
    class_b0501b2a690552a598dbc2e70412d032.def("set_threshold", autowig::method_decorator_c9b6a3db97ed5f8c84493692196811aa);
    class_b0501b2a690552a598dbc2e70412d032.def("set_threshold", method_pointer_0b8ce394e24b5f85bf411594096b1f35, boost::python::return_internal_reference<>(), "");
    class_b0501b2a690552a598dbc2e70412d032.def("set_threshold", autowig::method_decorator_0b8ce394e24b5f85bf411594096b1f35);
    class_b0501b2a690552a598dbc2e70412d032.def("threshold", method_pointer_16ef4ef897ce58a18cfbbaca50d641b8, "");
    class_b0501b2a690552a598dbc2e70412d032.def("rank", method_pointer_5e8f67ca855f5e98b33da17caf789351, "");
    class_b0501b2a690552a598dbc2e70412d032.def("dimension_of_kernel", method_pointer_692c4b1240be5591bb3b1711578aab5a, "");
    class_b0501b2a690552a598dbc2e70412d032.def("is_injective", method_pointer_148931fd88c35919a60edc9dc8162785, "");
    class_b0501b2a690552a598dbc2e70412d032.def("is_surjective", method_pointer_b8028b7ec7f3556996b07e89267ed1ae, "");
    class_b0501b2a690552a598dbc2e70412d032.def("is_invertible", method_pointer_c0dce2d5fa2d5204b59d0173286d6c56, "");
    class_b0501b2a690552a598dbc2e70412d032.def("reconstructed_matrix", method_pointer_03acd15d8f785f98a53546b115aa4a7d, "");
    class_b0501b2a690552a598dbc2e70412d032.def("rows", method_pointer_74743a5c703f597e8c0551612407d765, "");
    class_b0501b2a690552a598dbc2e70412d032.def("cols", method_pointer_d883196d654750bdb2d55049a36b537c, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > >();
    }

}