// rea decompile_all
// name: Coffee.UIEffects.UIEffectBase.<>c$$<GetModifiedMaterial>b__36_0
// address: 0x43f0d24
// body: available
// range: 0x43f0d24-0x43f0e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f0e14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Coffee_UIEffects_UIEffectBase_<>c__<GetModifiedMaterial>b__36_0
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09517de1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_091f8220);
    FUN_03f5c2a4(&DAT_09203fb8);
    FUN_03f5c2a4(&DAT_09203fe8);
    DAT_09517de1 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09187e28);
  UnityEngine_Material___ctor(lVar1,param_2,0);
  lVar2 = Coffee_UIEffects_UIEffectProjectSettings__get_shaderRegistry();
  if (((param_2 != 0) && (uVar3 = UnityEngine_Material__get_shader(param_2,0), lVar2 != 0)) &&
     (uVar3 = Coffee_UIEffectInternal_ShaderVariantRegistry__FindOptionalShader
                        (lVar2,uVar3,DAT_091f8220,DAT_09203fe8,DAT_09203fb8), lVar1 != 0)) {
    UnityEngine_Material__set_shader(lVar1,uVar3,0);
    UnityEngine_Object__set_hideFlags(lVar1,0x3d,0);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

