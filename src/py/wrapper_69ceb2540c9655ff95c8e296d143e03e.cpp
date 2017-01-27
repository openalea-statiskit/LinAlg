#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8c82686c6d8e5a4e81d3cd920e7f1bf2(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_57452feac61359e6b5d96497e0e0e50f(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_69ceb2540c9655ff95c8e296d143e03e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_8c82686c6d8e5a4e81d3cd920e7f1bf2)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_80f15b873ccf508fb3d01f52695a723c)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_57452feac61359e6b5d96497e0e0e50f)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_75d39152f2255c7fab723048c5d72a92)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_54f22dde24ee5adea969f3e7ba0e19bc)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_abf75f0fceda50e2a281f8ec5db231f3)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > > >::*method_pointer_5dbc07f4448c5314a733d1a4c0f246e1)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > > class_69ceb2540c9655ff95c8e296d143e03e("_EigenBase_69ceb2540c9655ff95c8e296d143e03e", "", boost::python::no_init);
    class_69ceb2540c9655ff95c8e296d143e03e.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >  const & >(""));
    class_69ceb2540c9655ff95c8e296d143e03e.def("derived", method_pointer_8c82686c6d8e5a4e81d3cd920e7f1bf2, boost::python::return_internal_reference<>(), "");
    class_69ceb2540c9655ff95c8e296d143e03e.def("derived", autowig::method_decorator_8c82686c6d8e5a4e81d3cd920e7f1bf2);
    class_69ceb2540c9655ff95c8e296d143e03e.def("derived", method_pointer_80f15b873ccf508fb3d01f52695a723c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69ceb2540c9655ff95c8e296d143e03e.def("const_cast_derived", method_pointer_57452feac61359e6b5d96497e0e0e50f, boost::python::return_internal_reference<>(), "");
    class_69ceb2540c9655ff95c8e296d143e03e.def("const_cast_derived", autowig::method_decorator_57452feac61359e6b5d96497e0e0e50f);
    class_69ceb2540c9655ff95c8e296d143e03e.def("const_derived", method_pointer_75d39152f2255c7fab723048c5d72a92, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69ceb2540c9655ff95c8e296d143e03e.def("rows", method_pointer_54f22dde24ee5adea969f3e7ba0e19bc, "");
    class_69ceb2540c9655ff95c8e296d143e03e.def("cols", method_pointer_abf75f0fceda50e2a281f8ec5db231f3, "");
    class_69ceb2540c9655ff95c8e296d143e03e.def("size", method_pointer_5dbc07f4448c5314a733d1a4c0f246e1, "");

}