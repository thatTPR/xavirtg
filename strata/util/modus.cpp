#pragma once 
#include "sys.cpp"
#include "interface.cpp"
#include <vk/vulkan.h>
#include <vk/vulkan_core.h>
#include <sei_settings.hpp>
// Responsible for the correct  configuration of:  rendering context and quality, information and exclusion provision. 
// typedef struct VkPhysicalDeviceLimits {
//     uint32_t              maxImageDimension1D;
//     uint32_t              maxImageDimension2D;
//     uint32_t              maxImageDimension3D;
//     uint32_t              maxImageDimensionCube;
//     uint32_t              maxImageArrayLayers;
//     uint32_t              maxTexelBufferElements;
//     uint32_t              maxUniformBufferRange;
//     uint32_t              maxStorageBufferRange;
//     uint32_t              maxPushConstantsSize;
//     uint32_t              maxMemoryAllocationCount;
//     uint32_t              maxSamplerAllocationCount;
//     VkDeviceSize          bufferImageGranularity;
//     VkDeviceSize          sparseAddressSpaceSize;
//     uint32_t              maxBoundDescriptorSets;
//     uint32_t              maxPerStageDescriptorSamplers;
//     uint32_t              maxPerStageDescriptorUniformBuffers;
//     uint32_t              maxPerStageDescriptorStorageBuffers;
//     uint32_t              maxPerStageDescriptorSampledImages;
//     uint32_t              maxPerStageDescriptorStorageImages;
//     uint32_t              maxPerStageDescriptorInputAttachments;
//     uint32_t              maxPerStageResources;
//     uint32_t              maxDescriptorSetSamplers;
//     uint32_t              maxDescriptorSetUniformBuffers;
//     uint32_t              maxDescriptorSetUniformBuffersDynamic;
//     uint32_t              maxDescriptorSetStorageBuffers;
//     uint32_t              maxDescriptorSetStorageBuffersDynamic;
//     uint32_t              maxDescriptorSetSampledImages;
//     uint32_t              maxDescriptorSetStorageImages;
//     uint32_t              maxDescriptorSetInputAttachments;
//     uint32_t              maxVertexInputAttributes;
//     uint32_t              maxVertexInputBindings;
//     uint32_t              maxVertexInputAttributeOffset;
//     uint32_t              maxVertexInputBindingStride;
//     uint32_t              maxVertexOutputComponents;
//     uint32_t              maxTessellationGenerationLevel;
//     uint32_t              maxTessellationPatchSize;
//     uint32_t              maxTessellationControlPerVertexInputComponents;
//     uint32_t              maxTessellationControlPerVertexOutputComponents;
//     uint32_t              maxTessellationControlPerPatchOutputComponents;
//     uint32_t              maxTessellationControlTotalOutputComponents;
//     uint32_t              maxTessellationEvaluationInputComponents;
//     uint32_t              maxTessellationEvaluationOutputComponents;
//     uint32_t              maxGeometryShaderInvocations;
//     uint32_t              maxGeometryInputComponents;
//     uint32_t              maxGeometryOutputComponents;
//     uint32_t              maxGeometryOutputVertices;
//     uint32_t              maxGeometryTotalOutputComponents;
//     uint32_t              maxFragmentInputComponents;
//     uint32_t              maxFragmentOutputAttachments;
//     uint32_t              maxFragmentDualSrcAttachments;
//     uint32_t              maxFragmentCombinedOutputResources;
//     uint32_t              maxComputeSharedMemorySize;
//     uint32_t              maxComputeWorkGroupCount[3];
//     uint32_t              maxComputeWorkGroupInvocations;
//     uint32_t              maxComputeWorkGroupSize[3];
//     uint32_t              subPixelPrecisionBits;
//     uint32_t              subTexelPrecisionBits;
//     uint32_t              mipmapPrecisionBits;
//     uint32_t              maxDrawIndexedIndexValue;
//     uint32_t              maxDrawIndirectCount;
//     float                 maxSamplerLodBias;
//     float                 maxSamplerAnisotropy;
//     uint32_t              maxViewports;
//     uint32_t              maxViewportDimensions[2];
//     float                 viewportBoundsRange[2];
//     uint32_t              viewportSubPixelBits;
//     size_t                minMemoryMapAlignment;
//     VkDeviceSize          minTexelBufferOffsetAlignment;
//     VkDeviceSize          minUniformBufferOffsetAlignment;
//     VkDeviceSize          minStorageBufferOffsetAlignment;
//     int32_t               minTexelOffset;
//     uint32_t              maxTexelOffset;
//     int32_t               minTexelGatherOffset;
//     uint32_t              maxTexelGatherOffset;
//     float                 minInterpolationOffset;
//     float                 maxInterpolationOffset;
//     uint32_t              subPixelInterpolationOffsetBits;
//     uint32_t              maxFramebufferWidth;
//     uint32_t              maxFramebufferHeight;
//     uint32_t              maxFramebufferLayers;
//     VkSampleCountFlags    framebufferColorSampleCounts;
//     VkSampleCountFlags    framebufferDepthSampleCounts;
//     VkSampleCountFlags    framebufferStencilSampleCounts;
//     VkSampleCountFlags    framebufferNoAttachmentsSampleCounts;
//     uint32_t              maxColorAttachments;
//     VkSampleCountFlags    sampledImageColorSampleCounts;
//     VkSampleCountFlags    sampledImageIntegerSampleCounts;
//     VkSampleCountFlags    sampledImageDepthSampleCounts;
//     VkSampleCountFlags    sampledImageStencilSampleCounts;
//     VkSampleCountFlags    storageImageSampleCounts;
//     uint32_t              maxSampleMaskWords;
//     VkBool32              timestampComputeAndGraphics;
//     float                 timestampPeriod;
//     uint32_t              maxClipDistances;
//     uint32_t              maxCullDistances;
//     uint32_t              maxCombinedClipAndCullDistances;
//     uint32_t              discreteQueuePriorities;
//     float                 pointSizeRange[2];
//     float                 lineWidthRange[2];
//     float                 pointSizeGranularity;
//     float                 lineWidthGranularity;
//     VkBool32              strictLines;
//     VkBool32              standardSampleLocations;
//     VkDeviceSize          optimalBufferCopyOffsetAlignment;
//     VkDeviceSize          optimalBufferCopyRowPitchAlignment;
//     VkDeviceSize          nonCoherentAtomSize;
// } VkPhysicalDeviceLimits;
    
