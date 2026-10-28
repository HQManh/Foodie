// rea decompile_all
// name: CW.Common.CwHelper$$GetReadableCopy
// address: 0x44ee6e8
// body: available
// range: 0x44ee6e8-0x44ee8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ee8f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CW_Common_CwHelper__GetReadableCopy
               (long *param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if ((DAT_095183fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bc08);
    FUN_03f5c2a4(&DAT_091ffae8);
    DAT_095183fe = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(param_1,0,0);
  lVar3 = 0;
  if ((uVar1 & 1) != 0) {
    if (param_4 < 1) {
      if (param_1 == (long *)0x0) goto LAB_044ee8f8;
      param_4 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    }
    if (param_5 < 1) {
      if (param_1 == (long *)0x0) goto LAB_044ee8f8;
      param_5 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    }
    local_50 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    UnityEngine_RenderTextureDescriptor___ctor(&local_80,param_4,param_5,0,0,0);
    uStack_b8 = uStack_78;
    local_c0 = local_80;
    uStack_a8 = uStack_68;
    uStack_b0 = local_70;
    uStack_98 = uStack_58;
    local_a0 = local_60;
    local_90 = local_50;
    uVar2 = CW_Common_CwRenderTextureManager__GetTemporary(&local_c0);
    lVar3 = thunk_FUN_03f9944c(DAT_0918bc08);
    UnityEngine_Texture2D___ctor(lVar3,param_4,param_5,param_2,param_3 & 1,0,0);
    if (*(int *)(DAT_09183140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CW_Common_CwHelper__BeginActive(uVar2);
    if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Graphics__Blit(param_1,uVar2,0);
    if (lVar3 == 0) {
LAB_044ee8f8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Texture2D__ReadPixels(0,0,(float)param_4,(float)param_5,lVar3,0,0,0);
    CW_Common_CwHelper__EndActive();
    CW_Common_CwRenderTextureManager__ReleaseTemporary(uVar2);
    UnityEngine_Texture2D__Apply(lVar3,0);
  }
  return lVar3;
}

