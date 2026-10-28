// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$SetUpOverrideAuthorDropdown
// address: 0x433cb70
// body: available
// range: 0x433cb70-0x433cd83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433cd68 to 0x647eec0 FUN_0647eec0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x433cd7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433cd80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__SetUpOverrideAuthorDropdown(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_0951773c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0560);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091dc7b0);
    FUN_03f5c2a4(&DAT_0917f6c0);
    FUN_03f5c2a4(&DAT_091be050);
    FUN_03f5c2a4(&DAT_0921a3f8);
    DAT_0951773c = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = **(long **)(DAT_09189e78 + 0xb8);
    if (lVar5 != 0) {
      uVar4 = FUN_03f5c394(DAT_091805f8,*(int *)(lVar5 + 0x18) + 1);
      *(undefined8 *)(param_1 + 0x1e0) = uVar4;
      thunk_FUN_03f5d7b8(param_1 + 0x1e0,uVar4);
      lVar2 = *(long *)(param_1 + 0x1e0);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar2 + 0x20) = DAT_0921a3f8;
        thunk_FUN_03f5d7b8();
        System_Array__Copy(lVar5,0,*(undefined8 *)(param_1 + 0x1e0),1,*(undefined4 *)(lVar5 + 0x18),
                           0);
        if (*(long *)(param_1 + 0x1d8) != 0) {
          TMPro_TMP_Dropdown__ClearOptions(*(long *)(param_1 + 0x1d8),0);
          lVar5 = *(long *)(param_1 + 0x1d8);
          uVar4 = *(undefined8 *)(param_1 + 0x1e0);
          uVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
          FUN_057e053c(uVar3,uVar4,DAT_091b0560);
          if (lVar5 != 0) {
            TMPro_TMP_Dropdown__AddOptions(lVar5,uVar3,0);
            if (*(long *)(param_1 + 0x1d8) != 0) {
              lVar5 = *(long *)(*(long *)(param_1 + 0x1d8) + 0x140);
              uVar4 = thunk_FUN_03f9944c(DAT_0917f6c0);
              FUN_06478a9c(uVar4,param_1,DAT_091dc7b0,0);
              if (lVar5 != 0) {
                FUN_0647eec0(lVar5,uVar4,DAT_091be050);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

