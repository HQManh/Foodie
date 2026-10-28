// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$OnChangeAutoplayStrategy
// address: 0x42945f4
// body: available
// range: 0x42945f4-0x4294793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429478c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4294790 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__OnChangeAutoplayStrategy
               (undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_095171ba & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd78);
    FUN_03f5c2a4(&DAT_09171328);
    FUN_03f5c2a4(&DAT_09185650);
    FUN_03f5c2a4(&DAT_0918c338);
    DAT_095171ba = 1;
  }
  uVar2 = DAT_09171328;
  if (*(long *)(*(long *)(DAT_0918c338 + 0xb8) + 0x18) == 0) {
    return;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar3 = System_Enum__GetValues(uVar2,0);
  uVar2 = DAT_0917fd78;
  if (lVar3 == 0) {
    if ((int)param_2 < 0) {
      return;
    }
  }
  else {
    lVar4 = thunk_FUN_03f99350(lVar3,DAT_0917fd78);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar3,uVar2);
    }
    if ((int)param_2 < 0) {
      return;
    }
    if (*(int *)(lVar4 + 0x18) <= (int)param_2) {
      return;
    }
    plVar8 = *(long **)(*(long *)(DAT_0918c338 + 0xb8) + 0x18);
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar1 = *(undefined4 *)(lVar4 + (ulong)param_2 * 4 + 0x20);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185650) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_04294768;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185650,4);
LAB_04294768:
                    /* WARNING: Could not recover jumptable at 0x04294780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar8,uVar1,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

