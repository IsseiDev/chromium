var allDescriptors=[{"name":"temp_storage_shared_worker"}];var applicationDescriptor;var _loadedScripts={};for(var k of[]){}
function loadResourcePromise(url)
{return new Promise(load);function load(fulfill,reject)
{var xhr=new XMLHttpRequest();xhr.open("GET",url,true);xhr.onreadystatechange=onreadystatechange;function onreadystatechange(e)
{if(xhr.readyState!==XMLHttpRequest.DONE)
return;if([0,200,304].indexOf(xhr.status)===-1)
reject(new Error("While loading from url "+url+" server responded with a status of "+xhr.status));else
fulfill(e.target.response);}
xhr.send(null);}}
function normalizePath(path)
{if(path.indexOf("..")===-1&&path.indexOf(".")===-1)
return path;var normalizedSegments=[];var segments=path.split("/");for(var i=0;i<segments.length;i++){var segment=segments[i];if(segment===".")
continue;else if(segment==="..")
normalizedSegments.pop();else if(segment)
normalizedSegments.push(segment);}
var normalizedPath=normalizedSegments.join("/");if(normalizedPath[normalizedPath.length-1]==="/")
return normalizedPath;if(path[0]==="/"&&normalizedPath)
normalizedPath="/"+normalizedPath;if((path[path.length-1]==="/")||(segments[segments.length-1]===".")||(segments[segments.length-1]===".."))
normalizedPath=normalizedPath+"/";return normalizedPath;}
function loadScriptsPromise(scriptNames,base)
{var promises=[];var urls=[];var sources=new Array(scriptNames.length);var scriptToEval=0;for(var i=0;i<scriptNames.length;++i){var scriptName=scriptNames[i];var sourceURL=(base||self._importScriptPathPrefix)+scriptName;var schemaIndex=sourceURL.indexOf("://")+3;var pathIndex=sourceURL.indexOf("/",schemaIndex);if(pathIndex===-1)
pathIndex=sourceURL.length;sourceURL=sourceURL.substring(0,pathIndex)+normalizePath(sourceURL.substring(pathIndex));if(_loadedScripts[sourceURL])
continue;urls.push(sourceURL);promises.push(loadResourcePromise(sourceURL).then(scriptSourceLoaded.bind(null,i),scriptSourceLoaded.bind(null,i,undefined)));}
return Promise.all(promises).then(undefined);function scriptSourceLoaded(scriptNumber,scriptSource)
{sources[scriptNumber]=scriptSource||"";while(typeof sources[scriptToEval]!=="undefined"){evaluateScript(urls[scriptToEval],sources[scriptToEval]);++scriptToEval;}}
function evaluateScript(sourceURL,scriptSource)
{_loadedScripts[sourceURL]=true;if(!scriptSource){console.error("Empty response arrived for script '"+sourceURL+"'");return;}
self.eval(scriptSource+"\n//# sourceURL="+sourceURL);}}
(function(){var baseUrl=self.location?self.location.origin+self.location.pathname:"";self._importScriptPathPrefix=baseUrl.substring(0,baseUrl.lastIndexOf("/")+1);})();function Runtime(descriptors)
{this._modules=[];this._modulesMap={};this._extensions=[];this._cachedTypeClasses={};this._descriptorsMap={};for(var i=0;i<descriptors.length;++i)
this._registerModule(descriptors[i]);}
Runtime._queryParamsObject={__proto__:null};Runtime._instanceSymbol=Symbol("instance");Runtime._extensionSymbol=Symbol("extension");Runtime.cachedResources={__proto__:null};Runtime.loadResourceIntoCache=function(url,appendSourceURL)
{return loadResourcePromise(url).then(cacheResource.bind(this,url),cacheResource.bind(this,url,undefined));function cacheResource(path,content)
{if(!content){console.error("Failed to load resource: "+path);return;}
var sourceURL=appendSourceURL?Runtime.resolveSourceURL(path):"";Runtime.cachedResources[path]=content+sourceURL;}}
Runtime.startApplication=function(appName)
{console.timeStamp("Runtime.startApplication");var allDescriptorsByName={};for(var i=0;i<allDescriptors.length;++i){var d=allDescriptors[i];allDescriptorsByName[d["name"]]=d;}
var applicationPromise;if(applicationDescriptor)
applicationPromise=Promise.resolve(applicationDescriptor);else
applicationPromise=loadResourcePromise(appName+".json").then(JSON.parse.bind(JSON));return applicationPromise.then(parseModuleDescriptors);function parseModuleDescriptors(appDescriptor)
{var configuration=appDescriptor.modules;var moduleJSONPromises=[];var coreModuleNames=[];for(var i=0;i<configuration.length;++i){var descriptor=configuration[i];var name=descriptor["name"];var moduleJSON=allDescriptorsByName[name];if(moduleJSON)
moduleJSONPromises.push(Promise.resolve(moduleJSON));else
moduleJSONPromises.push(loadResourcePromise(name+"/module.json").then(JSON.parse.bind(JSON)));if(descriptor["type"]==="autostart")
coreModuleNames.push(name);}
return Promise.all(moduleJSONPromises).then(instantiateRuntime);function instantiateRuntime(moduleDescriptors)
{for(var i=0;i<moduleDescriptors.length;++i){moduleDescriptors[i].name=configuration[i]["name"];moduleDescriptors[i].condition=configuration[i]["condition"];moduleDescriptors[i].remote=configuration[i]["type"]==="remote";}
self.runtime=new Runtime(moduleDescriptors);if(coreModuleNames)
return(self.runtime._loadAutoStartModules(coreModuleNames));return Promise.resolve();}}}
Runtime.startWorker=function(appName)
{return Runtime.startApplication(appName).then(sendWorkerReady);function sendWorkerReady()
{self.postMessage("workerReady");}}
Runtime._sharedWorkerNewPortCallback=null;Runtime._sharedWorkerConnectedPorts=[];Runtime.startSharedWorker=function(appName)
{var startPromise=Runtime.startApplication(appName);self.onconnect=function(event)
{var newPort=(event.ports[0]);startPromise.then(sendWorkerReadyAndContinue);function sendWorkerReadyAndContinue()
{newPort.postMessage("workerReady");if(Runtime._sharedWorkerNewPortCallback)
Runtime._sharedWorkerNewPortCallback.call(null,newPort);else
Runtime._sharedWorkerConnectedPorts.push(newPort);}}}
Runtime.setSharedWorkerNewPortCallback=function(callback)
{Runtime._sharedWorkerNewPortCallback=callback;while(Runtime._sharedWorkerConnectedPorts.length){var port=Runtime._sharedWorkerConnectedPorts.shift();callback.call(null,port);}}
Runtime.queryParam=function(name)
{return Runtime._queryParamsObject[name]||null;}
Runtime.constructQueryParams=function(banned)
{var params=[];for(var key in Runtime._queryParamsObject){if(!key||banned.indexOf(key)!==-1)
continue;params.push(key+"="+Runtime._queryParamsObject[key]);}
return params.length?"?"+params.join("&"):"";}
Runtime._experimentsSetting=function()
{try{return(JSON.parse(self.localStorage&&self.localStorage["experiments"]?self.localStorage["experiments"]:"{}"));}catch(e){console.error("Failed to parse localStorage['experiments']");return{};}}
Runtime._console=console;Runtime._originalAssert=console.assert;Runtime._assert=function(value,message)
{if(value)
return;Runtime._originalAssert.call(Runtime._console,value,message+" "+new Error().stack);}
Runtime._platform="";Runtime.setPlatform=function(platform)
{Runtime._platform=platform;}
Runtime.prototype={useTestBase:function()
{Runtime._remoteBase="http://localhost:8000/inspector-sources/";},_registerModule:function(descriptor)
{var module=new Runtime.Module(this,descriptor);this._modules.push(module);this._modulesMap[descriptor["name"]]=module;},loadModulePromise:function(moduleName)
{return this._modulesMap[moduleName]._loadPromise();},_loadAutoStartModules:function(moduleNames)
{var promises=[];for(var i=0;i<moduleNames.length;++i)
promises.push(this.loadModulePromise(moduleNames[i]));return Promise.all(promises);},_checkExtensionApplicability:function(extension,predicate)
{if(!predicate)
return false;var contextTypes=(extension.descriptor().contextTypes);if(!contextTypes)
return true;for(var i=0;i<contextTypes.length;++i){var contextType=this._resolve(contextTypes[i]);var isMatching=!!contextType&&predicate(contextType);if(isMatching)
return true;}
return false;},isExtensionApplicableToContext:function(extension,context)
{if(!context)
return true;return this._checkExtensionApplicability(extension,isInstanceOf);function isInstanceOf(targetType)
{return context instanceof targetType;}},isExtensionApplicableToContextTypes:function(extension,currentContextTypes)
{if(!extension.descriptor().contextTypes)
return true;return this._checkExtensionApplicability(extension,currentContextTypes?isContextTypeKnown:null);function isContextTypeKnown(targetType)
{return currentContextTypes.has(targetType);}},extensions:function(type,context,sortByTitle)
{return this._extensions.filter(filter).sort(sortByTitle?titleComparator:orderComparator);function filter(extension)
{if(extension._type!==type&&extension._typeClass()!==type)
return false;if(!extension.enabled())
return false;return!context||extension.isApplicable(context);}
function orderComparator(extension1,extension2)
{var order1=extension1.descriptor()["order"]||0;var order2=extension2.descriptor()["order"]||0;return order1-order2;}
function titleComparator(extension1,extension2)
{var title1=extension1.title()||"";var title2=extension2.title()||"";return title1.localeCompare(title2);}},extension:function(type,context)
{return this.extensions(type,context)[0]||null;},allInstances:function(type,context)
{return Promise.all(this.extensions(type,context).map(extension=>extension.instance()));},_resolve:function(typeName)
{if(!this._cachedTypeClasses[typeName]){var path=typeName.split(".");var object=self;for(var i=0;object&&(i<path.length);++i)
object=object[path[i]];if(object)
this._cachedTypeClasses[typeName]=(object);}
return this._cachedTypeClasses[typeName]||null;},sharedInstance:function(constructorFunction)
{if(Runtime._instanceSymbol in constructorFunction)
return constructorFunction[Runtime._instanceSymbol];var instance=new constructorFunction();constructorFunction[Runtime._instanceSymbol]=instance;return instance;}}
Runtime.ModuleDescriptor=function()
{this.name;this.extensions;this.dependencies;this.scripts;this.condition;this.remote;}
Runtime.ExtensionDescriptor=function()
{this.type;this.className;this.factoryName;this.contextTypes;}
Runtime.Module=function(manager,descriptor)
{this._manager=manager;this._descriptor=descriptor;this._name=descriptor.name;this._extensions=[];this._extensionsByClassName=new Map();var extensions=(descriptor.extensions);for(var i=0;extensions&&i<extensions.length;++i){var extension=new Runtime.Extension(this,extensions[i]);this._manager._extensions.push(extension);this._extensions.push(extension);}
this._loadedForTest=false;}
Runtime.Module.prototype={name:function()
{return this._name;},enabled:function()
{return Runtime._isDescriptorEnabled(this._descriptor);},resource:function(name)
{var fullName=this._name+"/"+name;var content=Runtime.cachedResources[fullName];if(!content)
throw new Error(fullName+" not preloaded. Check module.json");return content;},_loadPromise:function()
{if(!this.enabled())
return Promise.reject(new Error("Module "+this._name+" is not enabled"));if(this._pendingLoadPromise)
return this._pendingLoadPromise;var dependencies=this._descriptor.dependencies;var dependencyPromises=[];for(var i=0;dependencies&&i<dependencies.length;++i)
dependencyPromises.push(this._manager._modulesMap[dependencies[i]]._loadPromise());this._pendingLoadPromise=Promise.all(dependencyPromises).then(this._loadResources.bind(this)).then(this._loadScripts.bind(this)).then(()=>this._loadedForTest=true);return this._pendingLoadPromise;},_loadResources:function()
{var resources=this._descriptor["resources"];if(!resources||!resources.length)
return Promise.resolve();var promises=[];for(var i=0;i<resources.length;++i){var url=this._modularizeURL(resources[i]);promises.push(Runtime.loadResourceIntoCache(url,true));}
return Promise.all(promises).then(undefined);},_loadScripts:function()
{if(!this._descriptor.scripts||!this._descriptor.scripts.length)
return Promise.resolve();return loadScriptsPromise(this._descriptor.scripts.map(this._modularizeURL,this),this._remoteBase());},_modularizeURL:function(resourceName)
{return normalizePath(this._name+"/"+resourceName);},_remoteBase:function()
{return this._descriptor.remote&&Runtime._remoteBase||undefined;},substituteURL:function(value)
{var base=this._remoteBase()||"";return value.replace(/@url\(([^\)]*?)\)/g,convertURL.bind(this));function convertURL(match,url)
{return base+this._modularizeURL(url);}}}
Runtime._isDescriptorEnabled=function(descriptor)
{var activatorExperiment=descriptor["experiment"];if(activatorExperiment==="*")
return Runtime.experiments.supportEnabled();if(activatorExperiment&&activatorExperiment.startsWith("!")&&Runtime.experiments.isEnabled(activatorExperiment.substring(1)))
return false;if(activatorExperiment&&!activatorExperiment.startsWith("!")&&!Runtime.experiments.isEnabled(activatorExperiment))
return false;var condition=descriptor["condition"];if(condition&&!condition.startsWith("!")&&!Runtime.queryParam(condition))
return false;if(condition&&condition.startsWith("!")&&Runtime.queryParam(condition.substring(1)))
return false;return true;}
Runtime.Extension=function(module,descriptor)
{this._module=module;this._descriptor=descriptor;this._type=descriptor.type;this._hasTypeClass=this._type.charAt(0)==="@";this._className=descriptor.className||null;this._factoryName=descriptor.factoryName||null;}
Runtime.Extension.prototype={descriptor:function()
{return this._descriptor;},module:function()
{return this._module;},enabled:function()
{return this._module.enabled()&&Runtime._isDescriptorEnabled(this.descriptor());},_typeClass:function()
{if(!this._hasTypeClass)
return null;return this._module._manager._resolve(this._type.substring(1));},isApplicable:function(context)
{return this._module._manager.isExtensionApplicableToContext(this,context);},instance:function()
{return this._module._loadPromise().then(this._createInstance.bind(this));},_createInstance:function()
{var className=this._className||this._factoryName;if(!className)
throw new Error("Could not instantiate extension with no class");var constructorFunction=self.eval((className));if(!(constructorFunction instanceof Function))
throw new Error("Could not instantiate: "+className);if(this._className)
return this._module._manager.sharedInstance(constructorFunction);return new constructorFunction(this);},title:function()
{return this._descriptor["title-"+Runtime._platform]||this._descriptor["title"];}}
Runtime.ExperimentsSupport=function()
{this._supportEnabled=Runtime.queryParam("experiments")!==null;this._experiments=[];this._experimentNames={};this._enabledTransiently={};}
Runtime.ExperimentsSupport.prototype={allConfigurableExperiments:function()
{var result=[];for(var i=0;i<this._experiments.length;i++){var experiment=this._experiments[i];if(!this._enabledTransiently[experiment.name])
result.push(experiment);}
return result;},supportEnabled:function()
{return this._supportEnabled;},_setExperimentsSetting:function(value)
{if(!self.localStorage)
return;self.localStorage["experiments"]=JSON.stringify(value);},register:function(experimentName,experimentTitle,hidden)
{Runtime._assert(!this._experimentNames[experimentName],"Duplicate registration of experiment "+experimentName);this._experimentNames[experimentName]=true;this._experiments.push(new Runtime.Experiment(this,experimentName,experimentTitle,!!hidden));},isEnabled:function(experimentName)
{this._checkExperiment(experimentName);if(this._enabledTransiently[experimentName])
return true;if(!this.supportEnabled())
return false;return!!Runtime._experimentsSetting()[experimentName];},setEnabled:function(experimentName,enabled)
{this._checkExperiment(experimentName);var experimentsSetting=Runtime._experimentsSetting();experimentsSetting[experimentName]=enabled;this._setExperimentsSetting(experimentsSetting);},setDefaultExperiments:function(experimentNames)
{for(var i=0;i<experimentNames.length;++i){this._checkExperiment(experimentNames[i]);this._enabledTransiently[experimentNames[i]]=true;}},enableForTest:function(experimentName)
{this._checkExperiment(experimentName);this._enabledTransiently[experimentName]=true;},clearForTest:function()
{this._experiments=[];this._experimentNames={};this._enabledTransiently={};},cleanUpStaleExperiments:function()
{var experimentsSetting=Runtime._experimentsSetting();var cleanedUpExperimentSetting={};for(var i=0;i<this._experiments.length;++i){var experimentName=this._experiments[i].name;if(experimentsSetting[experimentName])
cleanedUpExperimentSetting[experimentName]=true;}
this._setExperimentsSetting(cleanedUpExperimentSetting);},_checkExperiment:function(experimentName)
{Runtime._assert(this._experimentNames[experimentName],"Unknown experiment "+experimentName);}}
Runtime.Experiment=function(experiments,name,title,hidden)
{this.name=name;this.title=title;this.hidden=hidden;this._experiments=experiments;}
Runtime.Experiment.prototype={isEnabled:function()
{return this._experiments.isEnabled(this.name);},setEnabled:function(enabled)
{this._experiments.setEnabled(this.name,enabled);}}
{(function parseQueryParameters()
{var queryParams=location.search;if(!queryParams)
return;var params=queryParams.substring(1).split("&");for(var i=0;i<params.length;++i){var pair=params[i].split("=");var name=pair.shift();Runtime._queryParamsObject[name]=pair.join("=");}})();}
Runtime.experiments=new Runtime.ExperimentsSupport();Runtime._remoteBase=Runtime.queryParam("remoteBase");{(function validateRemoteBase()
{var remoteBaseRegexp=/^https:\/\/chrome-devtools-frontend\.appspot\.com\/serve_file\/@[0-9a-zA-Z]+\/?$/;if(Runtime._remoteBase&&!remoteBaseRegexp.test(Runtime._remoteBase))
Runtime._remoteBase=null;})();}
Runtime.resolveSourceURL=function(path)
{var sourceURL=self.location.href;if(self.location.search)
sourceURL=sourceURL.replace(self.location.search,"");sourceURL=sourceURL.substring(0,sourceURL.lastIndexOf("/")+1)+path;return"\n/*# sourceURL="+sourceURL+" */";}
var runtime;var ports=[];var isTempStorageCleared=false;var tempStorageError;function onNewPort(newPort)
{if(isTempStorageCleared){notifyTempStorageCleared(newPort);return;}
newPort.onmessage=handleMessage;newPort.onerror=handleError;ports.push(newPort);if(ports.length===1)
clearTempStorage();}
function clearTempStorage()
{function didFail(e)
{tempStorageError="Failed to clear temp storage: "+e.message+" "+e.name;console.error(tempStorageError);didClearTempStorage();}
function didGetFS(fs)
{fs.root.createReader().readEntries(didReadEntries,didFail);}
function didReadEntries(entries)
{var remainingEntries=entries.length;if(!remainingEntries){didClearTempStorage();return;}
function didDeleteEntry()
{if(!--remainingEntries)
didClearTempStorage();}
function failedToDeleteEntry(e)
{tempStorageError="Failed to delete entry: "+e.message+" "+e.name;console.error(tempStorageError);didDeleteEntry();}
for(var i=0;i<entries.length;i++){var entry=entries[i];if(entry.isFile)
entry.remove(didDeleteEntry,failedToDeleteEntry);else
entry.removeRecursively(didDeleteEntry,failedToDeleteEntry);}}
self.webkitRequestFileSystem(self.TEMPORARY,10,didGetFS,didFail);}
function didClearTempStorage()
{isTempStorageCleared=true;for(var i=0;i<ports.length;i++)
notifyTempStorageCleared(ports[i]);ports=null;}
function notifyTempStorageCleared(port)
{port.postMessage({type:"tempStorageCleared",error:tempStorageError});}
function handleMessage(event)
{if(event.data.type==="disconnect")
removePort(event.target);}
function handleError(event)
{console.error("Error: "+event.data);removePort(event.target);}
function removePort(port)
{if(!ports)
return;var index=ports.indexOf(port);ports.splice(index,1);}
Runtime.setSharedWorkerNewPortCallback(onNewPort);;applicationDescriptor={"has_html":false,"modules":[{"type":"autostart","name":"temp_storage_shared_worker"}]};if(!self.Runtime)
self.importScripts("Runtime.js");Runtime.startSharedWorker("temp_storage_shared_worker");