namespace apparatus{
    namespace sys {
    };
    class DeviceQualityProperties {

        public:
        VkPhysicalDeviceProperties devProperties ;
        VkPhysicalDevice physDev ;

        
        // uint32 cpuFeatures ;
        // uint32 
        // //TODO Cpu features    
        // SDL_GetSystemRAM()    
        // SDL_GetCPUFeatures() 
        // SDL_GetCPUCacheLineSize();
        void limitsConfig(){

        };
        void configSettings(QualitySettings* sets){
            sets.contents
        };
        void excludeRenderingInformation(quality::Quality renderingQuality){

        };    
        std::string getName(){
            return this->devProperties.deviceName;
        }
        VkPhysicalDeviceLimits* getLimits(){
            return this->devProperties.device.limits
        };
        VkPhysicalDeviceSparseProperties* getSparseProperties(){
            return this->devProperties.device.sparseProperties
            
        };
        DeviceQualityProperties(VkPhysicalDevice physDevice){
            this->devProperties = NULL ;
            vkGetPhysicalDeviceProperties(physDevice ,)
        };
    };

    class settings {
        
        enum Qm {
            platform, // Settings are adaptive to the platform
            standard, // settings are non adaptive 
        };
        Qm quality_mode = Qm.standard ; 
    // TODO atlasing system ensure ;
        void Process_maxImageDimension1D();
        void Process_maxImageDimension2D();
        void Process_maxImageDimension3D();
        void Process_maxImageDimensionCube();
        void Process_maxImageArrayLayers();
        void Process_maxTexelBufferElements();
        void Process_maxUniformBufferRange();
        void Process_maxStorageBufferRange();
        void Process_maxPushConstantsSize();
        void Process_maxMemoryAllocationCount();
        void Process_maxSamplerAllocationCount();
        void Process_bufferImageGranularity();
        void Process_sparseAddressSpaceSize();
        void Process_maxBoundDescriptorSets();
        void Process_maxPerStageDescriptorSamplers();
        void Process_maxPerStageDescriptorUniformBuffers();
        void Process_maxPerStageDescriptorStorageBuffers();
        void Process_maxPerStageDescriptorSampledImages();
        void Process_maxPerStageDescriptorStorageImages();
        void Process_maxPerStageDescriptorInputAttachments();
        void Process_maxPerStageResources();
        void Process_maxDescriptorSetSamplers();
        void Process_maxDescriptorSetUniformBuffers();
        void Process_maxDescriptorSetUniformBuffersDynamic();
        void Process_maxDescriptorSetStorageBuffers();
        void Process_maxDescriptorSetStorageBuffersDynamic();
        void Process_maxDescriptorSetSampledImages();
        void Process_maxDescriptorSetStorageImages();
        void Process_maxDescriptorSetInputAttachments();
        void Process_maxVertexInputAttributes();
        void Process_maxVertexInputBindings();
        void Process_maxVertexInputAttributeOffset();
        void Process_maxVertexInputBindingStride();
        void Process_maxVertexOutputComponents();
        void Process_maxTessellationGenerationLevel();
        void Process_maxTessellationPatchSize();
        void Process_maxTessellationControlPerVertexInputComponents();
        void Process_maxTessellationControlPerVertexOutputComponents();
        void Process_maxTessellationControlPerPatchOutputComponents();
        void Process_maxTessellationControlTotalOutputComponents();
        void Process_maxTessellationEvaluationInputComponents();
        void Process_maxTessellationEvaluationOutputComponents();
        void Process_maxGeometryShaderInvocations();
        void Process_maxGeometryInputComponents();
        void Process_maxGeometryOutputComponents();
        void Process_maxGeometryOutputVertices();
        void Process_maxGeometryTotalOutputComponents();
        void Process_maxFragmentInputComponents();
        void Process_maxFragmentOutputAttachments();
        void Process_maxFragmentDualSrcAttachments();
        void Process_maxFragmentCombinedOutputResources();
        void Process_maxComputeSharedMemorySize();
        void Process_maxComputeWorkGroupCount();
        void Process_maxComputeWorkGroupInvocations();
        void Process_maxComputeWorkGroupSize();
        void Process_subPixelPrecisionBits();
        void Process_subTexelPrecisionBits();
        void Process_mipmapPrecisionBits();
        void Process_maxDrawIndexedIndexValue();
        void Process_maxDrawIndirectCount();
        void Process_maxSamplerLodBias();
        void Process_maxSamplerAnisotropy();
        void Process_maxViewports();
        void Process_maxViewportDimensions();
        void Process_viewportBoundsRange();
        void Process_viewportSubPixelBits();
        void Process_minMemoryMapAlignment();
        void Process_minTexelBufferOffsetAlignment();
        void Process_minUniformBufferOffsetAlignment();
        void Process_minStorageBufferOffsetAlignment();
        void Process_minTexelOffset();
        void Process_maxTexelOffset();
        void Process_minTexelGatherOffset();
        void Process_maxTexelGatherOffset();
        void Process_minInterpolationOffset();
        void Process_maxInterpolationOffset();
        void Process_subPixelInterpolationOffsetBits();
        void Process_maxFramebufferWidth();
        void Process_maxFramebufferHeight();
        void Process_maxFramebufferLayers();
        void Process_framebufferColorSampleCounts();
        void Process_framebufferDepthSampleCounts();
        void Process_framebufferStencilSampleCounts();
        void Process_framebufferNoAttachmentsSampleCounts();
        void Process_maxColorAttachments();
        void Process_sampledImageColorSampleCounts();
        void Process_sampledImageIntegerSampleCounts();
        void Process_sampledImageDepthSampleCounts();
        void Process_sampledImageStencilSampleCounts();
        void Process_storageImageSampleCounts();
        void Process_maxSampleMaskWords();
        void Process_timestampComputeAndGraphics();
        void Process_timestampPeriod();
        void Process_maxClipDistances();
        void Process_maxCullDistances();
        void Process_maxCombinedClipAndCullDistances();
        void Process_discreteQueuePriorities();
        void Process_pointSizeRange();
        void Process_lineWidthRange();
        void Process_pointSizeGranularity();
        void Process_lineWidthGranularity();
        void Process_strictLines();
        void Process_standardSampleLocations();
        void Process_optimalBufferCopyOffsetAlignment();
        void Process_optimalBufferCopyRowPitchAlignment();
        void Process_nonCoherentAtomSize();
        void giveDefault()[

        ]
        
        
    };
   
