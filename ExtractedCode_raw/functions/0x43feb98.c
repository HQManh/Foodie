// rea decompile_all
// name: Coffee.UIExtensions.UIParticle$$OnEnable
// address: 0x43feb98
// body: available
// range: 0x43feb98-0x43fecb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fecac to 0x89a5b80 UnityEngine.UI.MaskableGraphic$$OnEnable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43fecb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticle__OnEnable(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((DAT_09517e6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aeee0);
    FUN_03f5c2a4(&DAT_0918c448);
    FUN_03f5c2a4(&DAT_091dce58);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09517e6a = 1;
  }
  iVar3 = *(int *)(param_1 + 0xfc);
  *(undefined1 *)(param_1 + 0x134) = 0;
  if (iVar3 != *(int *)(param_1 + 0x100)) {
    iVar3 = UnityEngine_Random__Range(iVar3,*(int *)(param_1 + 0x100) + 1,0);
  }
  lVar2 = DAT_0918c448;
  iVar1 = *(int *)(DAT_0918c448 + 0xe4);
  *(int *)(param_1 + 0x130) = iVar3;
  if (iVar1 == 0) {
    FUN_03f5c424(lVar2);
  }
  Coffee_UIExtensions_UIParticleUpdater__Register(param_1);
  uVar4 = thunk_FUN_03f9944c(DAT_0918c678);
  UnityEngine_Events_UnityAction___ctor(uVar4,param_1,DAT_091dce58,0);
  UnityEngine_UI_Graphic__RegisterDirtyMaterialCallback(param_1,uVar4,0);
  if (*(long *)(param_1 + 0xf0) != 0) {
    if (*(int *)(*(long *)(param_1 + 0xf0) + 0x18) < 1) {
      uVar4 = UnityEngine_Component__get_gameObject(param_1,0);
      Coffee_UIExtensions_UIParticle__RefreshParticles(param_1,uVar4);
    }
    else {
      Coffee_UIExtensions_UIParticle__RefreshParticles();
    }
    UnityEngine_UI_MaskableGraphic__OnEnable(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

