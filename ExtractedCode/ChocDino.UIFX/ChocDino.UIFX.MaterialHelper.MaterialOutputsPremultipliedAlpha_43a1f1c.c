// rea decompile_all
// name: ChocDino.UIFX.MaterialHelper$$MaterialOutputsPremultipliedAlpha
// address: 0x43a1f1c
// body: available
// range: 0x43a1f1c-0x43a215b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a214c to 0x742e558 System.String$$op_Equality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a2158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong ChocDino_UIFX_MaterialHelper__MaterialOutputsPremultipliedAlpha(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09517aa9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c760);
    FUN_03f5c2a4(&DAT_09209f88);
    FUN_03f5c2a4(&DAT_09224438);
    DAT_09517aa9 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  if (param_1 != 0) {
    uVar3 = UnityEngine_Material__get_shader(param_1,0);
    if (*(int *)(DAT_09184e28 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184e28);
    }
    lVar4 = UnityEngine_UI_Graphic__get_defaultGraphicMaterial(0);
    if (lVar4 != 0) {
      uVar5 = UnityEngine_Material__get_shader(lVar4,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar3,uVar5,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Material__HasProperty
                          (param_1,*(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x20),0);
        if ((uVar2 & 1) != 0) {
          if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Material__HasProperty
                            (param_1,*(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x24),0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar1 = UnityEngine_Material__GetInt
                              (param_1,*(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x20),0);
            if (iVar1 != 1) {
              return 0;
            }
            if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar1 = UnityEngine_Material__GetInt
                              (param_1,*(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 0x24),0);
            return (ulong)(iVar1 == 10);
          }
        }
        lVar4 = UnityEngine_Material__GetTag
                          (param_1,DAT_09209f88,0,**(undefined8 **)(DAT_09535468 + 0xb8),0);
        uVar2 = System_String__IsNullOrEmpty(lVar4,0);
        if ((uVar2 & 1) == 0) {
          if (lVar4 != 0) {
            uVar3 = System_String__ToLower(lVar4,0);
            uVar2 = System_String__op_Equality(uVar3,DAT_09224438,0);
            return uVar2;
          }
          goto LAB_043a2158;
        }
      }
      return 1;
    }
  }
LAB_043a2158:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

