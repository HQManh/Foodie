// rea decompile_all
// name: MessagePack.BufferWriter$$Commit
// address: 0x7381b40
// body: available
// range: 0x7381b40-0x7381c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7381c48 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7381c4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_BufferWriter__Commit(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  
  if ((DAT_09520a10 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4248);
    FUN_03f5c2a4(&DAT_09179fa0);
    DAT_09520a10 = 1;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 5);
  if (0 < (int)*(uint *)(param_1 + 5)) {
    MessagePack_BufferWriter__MigrateToSequence(param_1);
    lVar3 = param_1[6];
    if (((long)(uVar6 ^ 0x7fffffffffffffff) < lVar3) ||
       ((lVar3 < 0 && ((long)uVar6 < -0x8000000000000000 - lVar3)))) {
      uVar2 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,DAT_091c4248);
    }
    plVar7 = (long *)*param_1;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[6] = lVar3 + uVar6;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09179fa0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07381c18;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09179fa0,0);
LAB_07381c18:
    (*(code *)*puVar1)(plVar7,uVar6,puVar1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

