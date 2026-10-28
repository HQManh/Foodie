// rea decompile_all
// name: CakeOrder.InGame.UIInGameNumberCounter$$RemoveHoldingSource
// address: 0x437b78c
// body: available
// range: 0x437b78c-0x437b8ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437b8ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInGameNumberCounter__RemoveHoldingSource(long *param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if ((DAT_09517940 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09185e58);
    FUN_03f5c2a4(&DAT_091ad408);
    FUN_03f5c2a4(&DAT_091dcbd0);
    DAT_09517940 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (param_1[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = FUN_057e2274(param_1[0xd],param_2,DAT_091ad408);
    if ((uVar2 & 1) != 0) {
      uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar3,param_1,DAT_091dcbd0,0);
      lVar5 = *param_2;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185e58) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_0437b888;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185e58,3);
LAB_0437b888:
      (*(code *)*puVar4)(param_2,uVar3,puVar4[1]);
      if ((char)param_1[5] != '\0') {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        uVar1 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x0437b8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x188))(param_1,uVar1,0,*(undefined8 *)(*param_1 + 400));
        return;
      }
    }
  }
  return;
}

