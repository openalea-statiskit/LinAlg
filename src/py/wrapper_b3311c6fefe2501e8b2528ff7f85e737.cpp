#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2078057262a059a0ae49958513fd1596(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_70353cd4c2c852cca0abe61f8a2bb75c(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > > & instance, float  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_1b96205fd7735e0ea05281721f387381(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_b3311c6fefe2501e8b2528ff7f85e737()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_2078057262a059a0ae49958513fd1596)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_dd78ddeb2c005523a345e8a2bbde36cc)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::derived;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_884f1daea3d458699dc0d79e55636a6f)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::matrixU;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_a6a993c012f856d9a21933f025511e98)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::matrixV;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_8422d16a91ad5b40afb66fff46c6e544)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_55f7688ad5105b4fb065b17c96149777)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_861e356a39a75d3babab594697a44ba4)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_70353cd4c2c852cca0abe61f8a2bb75c)(float  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_1b96205fd7735e0ea05281721f387381)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::setThreshold;
    float  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_34f8b6991d255ec9833a303661c1b9e8)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_bad4d8c339e05ae09228227a00de3fec)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_21c11f4465515940b2560d44ade08c08)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_8829847b2a3c53689767f4c174182d05)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_6a4fcd72dc1254aeaa4d9dc9e2fba052)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > > > > class_b3311c6fefe2501e8b2528ff7f85e737("_SVDBase_b3311c6fefe2501e8b2528ff7f85e737", "", boost::python::no_init);
    class_b3311c6fefe2501e8b2528ff7f85e737.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >  const & >(""));
    class_b3311c6fefe2501e8b2528ff7f85e737.def("derived", method_pointer_2078057262a059a0ae49958513fd1596, boost::python::return_internal_reference<>(), "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("derived", autowig::method_decorator_2078057262a059a0ae49958513fd1596);
    class_b3311c6fefe2501e8b2528ff7f85e737.def("derived", method_pointer_dd78ddeb2c005523a345e8a2bbde36cc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("matrix_u", method_pointer_884f1daea3d458699dc0d79e55636a6f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("matrix_v", method_pointer_a6a993c012f856d9a21933f025511e98, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("singular_values", method_pointer_8422d16a91ad5b40afb66fff46c6e544, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("nonzero_singular_values", method_pointer_55f7688ad5105b4fb065b17c96149777, "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("rank", method_pointer_861e356a39a75d3babab594697a44ba4, "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("set_threshold", method_pointer_70353cd4c2c852cca0abe61f8a2bb75c, boost::python::return_internal_reference<>(), "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("set_threshold", autowig::method_decorator_70353cd4c2c852cca0abe61f8a2bb75c);
    class_b3311c6fefe2501e8b2528ff7f85e737.def("set_threshold", method_pointer_1b96205fd7735e0ea05281721f387381, boost::python::return_internal_reference<>(), "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("set_threshold", autowig::method_decorator_1b96205fd7735e0ea05281721f387381);
    class_b3311c6fefe2501e8b2528ff7f85e737.def("threshold", method_pointer_34f8b6991d255ec9833a303661c1b9e8, "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("compute_u", method_pointer_bad4d8c339e05ae09228227a00de3fec, "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("compute_v", method_pointer_21c11f4465515940b2560d44ade08c08, "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("rows", method_pointer_8829847b2a3c53689767f4c174182d05, "");
    class_b3311c6fefe2501e8b2528ff7f85e737.def("cols", method_pointer_6a4fcd72dc1254aeaa4d9dc9e2fba052, "");

}