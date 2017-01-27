#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c3efb9fe5c195e1bbc5b005d083bbd88(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_3424bc060a255f979e036d0bd7a2ad26(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > const & instance, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_e331dd0ddf015841805634a8df390dc0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_c3efb9fe5c195e1bbc5b005d083bbd88)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_2e91f233a13c5afdbac7351139e129b8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_3424bc060a255f979e036d0bd7a2ad26)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_0da37dc6536f512cba6dcc98660de910)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_a33c3cf86e865edcb4ff53759e2272bd)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_8a20548001ea5313a9885af8d7e0f100)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_18eed93ed522562cb94525c73a760a35)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > > class_e331dd0ddf015841805634a8df390dc0("_EigenBase_e331dd0ddf015841805634a8df390dc0", "", boost::python::no_init);
    class_e331dd0ddf015841805634a8df390dc0.def("derived", method_pointer_c3efb9fe5c195e1bbc5b005d083bbd88, boost::python::return_internal_reference<>(), "");
    class_e331dd0ddf015841805634a8df390dc0.def("derived", autowig::method_decorator_c3efb9fe5c195e1bbc5b005d083bbd88);
    class_e331dd0ddf015841805634a8df390dc0.def("derived", method_pointer_2e91f233a13c5afdbac7351139e129b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e331dd0ddf015841805634a8df390dc0.def("const_cast_derived", method_pointer_3424bc060a255f979e036d0bd7a2ad26, boost::python::return_internal_reference<>(), "");
    class_e331dd0ddf015841805634a8df390dc0.def("const_cast_derived", autowig::method_decorator_3424bc060a255f979e036d0bd7a2ad26);
    class_e331dd0ddf015841805634a8df390dc0.def("const_derived", method_pointer_0da37dc6536f512cba6dcc98660de910, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e331dd0ddf015841805634a8df390dc0.def("rows", method_pointer_a33c3cf86e865edcb4ff53759e2272bd, "");
    class_e331dd0ddf015841805634a8df390dc0.def("cols", method_pointer_8a20548001ea5313a9885af8d7e0f100, "");
    class_e331dd0ddf015841805634a8df390dc0.def("size", method_pointer_18eed93ed522562cb94525c73a760a35, "");

}