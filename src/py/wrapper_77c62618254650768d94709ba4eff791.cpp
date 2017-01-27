#include "_ieigen.h"


namespace autowig
{
    void method_decorator_83899e458b5d586c9136e448d525f115(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_81149eee305853c080fc841cbfb4625b(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_77c62618254650768d94709ba4eff791()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_83899e458b5d586c9136e448d525f115)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_19c7c8a0039559fe8c0fd793714248df)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_81149eee305853c080fc841cbfb4625b)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_318fdeceaedd5652bf48aa87012f5b41)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_61921d8819605ad7880c6c6a284b37bb)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_e891808d5293512f99a0b2f05263f989)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_ea71882ac0c657a5b4ff047ba9d869ce)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > > class_77c62618254650768d94709ba4eff791("_EigenBase_77c62618254650768d94709ba4eff791", "", boost::python::no_init);
    class_77c62618254650768d94709ba4eff791.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >  const & >(""));
    class_77c62618254650768d94709ba4eff791.def("derived", method_pointer_83899e458b5d586c9136e448d525f115, boost::python::return_internal_reference<>(), "");
    class_77c62618254650768d94709ba4eff791.def("derived", autowig::method_decorator_83899e458b5d586c9136e448d525f115);
    class_77c62618254650768d94709ba4eff791.def("derived", method_pointer_19c7c8a0039559fe8c0fd793714248df, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_77c62618254650768d94709ba4eff791.def("const_cast_derived", method_pointer_81149eee305853c080fc841cbfb4625b, boost::python::return_internal_reference<>(), "");
    class_77c62618254650768d94709ba4eff791.def("const_cast_derived", autowig::method_decorator_81149eee305853c080fc841cbfb4625b);
    class_77c62618254650768d94709ba4eff791.def("const_derived", method_pointer_318fdeceaedd5652bf48aa87012f5b41, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_77c62618254650768d94709ba4eff791.def("rows", method_pointer_61921d8819605ad7880c6c6a284b37bb, "");
    class_77c62618254650768d94709ba4eff791.def("cols", method_pointer_e891808d5293512f99a0b2f05263f989, "");
    class_77c62618254650768d94709ba4eff791.def("size", method_pointer_ea71882ac0c657a5b4ff047ba9d869ce, "");

}