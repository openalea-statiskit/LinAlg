#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7c8cca02f92d5eeaa752b6ec406214ae(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_785b097023885f3780d85bec9c4dc5fe(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_32fb19213b205c88a19f68b8883d962b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_7c8cca02f92d5eeaa752b6ec406214ae)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_b85ebc5300f25deda380004db5526f1c)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_785b097023885f3780d85bec9c4dc5fe)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_1ec210fff4ee52399c9282e665841def)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_ab4844a57be155538720238fd49fd8f3)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_194bfeb0740c527298ddc55a25292856)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_c537ca7a110c57a2b833c86e7ced4610)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > > class_32fb19213b205c88a19f68b8883d962b("_EigenBase_32fb19213b205c88a19f68b8883d962b", "", boost::python::no_init);
    class_32fb19213b205c88a19f68b8883d962b.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >  const & >(""));
    class_32fb19213b205c88a19f68b8883d962b.def("derived", method_pointer_7c8cca02f92d5eeaa752b6ec406214ae, boost::python::return_internal_reference<>(), "");
    class_32fb19213b205c88a19f68b8883d962b.def("derived", autowig::method_decorator_7c8cca02f92d5eeaa752b6ec406214ae);
    class_32fb19213b205c88a19f68b8883d962b.def("derived", method_pointer_b85ebc5300f25deda380004db5526f1c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_32fb19213b205c88a19f68b8883d962b.def("const_cast_derived", method_pointer_785b097023885f3780d85bec9c4dc5fe, boost::python::return_internal_reference<>(), "");
    class_32fb19213b205c88a19f68b8883d962b.def("const_cast_derived", autowig::method_decorator_785b097023885f3780d85bec9c4dc5fe);
    class_32fb19213b205c88a19f68b8883d962b.def("const_derived", method_pointer_1ec210fff4ee52399c9282e665841def, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_32fb19213b205c88a19f68b8883d962b.def("rows", method_pointer_ab4844a57be155538720238fd49fd8f3, "");
    class_32fb19213b205c88a19f68b8883d962b.def("cols", method_pointer_194bfeb0740c527298ddc55a25292856, "");
    class_32fb19213b205c88a19f68b8883d962b.def("size", method_pointer_c537ca7a110c57a2b833c86e7ced4610, "");

}