    class selection {
        std::vector<element> 
    };

#include <typeinfo>

template <typename Out,typename... In>
class Scommand {
    virtual void startcb();
    virtual void endcb();   

    std::string command_name ; 

    std::string variadicTypeIDComma(In... args){
        std::vector<std::type_info> tis =  {typeid(args)...};
        std::string res;
        for(auto const i : tis){
            res+= i;
            if(i!= tis.end()){
                res+=", ";
            } ;
        };
    }
    std::string command_usage = typeid(Out) + command_name + "( "+ this->variadicTypeIDComma(In) +" )";
    virtual Out command(In... ins){

    };;
    
    Out exec(In... args){
        return this->command(args);
    };
    Out operator()(Out out , In... args ){
        
    }
};


class Slog
{
    uint x, y, w, h;
    bool rendered;
   
    std::vector<std::string> messages;
    uint logCount;
    std::pair<uint , uint > renderedRange ;
    bool enabled = true;
   

    void write(std::string Message)
    {
        this->messages.push_back(Message) ;
        if(messages.size > logCount){
            this->messages.erase(this->messages.begin);
        };
    };
    void clear()
    {
        this->messages.clear();
    };
    void operator()(std::string s)
    {
        this->write(s);
    };

    SLog(){
        this->rendered = false; 
    };
};

class mesh_parser {

};
class mesh_writer {

};
class mesh {
    std::string name ; 
    std::string path ;
    sys::mesh mesh ;
    void load(mesh_parser parser){

    };
    void writer(mesh_writer writer){

    };
} 
// TODO think this carefully

#include <material.cpp>
struct materialModule {
    material ;
};
std::string generate_material_module(material mat){

}


template <typename... arg>
class PushConstants {
    arg... v ;
};
template <typename... arg>
class inVar {
    arg... v ; 
};
template <typename... arg>
class outVar {
    arg... v ;
};


// template <typename... push_constants , inVar in_var , outVar out_var>
template <typename... push_constants>
template <typename... in_var>
template <typename... out_var>
class ShaderModule {

    push_constants... pushC ;
    in_var... in; 
    in_var... out ;

    std::vector<char> shadercode ;
    
    VkDescriptorSetLayoutCreateInfo createInfo ; 
    VkDescriptorSetLayout* layout ; 
    void setCreateInfo(){
        this->create
    }
    vkCreateDescriptorSetLayout(VkDevice device, VkDescriptorSetLayoutCreateInfo pCreateInfo, VkAll )
    
};

class EditorShaderModule {
    ShaderModule smod ;
    std::string name; 
    
    
};

class cxxShaderModule {

};
class subPipeLine {
    vkCreateRayTracingPipelinesKHR
};

class PipeLine {


    
};
class elementSpawner{

    virtual void spawnRule()
    
    elementSpawner(element element){

    };

};
class PipeLineBuilder {
    
    std::vector<elementSpawner>
};

namespace lod {

};
namespace sp {

};
namespace wp {
    class wpNode {
        wp::wp
    };
};

class shared {
    std::filesystem::path source_path
};
class module {
    ShaderModule  smod ; 
    shared SharedLib;
    std::vector<ShaderModule> shaderModule   

};

    class destruction {

    }


}