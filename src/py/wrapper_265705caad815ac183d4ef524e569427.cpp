#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b9a19df3e26457c8b10047d2653cdbdb(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_b0349b47889050a7aafbb706ec74b004(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_265705caad815ac183d4ef524e569427()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_54c9a44e41a65ef2a92d73a8886aa422)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_1f5c6ab691895fb0bad51f323d21d936)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_33589951acd45baf9d3eefe23b632a58)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_9ed77e79508e5d61bd8a37415a64ffa4)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::permutationP;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_456f9913afb55a2281afb21e051a8882)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::permutationQ;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_0f2c9a0e67c65e66bb58db50176323a4)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rcond;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_e7e802a6ece254bc9cf4c75e09b6acb7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b9a19df3e26457c8b10047d2653cdbdb)(double  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b0349b47889050a7aafbb706ec74b004)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setThreshold;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_492006524c0f54f6a9d20944218a5831)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_d6e6e012e11850a4b359a7fbf3159660)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_8664cbb5823952b289b8f45adc16e9ca)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a044a384370f5d0eb6638af41c218950)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_95b740b9f66d56b8bd6bca7cd05ec59f)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_d539df1475665e9c8a6b5b4b1ca3cc64)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isInvertible;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_63df8f0221455f91bf7e1eabf685df8c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_539c3cec148751609ca13a9d39b48d14)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_e093e776d62a52a6aa7ed06b5a02545c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > > class_265705caad815ac183d4ef524e569427("_FullPivLU_265705caad815ac183d4ef524e569427", "", boost::python::no_init);
    class_265705caad815ac183d4ef524e569427.def(boost::python::init<  >(""));
    class_265705caad815ac183d4ef524e569427.def(boost::python::init< long int , long int  >(""));
    class_265705caad815ac183d4ef524e569427.def("matrix_lu", method_pointer_54c9a44e41a65ef2a92d73a8886aa422, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_265705caad815ac183d4ef524e569427.def("nonzero_pivots", method_pointer_1f5c6ab691895fb0bad51f323d21d936, "");
    class_265705caad815ac183d4ef524e569427.def("max_pivot", method_pointer_33589951acd45baf9d3eefe23b632a58, "");
    class_265705caad815ac183d4ef524e569427.def("permutation_p", method_pointer_9ed77e79508e5d61bd8a37415a64ffa4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_265705caad815ac183d4ef524e569427.def("permutation_q", method_pointer_456f9913afb55a2281afb21e051a8882, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_265705caad815ac183d4ef524e569427.def("rcond", method_pointer_0f2c9a0e67c65e66bb58db50176323a4, "");
    class_265705caad815ac183d4ef524e569427.def("determinant", method_pointer_e7e802a6ece254bc9cf4c75e09b6acb7, "");
    class_265705caad815ac183d4ef524e569427.def("set_threshold", method_pointer_b9a19df3e26457c8b10047d2653cdbdb, boost::python::return_internal_reference<>(), "");
    class_265705caad815ac183d4ef524e569427.def("set_threshold", autowig::method_decorator_b9a19df3e26457c8b10047d2653cdbdb);
    class_265705caad815ac183d4ef524e569427.def("set_threshold", method_pointer_b0349b47889050a7aafbb706ec74b004, boost::python::return_internal_reference<>(), "");
    class_265705caad815ac183d4ef524e569427.def("set_threshold", autowig::method_decorator_b0349b47889050a7aafbb706ec74b004);
    class_265705caad815ac183d4ef524e569427.def("threshold", method_pointer_492006524c0f54f6a9d20944218a5831, "");
    class_265705caad815ac183d4ef524e569427.def("rank", method_pointer_d6e6e012e11850a4b359a7fbf3159660, "");
    class_265705caad815ac183d4ef524e569427.def("dimension_of_kernel", method_pointer_8664cbb5823952b289b8f45adc16e9ca, "");
    class_265705caad815ac183d4ef524e569427.def("is_injective", method_pointer_a044a384370f5d0eb6638af41c218950, "");
    class_265705caad815ac183d4ef524e569427.def("is_surjective", method_pointer_95b740b9f66d56b8bd6bca7cd05ec59f, "");
    class_265705caad815ac183d4ef524e569427.def("is_invertible", method_pointer_d539df1475665e9c8a6b5b4b1ca3cc64, "");
    class_265705caad815ac183d4ef524e569427.def("reconstructed_matrix", method_pointer_63df8f0221455f91bf7e1eabf685df8c, "");
    class_265705caad815ac183d4ef524e569427.def("rows", method_pointer_539c3cec148751609ca13a9d39b48d14, "");
    class_265705caad815ac183d4ef524e569427.def("cols", method_pointer_e093e776d62a52a6aa7ed06b5a02545c, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > >();
    }

}