#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a178dcb6125c5748b87933b7333ff1f7(class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_619c215c42095a5ba899b96467b0b66c(class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_426d31c9780a547fa913205ac605e6e4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_38150f32a78052e099ae479479f340d2)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_823ebb5c0db55f3ba28e100e7697e739)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d638544474e45e7c8973a8979fefa625)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_fc15814a487f5eb0aecd62827eb30c34)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::permutationP;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a59c28e43b9d56499fbfe921a7dd4703)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::permutationQ;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_3d1fdee42a2a5b0a9c8510e00f9fc898)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rcond;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_489103fc77165012b4ddc027ef3f7ea2)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a178dcb6125c5748b87933b7333ff1f7)(float  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_619c215c42095a5ba899b96467b0b66c)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setThreshold;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_8b452460dba8584dbc85413513f95f34)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_4972b29d8ab8512c98b5ec11dbd22af7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_af83e5eb7d83516cb9dde66c2f749495)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_1a020c398c0653c9921a2276c15451c1)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_7af829b8e6b6560b9c2a14c7655cbbad)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_520d48d9adf55def906955e2043b27de)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isInvertible;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_b9cae76963205691a967930d674bb508)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_f2705d74b8585f1793d33a8d1e84fde7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_96f5ceb828c45884a89a5080794a5fe3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > > class_426d31c9780a547fa913205ac605e6e4("_FullPivLU_426d31c9780a547fa913205ac605e6e4", "", boost::python::no_init);
    class_426d31c9780a547fa913205ac605e6e4.def(boost::python::init<  >(""));
    class_426d31c9780a547fa913205ac605e6e4.def(boost::python::init< long int , long int  >(""));
    class_426d31c9780a547fa913205ac605e6e4.def("matrix_lu", method_pointer_38150f32a78052e099ae479479f340d2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_426d31c9780a547fa913205ac605e6e4.def("nonzero_pivots", method_pointer_823ebb5c0db55f3ba28e100e7697e739, "");
    class_426d31c9780a547fa913205ac605e6e4.def("max_pivot", method_pointer_d638544474e45e7c8973a8979fefa625, "");
    class_426d31c9780a547fa913205ac605e6e4.def("permutation_p", method_pointer_fc15814a487f5eb0aecd62827eb30c34, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_426d31c9780a547fa913205ac605e6e4.def("permutation_q", method_pointer_a59c28e43b9d56499fbfe921a7dd4703, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_426d31c9780a547fa913205ac605e6e4.def("rcond", method_pointer_3d1fdee42a2a5b0a9c8510e00f9fc898, "");
    class_426d31c9780a547fa913205ac605e6e4.def("determinant", method_pointer_489103fc77165012b4ddc027ef3f7ea2, "");
    class_426d31c9780a547fa913205ac605e6e4.def("set_threshold", method_pointer_a178dcb6125c5748b87933b7333ff1f7, boost::python::return_internal_reference<>(), "");
    class_426d31c9780a547fa913205ac605e6e4.def("set_threshold", autowig::method_decorator_a178dcb6125c5748b87933b7333ff1f7);
    class_426d31c9780a547fa913205ac605e6e4.def("set_threshold", method_pointer_619c215c42095a5ba899b96467b0b66c, boost::python::return_internal_reference<>(), "");
    class_426d31c9780a547fa913205ac605e6e4.def("set_threshold", autowig::method_decorator_619c215c42095a5ba899b96467b0b66c);
    class_426d31c9780a547fa913205ac605e6e4.def("threshold", method_pointer_8b452460dba8584dbc85413513f95f34, "");
    class_426d31c9780a547fa913205ac605e6e4.def("rank", method_pointer_4972b29d8ab8512c98b5ec11dbd22af7, "");
    class_426d31c9780a547fa913205ac605e6e4.def("dimension_of_kernel", method_pointer_af83e5eb7d83516cb9dde66c2f749495, "");
    class_426d31c9780a547fa913205ac605e6e4.def("is_injective", method_pointer_1a020c398c0653c9921a2276c15451c1, "");
    class_426d31c9780a547fa913205ac605e6e4.def("is_surjective", method_pointer_7af829b8e6b6560b9c2a14c7655cbbad, "");
    class_426d31c9780a547fa913205ac605e6e4.def("is_invertible", method_pointer_520d48d9adf55def906955e2043b27de, "");
    class_426d31c9780a547fa913205ac605e6e4.def("reconstructed_matrix", method_pointer_b9cae76963205691a967930d674bb508, "");
    class_426d31c9780a547fa913205ac605e6e4.def("rows", method_pointer_f2705d74b8585f1793d33a8d1e84fde7, "");
    class_426d31c9780a547fa913205ac605e6e4.def("cols", method_pointer_96f5ceb828c45884a89a5080794a5fe3, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > >();
    }

}