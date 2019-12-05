#
# Be sure to run `pod lib lint ApexDataCollect-Visual.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ApexDataCollect-Visual'
  s.version          = '0.0.2'
  s.summary          = 'A short description of ApexDataCollect-Visual.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/yuanfangzhuye/ApexDataCollect-Visual'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yuanfangzhuye' => '371551077@qq.com' }
  s.source           = { :git => 'https://github.com/yuanfangzhuye/ApexDataCollect-Visual.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  # s.source_files = 'ApexDataCollect-Visual/Classes/**/*'
  s.vendored_frameworks = 'ApexDataCollect-Visual/Classes/ApexDataCollectVisualSDK.framework'
  
  # s.resource_bundles = {
  #   'ApexDataCollect-Visual' => ['ApexDataCollect-Visual/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  s.dependency 'ApexDataCollect-Util'
end
