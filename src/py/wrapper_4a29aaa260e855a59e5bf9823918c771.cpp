#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1674b38b2da35f14b93e774895151ec7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_3c5517108e30547b8411831cd25dee4c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_0897d35cb1ff51dab4e7fbef11ca0a7d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_1991144a8a075320b6b084eea4e8fe73(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_340a7f89d60c57159a76e25de84e58fc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_a6c1176da1e754cba1d570a1a2196392(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_9ce6fdb194ad5e309441f783d089bf84(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_dcf4ab5dbde1550b908d09d02893e32d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_9f6e488e265152548639bc96d672823d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_1452030a23ef56b6a338e5915b0f136e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_00999105aadc5603824fd128ed491609(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_4a29aaa260e855a59e5bf9823918c771()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_1674b38b2da35f14b93e774895151ec7)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_699da65cca4458cc83f52612550b9a9b)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_05c1d438d8d65b71ba48a0f02c179a99)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_bb6f8f5e365353d58a0ebda5f9c4989d)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_7d26bee89b935fa499cc6273815bafe9)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_8cb210e9dee85e71af7f51d3d4e46110)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_3c5517108e30547b8411831cd25dee4c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_0897d35cb1ff51dab4e7fbef11ca0a7d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_d7a434c8847a5a4fad34217f474321fe)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_d41bf24424d6515f83643fa198320154)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_b796b0ab86355b8e946269b6cb2fc675)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_9b0a7787f5cf55c489bd43bfa2bb64cc)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_862a65ef89c05c378457f73d57cdedfb)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_3acce19c385c5f74bccfe7f0c808ab8e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_40eeecbb5c915b9bbaa8dcd53daf993c)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_5323b0dd7528570e98154031cdfb2084)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_40e7c0eb92155b8c8cb2b08ea89bd4cc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_1991144a8a075320b6b084eea4e8fe73)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_340a7f89d60c57159a76e25de84e58fc)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_a6c1176da1e754cba1d570a1a2196392)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_9ce6fdb194ad5e309441f783d089bf84)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_dcf4ab5dbde1550b908d09d02893e32d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_9f6e488e265152548639bc96d672823d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_1452030a23ef56b6a338e5915b0f136e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_00999105aadc5603824fd128ed491609)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setRandom;
    void  (*method_pointer_b9aa0ae0ae665547873707c1ffe729fd)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > >, boost::noncopyable > class_4a29aaa260e855a59e5bf9823918c771("_PlainObjectBase_4a29aaa260e855a59e5bf9823918c771", "", boost::python::no_init);
    class_4a29aaa260e855a59e5bf9823918c771.def("base", method_pointer_1674b38b2da35f14b93e774895151ec7, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("base", autowig::method_decorator_1674b38b2da35f14b93e774895151ec7);
    class_4a29aaa260e855a59e5bf9823918c771.def("base", method_pointer_699da65cca4458cc83f52612550b9a9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("rows", method_pointer_05c1d438d8d65b71ba48a0f02c179a99, "");
    class_4a29aaa260e855a59e5bf9823918c771.def("cols", method_pointer_bb6f8f5e365353d58a0ebda5f9c4989d, "");
    class_4a29aaa260e855a59e5bf9823918c771.def("coeff", method_pointer_7d26bee89b935fa499cc6273815bafe9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("coeff", method_pointer_8cb210e9dee85e71af7f51d3d4e46110, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("coeff_ref", method_pointer_3c5517108e30547b8411831cd25dee4c, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("coeff_ref", autowig::method_decorator_3c5517108e30547b8411831cd25dee4c);
    class_4a29aaa260e855a59e5bf9823918c771.def("coeff_ref", method_pointer_0897d35cb1ff51dab4e7fbef11ca0a7d, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("coeff_ref", autowig::method_decorator_0897d35cb1ff51dab4e7fbef11ca0a7d);
    class_4a29aaa260e855a59e5bf9823918c771.def("coeff_ref", method_pointer_d7a434c8847a5a4fad34217f474321fe, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("coeff_ref", method_pointer_d41bf24424d6515f83643fa198320154, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("data", method_pointer_b796b0ab86355b8e946269b6cb2fc675, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("data", method_pointer_9b0a7787f5cf55c489bd43bfa2bb64cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("resize", method_pointer_862a65ef89c05c378457f73d57cdedfb, "");
    class_4a29aaa260e855a59e5bf9823918c771.def("resize", method_pointer_3acce19c385c5f74bccfe7f0c808ab8e, "");
    class_4a29aaa260e855a59e5bf9823918c771.def("resize", method_pointer_40eeecbb5c915b9bbaa8dcd53daf993c, "");
    class_4a29aaa260e855a59e5bf9823918c771.def("resize", method_pointer_5323b0dd7528570e98154031cdfb2084, "");
    class_4a29aaa260e855a59e5bf9823918c771.def("conservative_resize", method_pointer_40e7c0eb92155b8c8cb2b08ea89bd4cc, "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_constant", method_pointer_1991144a8a075320b6b084eea4e8fe73, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_constant", autowig::method_decorator_1991144a8a075320b6b084eea4e8fe73);
    class_4a29aaa260e855a59e5bf9823918c771.def("set_constant", method_pointer_340a7f89d60c57159a76e25de84e58fc, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_constant", autowig::method_decorator_340a7f89d60c57159a76e25de84e58fc);
    class_4a29aaa260e855a59e5bf9823918c771.def("set_zero", method_pointer_a6c1176da1e754cba1d570a1a2196392, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_zero", autowig::method_decorator_a6c1176da1e754cba1d570a1a2196392);
    class_4a29aaa260e855a59e5bf9823918c771.def("set_zero", method_pointer_9ce6fdb194ad5e309441f783d089bf84, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_zero", autowig::method_decorator_9ce6fdb194ad5e309441f783d089bf84);
    class_4a29aaa260e855a59e5bf9823918c771.def("set_ones", method_pointer_dcf4ab5dbde1550b908d09d02893e32d, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_ones", autowig::method_decorator_dcf4ab5dbde1550b908d09d02893e32d);
    class_4a29aaa260e855a59e5bf9823918c771.def("set_ones", method_pointer_9f6e488e265152548639bc96d672823d, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_ones", autowig::method_decorator_9f6e488e265152548639bc96d672823d);
    class_4a29aaa260e855a59e5bf9823918c771.def("set_random", method_pointer_1452030a23ef56b6a338e5915b0f136e, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_random", autowig::method_decorator_1452030a23ef56b6a338e5915b0f136e);
    class_4a29aaa260e855a59e5bf9823918c771.def("set_random", method_pointer_00999105aadc5603824fd128ed491609, boost::python::return_internal_reference<>(), "");
    class_4a29aaa260e855a59e5bf9823918c771.def("set_random", autowig::method_decorator_00999105aadc5603824fd128ed491609);
    class_4a29aaa260e855a59e5bf9823918c771.def("check_template_params", method_pointer_b9aa0ae0ae665547873707c1ffe729fd, "");
    class_4a29aaa260e855a59e5bf9823918c771.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > >();
    }

}