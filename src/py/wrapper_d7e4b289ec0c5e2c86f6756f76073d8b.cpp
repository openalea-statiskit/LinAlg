#include "_ieigen.h"


namespace autowig
{
    void method_decorator_4eeb1a45dde858c08e876902e05cc8ac(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, double  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_ee8ad3adc67256ddadde3db5475dfdb1(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_d7e4b289ec0c5e2c86f6756f76073d8b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9b6c9bc34ed7581cbbc6e12ca5a40775)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f2008827c6d05579ba85b97c0e8c971f)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_39ac9046dffe5f69b26712ce3e041cf7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::maxPivot;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ebd31bfe6eae589ba7467077007ec806)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::permutationP;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2623b31a8b485365a076556eb3db0f0e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::permutationQ;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_205e1e4f6e9f5c0297446af3ce6b14e7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rcond;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_7db6e6b07eec520bbf32690eccdb4ce4)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4eeb1a45dde858c08e876902e05cc8ac)(double  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ee8ad3adc67256ddadde3db5475dfdb1)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setThreshold;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d5533978374c56d0ab6636e6b571e5b1)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ba764ccf891c5930bbcd736b1452b152)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_a4ddb27aa1125fca8bf843f9bea9557d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_24b05a74183b567ba6b6a7091dd9bfe7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_573e49aa04015c20ab4da8d5f7c32306)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_666a66fdd39e53579d0abbb527d90228)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isInvertible;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bb92c36ab53858199438156c659fbe7e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bfa8f4283a5e5e0c8f7b09615995177b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_dca806b9b7225afdb176d2d96ced1203)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > > class_d7e4b289ec0c5e2c86f6756f76073d8b("_FullPivLU_d7e4b289ec0c5e2c86f6756f76073d8b", "", boost::python::no_init);
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def(boost::python::init<  >(""));
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def(boost::python::init< long int , long int  >(""));
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("matrix_lu", method_pointer_9b6c9bc34ed7581cbbc6e12ca5a40775, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("nonzero_pivots", method_pointer_f2008827c6d05579ba85b97c0e8c971f, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("max_pivot", method_pointer_39ac9046dffe5f69b26712ce3e041cf7, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("permutation_p", method_pointer_ebd31bfe6eae589ba7467077007ec806, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("permutation_q", method_pointer_2623b31a8b485365a076556eb3db0f0e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("rcond", method_pointer_205e1e4f6e9f5c0297446af3ce6b14e7, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("determinant", method_pointer_7db6e6b07eec520bbf32690eccdb4ce4, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("set_threshold", method_pointer_4eeb1a45dde858c08e876902e05cc8ac, boost::python::return_internal_reference<>(), "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("set_threshold", autowig::method_decorator_4eeb1a45dde858c08e876902e05cc8ac);
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("set_threshold", method_pointer_ee8ad3adc67256ddadde3db5475dfdb1, boost::python::return_internal_reference<>(), "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("set_threshold", autowig::method_decorator_ee8ad3adc67256ddadde3db5475dfdb1);
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("threshold", method_pointer_d5533978374c56d0ab6636e6b571e5b1, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("rank", method_pointer_ba764ccf891c5930bbcd736b1452b152, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("dimension_of_kernel", method_pointer_a4ddb27aa1125fca8bf843f9bea9557d, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("is_injective", method_pointer_24b05a74183b567ba6b6a7091dd9bfe7, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("is_surjective", method_pointer_573e49aa04015c20ab4da8d5f7c32306, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("is_invertible", method_pointer_666a66fdd39e53579d0abbb527d90228, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("reconstructed_matrix", method_pointer_bb92c36ab53858199438156c659fbe7e, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("rows", method_pointer_bfa8f4283a5e5e0c8f7b09615995177b, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("cols", method_pointer_dca806b9b7225afdb176d2d96ced1203, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > >();
    }

}