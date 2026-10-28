// rea decompile_all
// name: FUN_03fbe220
// address: 0x3fbe220
// body: available
// range: 0x3fbe220-0x3fbe2af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbe298 to 0x89dbd60 operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbe2ac to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbe220(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  lVar5 = *param_1;
  if ((ulong)(param_1[2] - lVar5 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_1);
    }
    lVar6 = param_1[1];
    auVar12 = FUN_03f87218();
    puVar2 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)(auVar12._0_8_ + (lVar6 - lVar5));
    puVar7 = puVar1;
    puVar8 = puVar1;
    if (puVar4 != puVar2) {
      do {
        puVar3 = puVar4 + -4;
        uVar11 = *puVar3;
        uVar10 = puVar4[-1];
        uVar9 = puVar4[-2];
        puVar8 = puVar7 + -4;
        puVar7[-3] = puVar4[-3];
        *puVar8 = uVar11;
        puVar7[-1] = uVar10;
        puVar7[-2] = uVar9;
        puVar4 = puVar3;
        puVar7 = puVar8;
      } while (puVar3 != puVar2);
      puVar4 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar1;
    param_1[2] = auVar12._0_8_ + auVar12._8_8_ * 0x20;
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete(puVar4);
      return;
    }
  }
  return;
}

