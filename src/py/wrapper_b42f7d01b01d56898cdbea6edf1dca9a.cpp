#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cb74bcf55e58527bab03e60633761927(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_0c1de1af27b6531990a3a918d3b29892(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_b42f7d01b01d56898cdbea6edf1dca9a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_cb74bcf55e58527bab03e60633761927)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_fa225cbd514957bfb3ec53ec789e2183)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_0c1de1af27b6531990a3a918d3b29892)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_ab6e1d494eb15dfea7f4ec32a5da4317)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_6be0adc4d49351e8a939fee845571c63)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_bdf848d191d75cf6b9f32965bdea480b)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_67106946330254babd59ccd2a138723f)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > > class_b42f7d01b01d56898cdbea6edf1dca9a("_EigenBase_b42f7d01b01d56898cdbea6edf1dca9a", "", boost::python::no_init);
    class_b42f7d01b01d56898cdbea6edf1dca9a.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >  const & >(""));
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("derived", method_pointer_cb74bcf55e58527bab03e60633761927, boost::python::return_internal_reference<>(), "");
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("derived", autowig::method_decorator_cb74bcf55e58527bab03e60633761927);
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("derived", method_pointer_fa225cbd514957bfb3ec53ec789e2183, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("const_cast_derived", method_pointer_0c1de1af27b6531990a3a918d3b29892, boost::python::return_internal_reference<>(), "");
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("const_cast_derived", autowig::method_decorator_0c1de1af27b6531990a3a918d3b29892);
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("const_derived", method_pointer_ab6e1d494eb15dfea7f4ec32a5da4317, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("rows", method_pointer_6be0adc4d49351e8a939fee845571c63, "");
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("cols", method_pointer_bdf848d191d75cf6b9f32965bdea480b, "");
    class_b42f7d01b01d56898cdbea6edf1dca9a.def("size", method_pointer_67106946330254babd59ccd2a138723f, "");

}