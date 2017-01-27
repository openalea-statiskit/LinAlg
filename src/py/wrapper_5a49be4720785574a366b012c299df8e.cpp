#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2f71e70edc0b506dbe7efee3ce010168(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_6f5db05ac9d5502785a0125a4ef62528(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_5a49be4720785574a366b012c299df8e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_a498e4700f155a628ea95446e0578c5a)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_3c8eab4b30c25b588af384e9d7a8b759)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e757e09dba075418a933a88930cfe47c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::maxPivot;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_c7c27e36509a55eca32a56498619ac00)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::permutationP;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_2db02032b19b5cd292289c8727da0b23)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::permutationQ;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_40d5c871c0815735a1bde19e3c0b410e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rcond;
    struct ::std::complex< float >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_bf1866881627586da8e85317388cc6ca)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_2f71e70edc0b506dbe7efee3ce010168)(float  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_6f5db05ac9d5502785a0125a4ef62528)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setThreshold;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_26c7076790655663b92fd023f4c26f69)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_8a49f5b258bf58468f6d4b9f45074ed5)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_92b77d187a19514cbf05819beb07c648)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_654730d783b3575e9c687b78f33a4667)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_471e3a0b62a15937aaa18f3552f29fa0)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_759d2da2ae995130a871a0e3bea642ec)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isInvertible;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_9934436651795b12ace510a3efdb79c3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_191ac11aeb3252fbbacaa4f4c7a0ad50)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_27e6a695340e51f68b394dab277b4cd6)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > > class_5a49be4720785574a366b012c299df8e("_FullPivLU_5a49be4720785574a366b012c299df8e", "", boost::python::no_init);
    class_5a49be4720785574a366b012c299df8e.def(boost::python::init<  >(""));
    class_5a49be4720785574a366b012c299df8e.def(boost::python::init< long int , long int  >(""));
    class_5a49be4720785574a366b012c299df8e.def("matrix_lu", method_pointer_a498e4700f155a628ea95446e0578c5a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5a49be4720785574a366b012c299df8e.def("nonzero_pivots", method_pointer_3c8eab4b30c25b588af384e9d7a8b759, "");
    class_5a49be4720785574a366b012c299df8e.def("max_pivot", method_pointer_e757e09dba075418a933a88930cfe47c, "");
    class_5a49be4720785574a366b012c299df8e.def("permutation_p", method_pointer_c7c27e36509a55eca32a56498619ac00, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5a49be4720785574a366b012c299df8e.def("permutation_q", method_pointer_2db02032b19b5cd292289c8727da0b23, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5a49be4720785574a366b012c299df8e.def("rcond", method_pointer_40d5c871c0815735a1bde19e3c0b410e, "");
    class_5a49be4720785574a366b012c299df8e.def("determinant", method_pointer_bf1866881627586da8e85317388cc6ca, "");
    class_5a49be4720785574a366b012c299df8e.def("set_threshold", method_pointer_2f71e70edc0b506dbe7efee3ce010168, boost::python::return_internal_reference<>(), "");
    class_5a49be4720785574a366b012c299df8e.def("set_threshold", autowig::method_decorator_2f71e70edc0b506dbe7efee3ce010168);
    class_5a49be4720785574a366b012c299df8e.def("set_threshold", method_pointer_6f5db05ac9d5502785a0125a4ef62528, boost::python::return_internal_reference<>(), "");
    class_5a49be4720785574a366b012c299df8e.def("set_threshold", autowig::method_decorator_6f5db05ac9d5502785a0125a4ef62528);
    class_5a49be4720785574a366b012c299df8e.def("threshold", method_pointer_26c7076790655663b92fd023f4c26f69, "");
    class_5a49be4720785574a366b012c299df8e.def("rank", method_pointer_8a49f5b258bf58468f6d4b9f45074ed5, "");
    class_5a49be4720785574a366b012c299df8e.def("dimension_of_kernel", method_pointer_92b77d187a19514cbf05819beb07c648, "");
    class_5a49be4720785574a366b012c299df8e.def("is_injective", method_pointer_654730d783b3575e9c687b78f33a4667, "");
    class_5a49be4720785574a366b012c299df8e.def("is_surjective", method_pointer_471e3a0b62a15937aaa18f3552f29fa0, "");
    class_5a49be4720785574a366b012c299df8e.def("is_invertible", method_pointer_759d2da2ae995130a871a0e3bea642ec, "");
    class_5a49be4720785574a366b012c299df8e.def("reconstructed_matrix", method_pointer_9934436651795b12ace510a3efdb79c3, "");
    class_5a49be4720785574a366b012c299df8e.def("rows", method_pointer_191ac11aeb3252fbbacaa4f4c7a0ad50, "");
    class_5a49be4720785574a366b012c299df8e.def("cols", method_pointer_27e6a695340e51f68b394dab277b4cd6, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > >();
    }

}