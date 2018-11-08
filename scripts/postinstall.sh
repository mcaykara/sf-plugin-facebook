parent_path=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )
mv ../plugins/FacebookAndroid.zip ~/workspace/plugins/iOS/facebookandroid.zip
mv ../plugins/facebookios.zip ~/workspace/plugins/Android/facebookios.zip
rm -rf ../plugins

(
    cd "$parent_path"
    node ./project.js
)