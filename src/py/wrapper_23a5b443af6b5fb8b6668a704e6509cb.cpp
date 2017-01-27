#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d1f13d793bfc5367ac4105c06e900862(class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_d7004517952e5f96be944c419cf3f716(class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_23a5b443af6b5fb8b6668a704e6509cb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7462bc421b7151f29d1af26a8dbc56fe)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9564d1d0f2b35fd89c800fc3bbd33f13)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9eb97b6954fa5b45930a8bb9f8ce099b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_13d8bc2ff97e5d268e4f96cd662e8a45)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::permutationP;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_4adee20fa7915e1b88afc498f94e6253)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::permutationQ;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_a045e00e54ef5ce583ef9c23b05d07e7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rcond;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_fe63fd96bc3350668462c49a500d8deb)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_d1f13d793bfc5367ac4105c06e900862)(float  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_d7004517952e5f96be944c419cf3f716)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setThreshold;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_319596ac75a85ed9919b87a3b1671321)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_336eebd3ab4250eba03d194109149f8e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_17e4c4bbb19256089bdcb1d61609f949)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_0e289e4ae3f650f7a19eb1103cecc818)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7b47ce482a945a58a98ff7e7f4055ae7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_f16713861334598bab2a287f83cfa07d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isInvertible;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_3c9c77f6caf15cc39f900237a95ede89)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_5883214a8a8653c6b3a6516cad2e5382)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_b2b27206289d506eb796756873b01d04)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > > class_23a5b443af6b5fb8b6668a704e6509cb("_FullPivLU_23a5b443af6b5fb8b6668a704e6509cb", "", boost::python::no_init);
    class_23a5b443af6b5fb8b6668a704e6509cb.def(boost::python::init<  >(""));
    class_23a5b443af6b5fb8b6668a704e6509cb.def(boost::python::init< long int , long int  >(""));
    class_23a5b443af6b5fb8b6668a704e6509cb.def("matrix_lu", method_pointer_7462bc421b7151f29d1af26a8dbc56fe, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("nonzero_pivots", method_pointer_9564d1d0f2b35fd89c800fc3bbd33f13, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("max_pivot", method_pointer_9eb97b6954fa5b45930a8bb9f8ce099b, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("permutation_p", method_pointer_13d8bc2ff97e5d268e4f96cd662e8a45, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("permutation_q", method_pointer_4adee20fa7915e1b88afc498f94e6253, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("rcond", method_pointer_a045e00e54ef5ce583ef9c23b05d07e7, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("determinant", method_pointer_fe63fd96bc3350668462c49a500d8deb, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("set_threshold", method_pointer_d1f13d793bfc5367ac4105c06e900862, boost::python::return_internal_reference<>(), "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("set_threshold", autowig::method_decorator_d1f13d793bfc5367ac4105c06e900862);
    class_23a5b443af6b5fb8b6668a704e6509cb.def("set_threshold", method_pointer_d7004517952e5f96be944c419cf3f716, boost::python::return_internal_reference<>(), "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("set_threshold", autowig::method_decorator_d7004517952e5f96be944c419cf3f716);
    class_23a5b443af6b5fb8b6668a704e6509cb.def("threshold", method_pointer_319596ac75a85ed9919b87a3b1671321, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("rank", method_pointer_336eebd3ab4250eba03d194109149f8e, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("dimension_of_kernel", method_pointer_17e4c4bbb19256089bdcb1d61609f949, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("is_injective", method_pointer_0e289e4ae3f650f7a19eb1103cecc818, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("is_surjective", method_pointer_7b47ce482a945a58a98ff7e7f4055ae7, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("is_invertible", method_pointer_f16713861334598bab2a287f83cfa07d, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("reconstructed_matrix", method_pointer_3c9c77f6caf15cc39f900237a95ede89, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("rows", method_pointer_5883214a8a8653c6b3a6516cad2e5382, "");
    class_23a5b443af6b5fb8b6668a704e6509cb.def("cols", method_pointer_b2b27206289d506eb796756873b01d04, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > >();
    }

}