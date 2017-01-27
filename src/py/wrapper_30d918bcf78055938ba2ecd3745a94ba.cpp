#include "_ieigen.h"


namespace autowig
{
    void method_decorator_468495bb6c4b50cd8bd899c7e6222e65(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_2a83be87f7dd5d75bbaf97da32756c18(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_68451dbc148f5a3aa9a3b35775889ce7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_8ca955403bf458e9b66c19afbfd2ca02(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_f1033c77f6bf58c7b775ea8b88abdf5b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_07bf030d190a5bbdae589e4a918d9eed(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_1aab0350985652d68184895704933592(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_ac356fedf33750fe9d74d471346e73c3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_d06b308f090151bead1146122d5194f8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_f231a3dcb672503f922f6a749419daa8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_738d5eef5e0d576b9c39b5030de554e9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_30d918bcf78055938ba2ecd3745a94ba()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_468495bb6c4b50cd8bd899c7e6222e65)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_8354d27546425e87b98b1d978016d6cf)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_c8109e762e795ec896df8bc65741430e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_ed2bdb2c1dd95964a5bad85e0ff3291f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_f0ab8a4bec70538796794d7da76f3338)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_946dae00a3bf59ca935567170717c127)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_2a83be87f7dd5d75bbaf97da32756c18)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_68451dbc148f5a3aa9a3b35775889ce7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_dfb91221944d506a98bcd0812bbf3e15)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_5d82ef886b6c5b1eae570eeb5926137a)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_32a75d5a309e5744852e1e7b91feca82)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_fbad9b81b24d59558e6fa0bc3776632e)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_55e12a2274f154018517da6eb05f5956)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_58255db92b725fbebaa482af497aa8dc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_d39f574b4782565689ab509a7a63917a)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_85d916d5f70b58eeb98f92145829910f)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_633652e47d7456509b266d2288d4b677)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_8ca955403bf458e9b66c19afbfd2ca02)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_f1033c77f6bf58c7b775ea8b88abdf5b)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_07bf030d190a5bbdae589e4a918d9eed)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_1aab0350985652d68184895704933592)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_ac356fedf33750fe9d74d471346e73c3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_d06b308f090151bead1146122d5194f8)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_f231a3dcb672503f922f6a749419daa8)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_738d5eef5e0d576b9c39b5030de554e9)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setRandom;
    void  (*method_pointer_2090fb74f457534a83af52085457e1b4)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > >, boost::noncopyable > class_30d918bcf78055938ba2ecd3745a94ba("_PlainObjectBase_30d918bcf78055938ba2ecd3745a94ba", "", boost::python::no_init);
    class_30d918bcf78055938ba2ecd3745a94ba.def("base", method_pointer_468495bb6c4b50cd8bd899c7e6222e65, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("base", autowig::method_decorator_468495bb6c4b50cd8bd899c7e6222e65);
    class_30d918bcf78055938ba2ecd3745a94ba.def("base", method_pointer_8354d27546425e87b98b1d978016d6cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("rows", method_pointer_c8109e762e795ec896df8bc65741430e, "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("cols", method_pointer_ed2bdb2c1dd95964a5bad85e0ff3291f, "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("coeff", method_pointer_f0ab8a4bec70538796794d7da76f3338, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("coeff", method_pointer_946dae00a3bf59ca935567170717c127, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("coeff_ref", method_pointer_2a83be87f7dd5d75bbaf97da32756c18, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("coeff_ref", autowig::method_decorator_2a83be87f7dd5d75bbaf97da32756c18);
    class_30d918bcf78055938ba2ecd3745a94ba.def("coeff_ref", method_pointer_68451dbc148f5a3aa9a3b35775889ce7, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("coeff_ref", autowig::method_decorator_68451dbc148f5a3aa9a3b35775889ce7);
    class_30d918bcf78055938ba2ecd3745a94ba.def("coeff_ref", method_pointer_dfb91221944d506a98bcd0812bbf3e15, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("coeff_ref", method_pointer_5d82ef886b6c5b1eae570eeb5926137a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("data", method_pointer_32a75d5a309e5744852e1e7b91feca82, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("data", method_pointer_fbad9b81b24d59558e6fa0bc3776632e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("resize", method_pointer_55e12a2274f154018517da6eb05f5956, "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("resize", method_pointer_58255db92b725fbebaa482af497aa8dc, "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("resize", method_pointer_d39f574b4782565689ab509a7a63917a, "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("resize", method_pointer_85d916d5f70b58eeb98f92145829910f, "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("conservative_resize", method_pointer_633652e47d7456509b266d2288d4b677, "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_constant", method_pointer_8ca955403bf458e9b66c19afbfd2ca02, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_constant", autowig::method_decorator_8ca955403bf458e9b66c19afbfd2ca02);
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_constant", method_pointer_f1033c77f6bf58c7b775ea8b88abdf5b, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_constant", autowig::method_decorator_f1033c77f6bf58c7b775ea8b88abdf5b);
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_zero", method_pointer_07bf030d190a5bbdae589e4a918d9eed, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_zero", autowig::method_decorator_07bf030d190a5bbdae589e4a918d9eed);
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_zero", method_pointer_1aab0350985652d68184895704933592, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_zero", autowig::method_decorator_1aab0350985652d68184895704933592);
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_ones", method_pointer_ac356fedf33750fe9d74d471346e73c3, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_ones", autowig::method_decorator_ac356fedf33750fe9d74d471346e73c3);
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_ones", method_pointer_d06b308f090151bead1146122d5194f8, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_ones", autowig::method_decorator_d06b308f090151bead1146122d5194f8);
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_random", method_pointer_f231a3dcb672503f922f6a749419daa8, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_random", autowig::method_decorator_f231a3dcb672503f922f6a749419daa8);
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_random", method_pointer_738d5eef5e0d576b9c39b5030de554e9, boost::python::return_internal_reference<>(), "");
    class_30d918bcf78055938ba2ecd3745a94ba.def("set_random", autowig::method_decorator_738d5eef5e0d576b9c39b5030de554e9);
    class_30d918bcf78055938ba2ecd3745a94ba.def("check_template_params", method_pointer_2090fb74f457534a83af52085457e1b4, "");
    class_30d918bcf78055938ba2ecd3745a94ba.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > >();
    }

}