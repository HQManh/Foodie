// rea decompile_all
// name: FUN_03f8cce0
// address: 0x3f8cce0
// body: available
// range: 0x3f8cce0-0x3f8cdfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8cdf8 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8cce0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  long local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  long local_30;
  ulong *puStack_28;
  
  puStack_28 = (ulong *)(param_1 + 2);
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)*puStack_28) {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    puVar3[2] = param_2[2];
    puVar3[1] = uVar7;
    *puVar3 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar3 = puVar3 + 3;
    param_1[1] = (long)puVar3;
  }
  else {
    lVar4 = (long)puVar3 - *param_1 >> 3;
    uVar1 = lVar4 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_1);
    }
    local_30 = 0;
    lVar2 = (long)*puStack_28 - *param_1 >> 3;
    uVar5 = lVar2 * 0x5555555555555556;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar5 == 0) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = FUN_03f7bc88();
    }
    local_48 = auVar8._0_8_;
    uVar7 = param_2[1];
    uVar6 = *param_2;
    puStack_40 = (undefined8 *)(local_48 + lVar4 * 8);
    local_30 = local_48 + auVar8._8_8_ * 0x18;
    local_38 = puStack_40 + 3;
    puStack_40[2] = param_2[2];
    puStack_40[1] = uVar7;
    *puStack_40 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    FUN_03f8ce10(param_1,&local_48);
    puVar3 = (undefined8 *)param_1[1];
    FUN_03f8ce7c(&local_48);
  }
  param_1[1] = (long)puVar3;
  return;
}

