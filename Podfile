platform :ios,'11.0'
source 'git@github.com:Xupeng233/XupengRepo.git'
source 'https://github.com/CocoaPods/Specs.git'
#建议放在文件开始或者source之后    
install! 'cocoapods', :deterministic_uuids => false

#use_frameworks!

#warn_for_unused_master_specs_repo => false

# 业务组件
def bz_pods
  
  pod 'DPGuix', :path => '../DPGuix'
  pod 'DPMine', :path => '../DPMine'
  pod 'DPHome', :path => '../DPHome'
  pod 'DPFind', :path => '../DPFind'
  pod 'DPMessage', :path => '../DPMessage'
  pod 'DPEntrance', :path => '../DPEntrance'
end

def flutter_pods
#  flutter_application_path = '../dp_flutter'
#  load File.join(flutter_application_path, '.ios', 'Flutter', 'podhelper.rb')
#  install_all_flutter_pods(flutter_application_path)
#  pod 'DPFlutter', :path => '../DPFlutter'
end

target 'DapengStudy' do
    bz_pods
    flutter_pods
    pod 'SDWebImage', '~> 5.2.5'
    pod 'CYLTabBarController', '~> 1.29.2'
    pod 'Masonry', '~> 1.1.0'
    pod 'IGListKit', '~> 4.0.0'
    pod 'QMUIKit', '~> 4.4.0'
    pod 'libextobjc', '~> 0.6'
    pod 'MJRefresh', '~> 3.6.1'
    pod 'SDCycleScrollView','~> 1.61'
    pod 'lottie-ios', '2.5.3'
    


#    pod 'DoraemonKit/Core', '~> 3.0.4', :configurations => ['Debug']
    
end
