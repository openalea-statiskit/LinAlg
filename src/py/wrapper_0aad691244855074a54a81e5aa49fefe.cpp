#include "_ieigen.h"


namespace autowig
{
    void method_decorator_878130a5c6985babab5f75b3af8f7798(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_a022a3213a2b52f2a7597f6998ef0b4e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_22b249a263a35f39b26e1edf9de4c706(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_1f699c0900c65415ae28b8206809ed29(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_574321770132529fbc4801984ac640da(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_5607601f1a0a5426945bb2c2a0cc9262(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_ac6e544742a1539a8413f47d183b49a6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_3f23ba16857b5cfe8689c69f0794995f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_5a1272d5d57b5c7480deac48ac9de09a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_a117731c1b86511d93a945079c53f2c9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_b8dbb408387657ed8d3a1a53a3576e42(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_0aad691244855074a54a81e5aa49fefe()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_878130a5c6985babab5f75b3af8f7798)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_7e65cd471ca656f8bf764c542dbce387)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a72da6255f4d53e3a725d0a27ed406f4)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_05c45d41029a561aa76dde8bf19b1a0f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_3dbb398f36675060851a1f112fa61826)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_36d50934577350ae80e61b2fda18cb76)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a022a3213a2b52f2a7597f6998ef0b4e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_22b249a263a35f39b26e1edf9de4c706)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_cbbc4f9097b159f3918449b8062faf89)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_4e850bb283425ff4ab515efe03bfe99e)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fc5d963684ef5f35980d9325e02cb241)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_6b5983aab76a53128aa8949a6569b1e1)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_bafc84ff6b7850c29bf826f246863381)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c5d368a376195e34b26d9679086cf206)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fea0409aa390514196408f9a2927faba)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a04cecc100da517aac2ec721fd09e3f1)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_0c2414be697f5ff280b5cce4bf5d882d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_12686016b2d15339b39eb2fdc1ca8537)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_57e6c7f3e5135b549135be6ca2f1ca1d)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_1d5e956382d055ca8c29677b0bfc2bbb)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_1f699c0900c65415ae28b8206809ed29)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_574321770132529fbc4801984ac640da)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_5607601f1a0a5426945bb2c2a0cc9262)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_ac6e544742a1539a8413f47d183b49a6)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_3f23ba16857b5cfe8689c69f0794995f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_5a1272d5d57b5c7480deac48ac9de09a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a117731c1b86511d93a945079c53f2c9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_b8dbb408387657ed8d3a1a53a3576e42)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setRandom;
    void  (*method_pointer_9f9788f93c6052e9b638359d9eb3c3b6)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > class_0aad691244855074a54a81e5aa49fefe("_PlainObjectBase_0aad691244855074a54a81e5aa49fefe", "", boost::python::no_init);
    class_0aad691244855074a54a81e5aa49fefe.def("base", method_pointer_878130a5c6985babab5f75b3af8f7798, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("base", autowig::method_decorator_878130a5c6985babab5f75b3af8f7798);
    class_0aad691244855074a54a81e5aa49fefe.def("base", method_pointer_7e65cd471ca656f8bf764c542dbce387, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("rows", method_pointer_a72da6255f4d53e3a725d0a27ed406f4, "");
    class_0aad691244855074a54a81e5aa49fefe.def("cols", method_pointer_05c45d41029a561aa76dde8bf19b1a0f, "");
    class_0aad691244855074a54a81e5aa49fefe.def("coeff", method_pointer_3dbb398f36675060851a1f112fa61826, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("coeff", method_pointer_36d50934577350ae80e61b2fda18cb76, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("coeff_ref", method_pointer_a022a3213a2b52f2a7597f6998ef0b4e, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("coeff_ref", autowig::method_decorator_a022a3213a2b52f2a7597f6998ef0b4e);
    class_0aad691244855074a54a81e5aa49fefe.def("coeff_ref", method_pointer_22b249a263a35f39b26e1edf9de4c706, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("coeff_ref", autowig::method_decorator_22b249a263a35f39b26e1edf9de4c706);
    class_0aad691244855074a54a81e5aa49fefe.def("coeff_ref", method_pointer_cbbc4f9097b159f3918449b8062faf89, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("coeff_ref", method_pointer_4e850bb283425ff4ab515efe03bfe99e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("data", method_pointer_fc5d963684ef5f35980d9325e02cb241, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("data", method_pointer_6b5983aab76a53128aa8949a6569b1e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("resize", method_pointer_bafc84ff6b7850c29bf826f246863381, "");
    class_0aad691244855074a54a81e5aa49fefe.def("resize", method_pointer_c5d368a376195e34b26d9679086cf206, "");
    class_0aad691244855074a54a81e5aa49fefe.def("resize", method_pointer_fea0409aa390514196408f9a2927faba, "");
    class_0aad691244855074a54a81e5aa49fefe.def("resize", method_pointer_a04cecc100da517aac2ec721fd09e3f1, "");
    class_0aad691244855074a54a81e5aa49fefe.def("conservative_resize", method_pointer_0c2414be697f5ff280b5cce4bf5d882d, "");
    class_0aad691244855074a54a81e5aa49fefe.def("conservative_resize", method_pointer_12686016b2d15339b39eb2fdc1ca8537, "");
    class_0aad691244855074a54a81e5aa49fefe.def("conservative_resize", method_pointer_57e6c7f3e5135b549135be6ca2f1ca1d, "");
    class_0aad691244855074a54a81e5aa49fefe.def("conservative_resize", method_pointer_1d5e956382d055ca8c29677b0bfc2bbb, "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_constant", method_pointer_1f699c0900c65415ae28b8206809ed29, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_constant", autowig::method_decorator_1f699c0900c65415ae28b8206809ed29);
    class_0aad691244855074a54a81e5aa49fefe.def("set_constant", method_pointer_574321770132529fbc4801984ac640da, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_constant", autowig::method_decorator_574321770132529fbc4801984ac640da);
    class_0aad691244855074a54a81e5aa49fefe.def("set_zero", method_pointer_5607601f1a0a5426945bb2c2a0cc9262, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_zero", autowig::method_decorator_5607601f1a0a5426945bb2c2a0cc9262);
    class_0aad691244855074a54a81e5aa49fefe.def("set_zero", method_pointer_ac6e544742a1539a8413f47d183b49a6, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_zero", autowig::method_decorator_ac6e544742a1539a8413f47d183b49a6);
    class_0aad691244855074a54a81e5aa49fefe.def("set_ones", method_pointer_3f23ba16857b5cfe8689c69f0794995f, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_ones", autowig::method_decorator_3f23ba16857b5cfe8689c69f0794995f);
    class_0aad691244855074a54a81e5aa49fefe.def("set_ones", method_pointer_5a1272d5d57b5c7480deac48ac9de09a, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_ones", autowig::method_decorator_5a1272d5d57b5c7480deac48ac9de09a);
    class_0aad691244855074a54a81e5aa49fefe.def("set_random", method_pointer_a117731c1b86511d93a945079c53f2c9, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_random", autowig::method_decorator_a117731c1b86511d93a945079c53f2c9);
    class_0aad691244855074a54a81e5aa49fefe.def("set_random", method_pointer_b8dbb408387657ed8d3a1a53a3576e42, boost::python::return_internal_reference<>(), "");
    class_0aad691244855074a54a81e5aa49fefe.def("set_random", autowig::method_decorator_b8dbb408387657ed8d3a1a53a3576e42);
    class_0aad691244855074a54a81e5aa49fefe.def("check_template_params", method_pointer_9f9788f93c6052e9b638359d9eb3c3b6, "");
    class_0aad691244855074a54a81e5aa49fefe.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >();
    }

}