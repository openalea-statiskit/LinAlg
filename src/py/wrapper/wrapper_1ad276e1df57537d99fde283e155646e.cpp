#include "_linalg.h"



namespace autowig
{

    void method_decorator_92fdac87b983535580cbe0c0c4b0f003(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & instance, ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixType const & param_in_0, unsigned int  param_in_1, const class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out) { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_8b6681c8778f5465889bdd510788456b(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & instance, ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixType const & param_in_0, const class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & param_out) { instance.compute(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > const volatile * get_pointer<class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > const volatile >(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1ad276e1df57537d99fde283e155646e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_92fdac87b983535580cbe0c0c4b0f003)(::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixType const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_8b6681c8778f5465889bdd510788456b)(::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::MatrixType const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >, autowig::Held< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::Type, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > > > class_1ad276e1df57537d99fde283e155646e("_JacobiSVD_1ad276e1df57537d99fde283e155646e", "", boost::python::no_init);
    class_1ad276e1df57537d99fde283e155646e.def("compute", method_pointer_92fdac87b983535580cbe0c0c4b0f003, boost::python::return_internal_reference<>(), "Method performing the decomposition of given matrix using custom\noptions.\n\n:Parameters:\n  - `matrix` (:cpp:any:`::Eigen::Matrix<` double, -1, -1, 0, -1, -1 >) - the matrix to decompose\n  - `computationOptions` (:cpp:any:`unsigned` int) - optional parameter allowing to specify if you want full or thin U or V\n                                                     unitaries to be computed. By default, none is computed. This is a\n                                                     bit-field, the possible bits are #ComputeFullU, #ComputeThinU,\n                                                     #ComputeFullV, #ComputeThinV.\n                                                     \n                                                     Thin unitaries are only available if your matrix type has a Dynamic\n                                                     number of columns (for example MatrixXf). They also are not available\n                                                     with the (non-default) FullPivHouseholderQR preconditioner.\n\n:Return Type:\n    :cpp:any:`::Eigen::JacobiSVD<` class ::Eigen::Matrix<\n    double, -1, -1, 0, -1, -1 >, 2 >\n\n");
    class_1ad276e1df57537d99fde283e155646e.def("compute", autowig::method_decorator_92fdac87b983535580cbe0c0c4b0f003);
    class_1ad276e1df57537d99fde283e155646e.def("compute", method_pointer_8b6681c8778f5465889bdd510788456b, boost::python::return_internal_reference<>(), "Method performing the decomposition of given matrix using current\noptions.\n\n:Parameter:\n    `matrix` (:cpp:any:`::Eigen::Matrix<` double, -1, -1, 0, -1, -1 >) - the matrix to decompose\n                                                                         \n                                                                         This method uses the current :raw-latex:`\\a `computationOptions, as\n                                                                         already passed to the constructor or to compute(const MatrixType&,\n                                                                         unsigned int).\n\n:Return Type:\n    :cpp:any:`::Eigen::JacobiSVD<` class ::Eigen::Matrix<\n    double, -1, -1, 0, -1, -1 >, 2 >\n\n");
    class_1ad276e1df57537d99fde283e155646e.def("compute", autowig::method_decorator_8b6681c8778f5465889bdd510788456b);

    if(autowig::Held< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >::Type, autowig::Held< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > >::Type >();
    }

}