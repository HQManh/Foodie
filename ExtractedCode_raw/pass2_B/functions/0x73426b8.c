// rea decompile_all
// name: Lean.Common.LeanSelect$$TrySelect
// address: 0x73426b8
// body: available
// range: 0x73426b8-0x7342933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7342930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Lean_Common_LeanSelect__TrySelect(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_095206b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_09187700);
    FUN_03f5c2a4(&DAT_091ae198);
    FUN_03f5c2a4(&DAT_091ae1a0);
    FUN_03f5c2a4(&DAT_091ae1c0);
    FUN_03f5c2a4(&DAT_091ae1c8);
    FUN_03f5c2a4(&DAT_091be0a0);
    DAT_095206b1 = 1;
  }
  if (*(int *)(DAT_09183140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = CW_Common_CwHelper__Enabled(param_2,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x50) != 0) {
      UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_1 + 0x50),0);
    }
    if (*(char *)(param_1 + 0x28) != '\0') {
      Lean_Common_LeanSelect__DeselectAll(param_1);
    }
  }
  else {
    uVar2 = Lean_Common_LeanSelect__TryReselect(param_1,param_2);
    if ((uVar2 & 1) != 0) {
      lVar3 = Lean_Common_LeanSelect__get_Selectables(param_1);
      if (lVar3 != 0) {
        uVar2 = FUN_057e1004(lVar3,param_2,DAT_091ae1a0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(param_1 + 0x2c) == 2) {
            lVar3 = *(long *)(param_1 + 0x38);
            if (lVar3 == 0) goto LAB_07342930;
            if ((0 < *(int *)(lVar3 + 0x18)) && (*(int *)(param_1 + 0x30) <= *(int *)(lVar3 + 0x18))
               ) {
              uVar4 = FUN_057e0998(lVar3,0,DAT_091ae1c8);
              Lean_Common_LeanSelect__TryDeselect(param_1,uVar4);
            }
          }
          else if (*(int *)(param_1 + 0x2c) == 1) {
            if (*(long *)(param_1 + 0x38) == 0) goto LAB_07342930;
            if (*(int *)(param_1 + 0x30) <= *(int *)(*(long *)(param_1 + 0x38) + 0x18)) {
              return 0;
            }
          }
        }
        lVar3 = DAT_091ae198;
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = param_2;
              thunk_FUN_03f5d7b8(plVar7,param_2);
            }
            else {
              FUN_057e0c68(lVar5,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x40) != 0) {
              FUN_0647fad4(*(long *)(param_1 + 0x40),param_2,DAT_091be0a0);
            }
            if (*(int *)(DAT_09187700 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = *(long *)(*(long *)(DAT_09187700 + 0xb8) + 8);
            if (lVar3 != 0) {
              if (*(int *)(DAT_09187700 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar3 = *(long *)(*(long *)(DAT_09187700 + 0xb8) + 8);
                if (lVar3 == 0) goto LAB_07342930;
              }
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),param_1,param_2,*(undefined8 *)(lVar3 + 0x28)
                        );
            }
            if (param_2 != 0) {
              Lean_Common_LeanSelectable__InvokeOnSelected(param_2,param_1);
              return 1;
            }
          }
        }
      }
LAB_07342930:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

