#include "_linalg.h"



namespace autowig
{

    void method_decorator_9bef1beb98605f0e8041da9b280e5d2b(class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const & param_in_0, const class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out) { instance.compute(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile * get_pointer<class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile >(class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_eda62cceb5ae59fda62d490974dc88c6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9bef1beb98605f0e8041da9b280e5d2b)(::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const &) = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::compute;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_940cc526321f55aca072a70d45536f2d)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixLU;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::PermutationType const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c51efb5221ab58a997d4ab1d9e7473d1)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9f2338ae478e56a2915cdb00108c4a87)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::determinant;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ff35f5e0f94b58f3bf94657b02544832)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Index  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_35a5a003217552a4b8f709d1c307056e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Index  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_00e65e636a385e63a97f21d24fe73ada)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type > class_eda62cceb5ae59fda62d490974dc88c6("_PartialPivLU_eda62cceb5ae59fda62d490974dc88c6", "", boost::python::no_init);
    class_eda62cceb5ae59fda62d490974dc88c6.def("compute", method_pointer_9bef1beb98605f0e8041da9b280e5d2b, boost::python::return_internal_reference<>(), "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("compute", autowig::method_decorator_9bef1beb98605f0e8041da9b280e5d2b);
    class_eda62cceb5ae59fda62d490974dc88c6.def("matrix_lu", method_pointer_940cc526321f55aca072a70d45536f2d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("permutation_p", method_pointer_c51efb5221ab58a997d4ab1d9e7473d1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("determinant", method_pointer_9f2338ae478e56a2915cdb00108c4a87, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("reconstructed_matrix", method_pointer_ff35f5e0f94b58f3bf94657b02544832, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("rows", method_pointer_35a5a003217552a4b8f709d1c307056e, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("cols", method_pointer_00e65e636a385e63a97f21d24fe73ada, "");

}