// rea decompile_all
// name: FUN_03fb5840
// address: 0x3fb5840
// body: available
// range: 0x3fb5840-0x3fb598b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb5988 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb5840(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  long local_40;
  ulong *puStack_38;
  
  puStack_38 = (ulong *)(param_1 + 2);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)*puStack_38) {
    *puVar2 = *param_2;
    uVar9 = param_2[2];
    uVar4 = param_2[1];
    puVar2[3] = param_2[3];
    puVar2[2] = uVar9;
    puVar2[1] = uVar4;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    puVar2[4] = param_2[4];
    uVar4 = param_2[5];
    puVar7 = puVar2 + 6;
    param_1[1] = (long)puVar7;
    puVar2[5] = uVar4;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    lVar3 = lVar8 >> 4;
    uVar1 = lVar3 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_1);
    }
    local_40 = 0;
    lVar5 = (long)*puStack_38 - *param_1 >> 4;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    auVar10 = FUN_03fba074(puStack_38,uVar6);
    local_58 = auVar10._0_8_;
    puStack_50 = (undefined8 *)(local_58 + lVar8);
    local_40 = local_58 + auVar10._8_8_ * 0x30;
    *puStack_50 = *param_2;
    uVar9 = param_2[1];
    uVar4 = param_2[3];
    puStack_50[2] = param_2[2];
    puStack_50[1] = uVar9;
    puStack_50[3] = uVar4;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    puStack_50[4] = param_2[4];
    local_48 = puStack_50 + 6;
    *(undefined8 *)(local_58 + lVar3 * 0x10 + 0x28) = param_2[5];
    FUN_03fb9fe0(param_1,&local_58);
    puVar7 = (undefined8 *)param_1[1];
    FUN_03fba04c(&local_58);
  }
  param_1[1] = (long)puVar7;
  return;
}

