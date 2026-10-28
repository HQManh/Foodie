// rea decompile_all
// name: Utilities.UIEffectFlyThenExplode$$SetUpBeforeFly
// address: 0x4526f68
// body: available
// range: 0x4526f68-0x4527223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452720c to 0x865e6a4 UnityEngine.MonoBehaviour$$StopCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4527220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIEffectFlyThenExplode__SetUpBeforeFly(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if ((DAT_09518600 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5430);
    FUN_03f5c2a4(&DAT_091cd960);
    FUN_03f5c2a4(&DAT_09186250);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518600 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) == 0) {
    uVar6 = FUN_04a6a14c(param_1,DAT_091c5430);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    uVar6 = 0;
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_04527220;
      uVar6 = FUN_04b7c324(*(long *)(param_1 + 0x20),DAT_091cd960);
    }
    puVar5 = (undefined8 *)(param_1 + 0x30);
    *puVar5 = uVar6;
    thunk_FUN_03f5d7b8(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    uVar6 = 0;
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_04527220:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = FUN_04b7c324(*(long *)(param_1 + 0x28),DAT_091cd960);
    }
    puVar7 = (undefined8 *)(param_1 + 0x38);
    *puVar7 = uVar6;
    thunk_FUN_03f5d7b8(puVar7);
    plVar8 = (long *)*puVar7;
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_09186250) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_04527118;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186250,2);
LAB_04527118:
      (*(code *)*puVar2)(plVar8,puVar2[1]);
      plVar8 = (long *)*puVar7;
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_09186250) {
              puVar7 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_04527178;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186250,0);
LAB_04527178:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
      }
    }
    plVar8 = (long *)*puVar5;
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_09186250) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_045271e4;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186250,1);
LAB_045271e4:
      (*(code *)*puVar5)(plVar8,puVar5[1]);
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(long *)(param_1 + 0xb0),0);
      return;
    }
  }
  return;
}

