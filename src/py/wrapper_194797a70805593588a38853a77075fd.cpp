#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fe32c22f209a515cb137b5855ce94595(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_5c18b4b868c451bca9631fba44d77d41(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_194797a70805593588a38853a77075fd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_fe32c22f209a515cb137b5855ce94595)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_d2b437ec0e18595aac2eb26aa414257e)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_5c18b4b868c451bca9631fba44d77d41)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_926937083ca150ac83e2aee892ec709e)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_09a41819f1655cd3b04a378fd3c7940d)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_4f10e54449b155f58b7c3dd5c9779736)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_59f9d01b42255b8bac389d518ac87753)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > > class_194797a70805593588a38853a77075fd("_EigenBase_194797a70805593588a38853a77075fd", "", boost::python::no_init);
    class_194797a70805593588a38853a77075fd.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >  const & >(""));
    class_194797a70805593588a38853a77075fd.def("derived", method_pointer_fe32c22f209a515cb137b5855ce94595, boost::python::return_internal_reference<>(), "");
    class_194797a70805593588a38853a77075fd.def("derived", autowig::method_decorator_fe32c22f209a515cb137b5855ce94595);
    class_194797a70805593588a38853a77075fd.def("derived", method_pointer_d2b437ec0e18595aac2eb26aa414257e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_194797a70805593588a38853a77075fd.def("const_cast_derived", method_pointer_5c18b4b868c451bca9631fba44d77d41, boost::python::return_internal_reference<>(), "");
    class_194797a70805593588a38853a77075fd.def("const_cast_derived", autowig::method_decorator_5c18b4b868c451bca9631fba44d77d41);
    class_194797a70805593588a38853a77075fd.def("const_derived", method_pointer_926937083ca150ac83e2aee892ec709e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_194797a70805593588a38853a77075fd.def("rows", method_pointer_09a41819f1655cd3b04a378fd3c7940d, "");
    class_194797a70805593588a38853a77075fd.def("cols", method_pointer_4f10e54449b155f58b7c3dd5c9779736, "");
    class_194797a70805593588a38853a77075fd.def("size", method_pointer_59f9d01b42255b8bac389d518ac87753, "");

}