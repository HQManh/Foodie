// rea decompile_all
// name: System.String$$PadLeft
// address: 0x7431ab4
// body: available
// range: 0x7431ab4-0x7431ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7431c9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__PadLeft(long param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092241f0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091da340);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = param_2 - iVar1;
  if (0 < (int)uVar2) {
    lVar3 = thunk_FUN_03f968a0(param_2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = (ulong)uVar2 - 1;
    uVar11 = 7;
    uVar10 = 6;
    uVar13 = 5;
    uVar12 = 4;
    uVar15 = 3;
    uVar14 = 2;
    uVar17 = 1;
    uVar16 = 0;
    uVar8 = (ulong)(uVar2 + 7) & 0xfffffff8;
    puVar9 = (undefined2 *)(lVar3 + 0x22);
    do {
      if (uVar16 <= uVar7) {
        puVar9[-7] = param_3;
      }
      if (uVar17 <= uVar7) {
        puVar9[-6] = param_3;
      }
      if (uVar14 <= uVar7) {
        puVar9[-5] = param_3;
      }
      if (uVar15 <= uVar7) {
        puVar9[-4] = param_3;
      }
      if (uVar12 <= uVar7) {
        puVar9[-3] = param_3;
      }
      if (uVar13 <= uVar7) {
        puVar9[-2] = param_3;
      }
      if (uVar10 <= uVar7) {
        puVar9[-1] = param_3;
      }
      if (uVar11 <= uVar7) {
        *puVar9 = param_3;
      }
      uVar12 = uVar12 + 8;
      uVar13 = uVar13 + 8;
      uVar14 = uVar14 + 8;
      uVar15 = uVar15 + 8;
      uVar8 = uVar8 - 8;
      uVar16 = uVar16 + 8;
      uVar17 = uVar17 + 8;
      uVar10 = uVar10 + 8;
      uVar11 = uVar11 + 8;
      puVar9 = puVar9 + 8;
    } while (uVar8 != 0);
    System_Buffer__Memmove(lVar3 + 0x14 + (ulong)(uVar2 * 2),param_1 + 0x14,iVar1 << 1,0);
    param_1 = lVar3;
  }
  return param_1;
}

