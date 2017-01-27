#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e88731c3b84558289e9a48db332451fd(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_024d802c5e115db1bb567e4cdadfbd5f(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > > & instance, float  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_45753fc63f625583abb77dca3d7457d4(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_ba0b024982ab5b49a8dc08ef8b31a1b6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_e88731c3b84558289e9a48db332451fd)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_b377864cc88a560fb4a37a53fb72ad97)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::derived;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_1ff0e1aed15754868321cf8ec0c031fb)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::matrixU;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_906d2c798e3f59498bb6541115232751)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::matrixV;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_0632fb1b0bf85214a132f3caf54c6d3e)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_5575b29a7a49553d9858a9ffd392405f)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_6b4224eb33f15b1d88aadafbed6544d2)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_024d802c5e115db1bb567e4cdadfbd5f)(float  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_45753fc63f625583abb77dca3d7457d4)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::setThreshold;
    float  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_c1030414c602587ab6764b588c4ace2d)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_8a61535635d5530dabeb6a1c5e352e53)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_30fef61ede5c529e919528bce5cb39b6)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_088dec7fb5d8575a8f537a200de62c87)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_8d318bdfeb065c338aa04cbf9c872c9c)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > > > > class_ba0b024982ab5b49a8dc08ef8b31a1b6("_SVDBase_ba0b024982ab5b49a8dc08ef8b31a1b6", "", boost::python::no_init);
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 2 > >  const & >(""));
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("derived", method_pointer_e88731c3b84558289e9a48db332451fd, boost::python::return_internal_reference<>(), "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("derived", autowig::method_decorator_e88731c3b84558289e9a48db332451fd);
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("derived", method_pointer_b377864cc88a560fb4a37a53fb72ad97, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("matrix_u", method_pointer_1ff0e1aed15754868321cf8ec0c031fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("matrix_v", method_pointer_906d2c798e3f59498bb6541115232751, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("singular_values", method_pointer_0632fb1b0bf85214a132f3caf54c6d3e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("nonzero_singular_values", method_pointer_5575b29a7a49553d9858a9ffd392405f, "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("rank", method_pointer_6b4224eb33f15b1d88aadafbed6544d2, "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("set_threshold", method_pointer_024d802c5e115db1bb567e4cdadfbd5f, boost::python::return_internal_reference<>(), "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("set_threshold", autowig::method_decorator_024d802c5e115db1bb567e4cdadfbd5f);
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("set_threshold", method_pointer_45753fc63f625583abb77dca3d7457d4, boost::python::return_internal_reference<>(), "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("set_threshold", autowig::method_decorator_45753fc63f625583abb77dca3d7457d4);
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("threshold", method_pointer_c1030414c602587ab6764b588c4ace2d, "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("compute_u", method_pointer_8a61535635d5530dabeb6a1c5e352e53, "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("compute_v", method_pointer_30fef61ede5c529e919528bce5cb39b6, "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("rows", method_pointer_088dec7fb5d8575a8f537a200de62c87, "");
    class_ba0b024982ab5b49a8dc08ef8b31a1b6.def("cols", method_pointer_8d318bdfeb065c338aa04cbf9c872c9c, "");

}