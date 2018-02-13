#include "_linalg.h"



namespace autowig
{

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
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::PermutationType const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c51efb5221ab58a997d4ab1d9e7473d1)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::permutationP;
    ::Eigen::Index  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_35a5a003217552a4b8f709d1c307056e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_00e65e636a385e63a97f21d24fe73ada)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > > class_eda62cceb5ae59fda62d490974dc88c6("_PartialPivLU_eda62cceb5ae59fda62d490974dc88c6", "", boost::python::no_init);
    class_eda62cceb5ae59fda62d490974dc88c6.def(boost::python::init<  >(""));
    class_eda62cceb5ae59fda62d490974dc88c6.def(boost::python::init< ::Eigen::Index  >(""));
    class_eda62cceb5ae59fda62d490974dc88c6.def(boost::python::init< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & >(""));
    class_eda62cceb5ae59fda62d490974dc88c6.def("permutation_p", method_pointer_c51efb5221ab58a997d4ab1d9e7473d1, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the permutation matrix P.\n\n:Return Type:\n    :cpp:any:`::Eigen::PermutationMatrix<` -1, -1, int >\n\n");
    class_eda62cceb5ae59fda62d490974dc88c6.def("rows", method_pointer_35a5a003217552a4b8f709d1c307056e, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("cols", method_pointer_00e65e636a385e63a97f21d24fe73ada, "");

    if(autowig::Held< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, autowig::Held< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type >();
    }

}