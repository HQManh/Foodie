// rea decompile_all
// name: UnityEngine.UI.Extensions.Gradient2$$.ctor
// address: 0x44f3728
// body: available
// range: 0x44f3728-0x44f3887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f3880 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44f3884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_UI_Extensions_Gradient2___ctor(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if ((DAT_0951841b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917ffb0);
    FUN_03f5c2a4(&DAT_09184da0);
    DAT_0951841b = 1;
  }
  uVar1 = DAT_09184da0;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  lVar2 = thunk_FUN_03f9944c(uVar1);
  UnityEngine_Gradient___ctor(lVar2,0);
  lVar3 = FUN_03f5c394(DAT_0917ffb0,2);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  UnityEngine_GradientColorKey___ctor(0,0,0,0x3f800000,0,&local_48,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x28) = uStack_40;
      *(undefined8 *)(lVar3 + 0x20) = local_48;
      *(undefined4 *)(lVar3 + 0x30) = local_38;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      UnityEngine_GradientColorKey___ctor
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,&local_60,0);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined4 *)(lVar3 + 0x44) = local_50;
        *(undefined8 *)(lVar3 + 0x3c) = uStack_58;
        *(undefined8 *)(lVar3 + 0x34) = local_60;
        if (lVar2 != 0) {
          UnityEngine_Gradient__set_colorKeys(lVar2,lVar3,0);
          *(long *)(param_1 + 0x40) = lVar2;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),lVar2);
          UnityEngine_UI_BaseMeshEffect___ctor(param_1,0);
          return;
        }
        goto LAB_044f3884;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_044f3884:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

