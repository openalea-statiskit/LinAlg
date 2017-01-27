#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e3cb7cc24b7e55f3a48d8c58e4777d58(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_5b1a4aa0361c5d79b6fc80bf12453ce2(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_73a79b3d31a85ddc89c2e190482f24f4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_e3cb7cc24b7e55f3a48d8c58e4777d58)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_de93bf1127ba5fafab682b3674339d88)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_5b1a4aa0361c5d79b6fc80bf12453ce2)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_770d8b804ece512eac1d1417fef81c04)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_125e1d8f350b5f0599efbb5f355afe49)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_2a8f613f24f2507492c0a6c4d35aae54)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > > >::*method_pointer_30b6ce65dc7d512f91a64f003969269b)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > > class_73a79b3d31a85ddc89c2e190482f24f4("_EigenBase_73a79b3d31a85ddc89c2e190482f24f4", "", boost::python::no_init);
    class_73a79b3d31a85ddc89c2e190482f24f4.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >  const & >(""));
    class_73a79b3d31a85ddc89c2e190482f24f4.def("derived", method_pointer_e3cb7cc24b7e55f3a48d8c58e4777d58, boost::python::return_internal_reference<>(), "");
    class_73a79b3d31a85ddc89c2e190482f24f4.def("derived", autowig::method_decorator_e3cb7cc24b7e55f3a48d8c58e4777d58);
    class_73a79b3d31a85ddc89c2e190482f24f4.def("derived", method_pointer_de93bf1127ba5fafab682b3674339d88, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_73a79b3d31a85ddc89c2e190482f24f4.def("const_cast_derived", method_pointer_5b1a4aa0361c5d79b6fc80bf12453ce2, boost::python::return_internal_reference<>(), "");
    class_73a79b3d31a85ddc89c2e190482f24f4.def("const_cast_derived", autowig::method_decorator_5b1a4aa0361c5d79b6fc80bf12453ce2);
    class_73a79b3d31a85ddc89c2e190482f24f4.def("const_derived", method_pointer_770d8b804ece512eac1d1417fef81c04, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_73a79b3d31a85ddc89c2e190482f24f4.def("rows", method_pointer_125e1d8f350b5f0599efbb5f355afe49, "");
    class_73a79b3d31a85ddc89c2e190482f24f4.def("cols", method_pointer_2a8f613f24f2507492c0a6c4d35aae54, "");
    class_73a79b3d31a85ddc89c2e190482f24f4.def("size", method_pointer_30b6ce65dc7d512f91a64f003969269b, "");

}