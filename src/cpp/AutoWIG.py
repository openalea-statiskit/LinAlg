import autowig
import itertools

def controller(asg):
    autowig.controller.plugin = 'default'
    asg = autowig.controller(asg)
    for cls in ['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >']:
        for mtd in asg[cls].methods(access='public'):
            if mtd.localname == 'trace':
                mtd.boost_python_export = False
    for fct in asg.functions():
        if fct.localname in ['_check_template_params', 'operator()', 'operator[]']:
            fct.boost_python_export = False
    return asg

def generator(asg, module, decorator):
    autowig.generator.plugin = 'boost_python'
    nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::statiskit::linalg'].typedefs()]
    nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::statiskit::linalg'].declarations()
    return autowig.generator(asg, nodes, module=module,
                                         decorator=decorator,
                                         closure=False,
                                         helder='std::shared_ptr')
