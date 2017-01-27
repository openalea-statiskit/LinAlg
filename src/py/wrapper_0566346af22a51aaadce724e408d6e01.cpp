#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cde9a5ce064d513aa57558e706470871(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_642db036b08f51aaa24f2e8d42e318d5(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_0566346af22a51aaadce724e408d6e01()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_cde9a5ce064d513aa57558e706470871)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_cc00a13df8ce511e98e5bed95c2b0c46)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_642db036b08f51aaa24f2e8d42e318d5)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_fb6ac6fd70515f00871ff8c0600a004a)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_5a7a04f7ea875a728206c82174c2f459)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_832ee749a8ec5a3ba3eac8e2adfc4d86)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > > >::*method_pointer_d1e5ec21fa21568188f36071e6ed4bd5)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > > class_0566346af22a51aaadce724e408d6e01("_EigenBase_0566346af22a51aaadce724e408d6e01", "", boost::python::no_init);
    class_0566346af22a51aaadce724e408d6e01.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >  const & >(""));
    class_0566346af22a51aaadce724e408d6e01.def("derived", method_pointer_cde9a5ce064d513aa57558e706470871, boost::python::return_internal_reference<>(), "");
    class_0566346af22a51aaadce724e408d6e01.def("derived", autowig::method_decorator_cde9a5ce064d513aa57558e706470871);
    class_0566346af22a51aaadce724e408d6e01.def("derived", method_pointer_cc00a13df8ce511e98e5bed95c2b0c46, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0566346af22a51aaadce724e408d6e01.def("const_cast_derived", method_pointer_642db036b08f51aaa24f2e8d42e318d5, boost::python::return_internal_reference<>(), "");
    class_0566346af22a51aaadce724e408d6e01.def("const_cast_derived", autowig::method_decorator_642db036b08f51aaa24f2e8d42e318d5);
    class_0566346af22a51aaadce724e408d6e01.def("const_derived", method_pointer_fb6ac6fd70515f00871ff8c0600a004a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0566346af22a51aaadce724e408d6e01.def("rows", method_pointer_5a7a04f7ea875a728206c82174c2f459, "");
    class_0566346af22a51aaadce724e408d6e01.def("cols", method_pointer_832ee749a8ec5a3ba3eac8e2adfc4d86, "");
    class_0566346af22a51aaadce724e408d6e01.def("size", method_pointer_d1e5ec21fa21568188f36071e6ed4bd5, "");

}