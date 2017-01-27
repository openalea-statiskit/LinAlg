#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d5cae2c764ca50e6a218afb2cf076ebe(class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_ef458540a4f753f4b585721ff0393756(class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_865eaf615a415078a127ecf7b2e22448()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ad1f5bd4ddda552e838fa87e39fe4bbf)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_066015596ba057768863935145dfb04c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_6cedb63cbdb250fab208ee519b7fce8c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_a39fe8151928563d8ec47a724f4782ab)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::permutationP;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_9d22eea4e855531aaee9dfad2827f0e3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::permutationQ;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_7e5c90ca00bb5b3796a74dfb9d16738d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rcond;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_09924275caad51bd894adc43c13bab2e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_d5cae2c764ca50e6a218afb2cf076ebe)(float  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ef458540a4f753f4b585721ff0393756)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setThreshold;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_769867222b505ec588bc751eb42c479d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_34a2b597daaf5f7fb8a6eca6e2179914)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_08738dc5825f5d389a31513336db3dae)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_7acf0a06a7f55f8d823dd59cdf25d574)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_bb92a29db594507b8c496913722216c1)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_6e3a01cc473a55f3be61940a345bdccd)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isInvertible;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_6f316214a7dd5475b7bb24b82e6a6e64)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_9156363fb4b5591db239694dc6af4f1c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_c1396a1347c256f0bc8595f190953213)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > > class_865eaf615a415078a127ecf7b2e22448("_FullPivLU_865eaf615a415078a127ecf7b2e22448", "", boost::python::no_init);
    class_865eaf615a415078a127ecf7b2e22448.def(boost::python::init<  >(""));
    class_865eaf615a415078a127ecf7b2e22448.def(boost::python::init< long int , long int  >(""));
    class_865eaf615a415078a127ecf7b2e22448.def("matrix_lu", method_pointer_ad1f5bd4ddda552e838fa87e39fe4bbf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_865eaf615a415078a127ecf7b2e22448.def("nonzero_pivots", method_pointer_066015596ba057768863935145dfb04c, "");
    class_865eaf615a415078a127ecf7b2e22448.def("max_pivot", method_pointer_6cedb63cbdb250fab208ee519b7fce8c, "");
    class_865eaf615a415078a127ecf7b2e22448.def("permutation_p", method_pointer_a39fe8151928563d8ec47a724f4782ab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_865eaf615a415078a127ecf7b2e22448.def("permutation_q", method_pointer_9d22eea4e855531aaee9dfad2827f0e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_865eaf615a415078a127ecf7b2e22448.def("rcond", method_pointer_7e5c90ca00bb5b3796a74dfb9d16738d, "");
    class_865eaf615a415078a127ecf7b2e22448.def("determinant", method_pointer_09924275caad51bd894adc43c13bab2e, "");
    class_865eaf615a415078a127ecf7b2e22448.def("set_threshold", method_pointer_d5cae2c764ca50e6a218afb2cf076ebe, boost::python::return_internal_reference<>(), "");
    class_865eaf615a415078a127ecf7b2e22448.def("set_threshold", autowig::method_decorator_d5cae2c764ca50e6a218afb2cf076ebe);
    class_865eaf615a415078a127ecf7b2e22448.def("set_threshold", method_pointer_ef458540a4f753f4b585721ff0393756, boost::python::return_internal_reference<>(), "");
    class_865eaf615a415078a127ecf7b2e22448.def("set_threshold", autowig::method_decorator_ef458540a4f753f4b585721ff0393756);
    class_865eaf615a415078a127ecf7b2e22448.def("threshold", method_pointer_769867222b505ec588bc751eb42c479d, "");
    class_865eaf615a415078a127ecf7b2e22448.def("rank", method_pointer_34a2b597daaf5f7fb8a6eca6e2179914, "");
    class_865eaf615a415078a127ecf7b2e22448.def("dimension_of_kernel", method_pointer_08738dc5825f5d389a31513336db3dae, "");
    class_865eaf615a415078a127ecf7b2e22448.def("is_injective", method_pointer_7acf0a06a7f55f8d823dd59cdf25d574, "");
    class_865eaf615a415078a127ecf7b2e22448.def("is_surjective", method_pointer_bb92a29db594507b8c496913722216c1, "");
    class_865eaf615a415078a127ecf7b2e22448.def("is_invertible", method_pointer_6e3a01cc473a55f3be61940a345bdccd, "");
    class_865eaf615a415078a127ecf7b2e22448.def("reconstructed_matrix", method_pointer_6f316214a7dd5475b7bb24b82e6a6e64, "");
    class_865eaf615a415078a127ecf7b2e22448.def("rows", method_pointer_9156363fb4b5591db239694dc6af4f1c, "");
    class_865eaf615a415078a127ecf7b2e22448.def("cols", method_pointer_c1396a1347c256f0bc8595f190953213, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > >();
    }

}