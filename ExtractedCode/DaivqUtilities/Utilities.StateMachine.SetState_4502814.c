// rea decompile_all
// name: Utilities.StateMachine$$SetState
// address: 0x4502814
// body: available
// range: 0x4502814-0x45029df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45029dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_StateMachine__SetState(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((DAT_095184ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cfc0);
    FUN_03f5c2a4(&DAT_09186698);
    FUN_03f5c2a4(&DAT_0918b1b8);
    DAT_095184ad = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0x18);
  plVar6 = (long *)*puVar5;
  if (plVar6 == param_2) {
    return;
  }
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_09186698) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_045028dc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186698,2);
LAB_045028dc:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  *(long **)(param_1 + 0x18) = param_2;
  thunk_FUN_03f5d7b8(puVar5,param_2);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_2,*(undefined8 *)(lVar2 + 0x28))
    ;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_06fd9fbc(*(long *)(param_1 + 0x20),*puVar5,param_1 + 0x28,DAT_0919cfc0);
    if (*(long *)(param_1 + 0x28) == 0) {
      if (*(int *)(DAT_0918b1b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(DAT_0918b1b8 + 0xb8);
      thunk_FUN_03f5d7b8(param_1 + 0x28);
    }
    plVar6 = (long *)*puVar5;
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_09186698) {
            puVar5 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_045029c4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186698,1);
LAB_045029c4:
                    /* WARNING: Could not recover jumptable at 0x045029d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

