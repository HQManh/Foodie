// rea decompile_all
// name: FUN_040076fc
// address: 0x40076fc
// body: available
// range: 0x40076fc-0x40078df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40078dc to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_040076fc(long *param_1,long param_2,long param_3,long param_4,long param_5,
                   undefined4 param_6)

{
  ulong uVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong local_68;
  ulong local_60;
  undefined4 *local_58;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar5 = param_4 - param_2 >> 2;
  lVar10 = param_3 - param_2 >> 2;
  uVar4 = *(long *)(param_5 + 0x18) - lVar5;
  uVar1 = uVar4;
  if (uVar4 == 0 || *(long *)(param_5 + 0x18) < lVar5) {
    uVar1 = 0;
  }
  if ((0 < lVar10) &&
     (lVar5 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar10), lVar5 != lVar10)) {
    return (long *)0x0;
  }
  if ((long)uVar1 < 1) goto LAB_04007874;
  if (0x3fffffffffffffef < uVar1) {
    FUN_03fe3950(&local_68);
LAB_040078dc:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  if (uVar1 < 5) {
    puVar3 = (undefined4 *)((ulong)&local_68 | 4);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)uVar1 << 1));
    puVar6 = puVar3;
    if (uVar4 < 8) goto LAB_0400781c;
LAB_040077ec:
    uVar7 = uVar4 & 0xfffffffffffffff8;
    puVar8 = (undefined8 *)(puVar3 + 4);
    uVar9 = uVar7;
    do {
      puVar8[-1] = CONCAT44(param_6,param_6);
      puVar8[-2] = CONCAT44(param_6,param_6);
      puVar8[1] = CONCAT44(param_6,param_6);
      *puVar8 = CONCAT44(param_6,param_6);
      uVar9 = uVar9 - 8;
      puVar8 = puVar8 + 4;
    } while (uVar9 != 0);
    bVar2 = uVar4 != uVar7;
    puVar6 = puVar3 + uVar7;
    uVar4 = uVar4 & 7;
    if (bVar2) goto LAB_0400781c;
  }
  else {
    if (0x3ffffffffffffffe < (uVar1 | 3)) goto LAB_040078dc;
    uVar9 = (uVar1 | 3) + 1;
    puVar3 = operator_new(uVar9 * 4);
    local_68 = uVar9 | 1;
    puVar6 = puVar3;
    local_60 = uVar1;
    local_58 = puVar3;
    if (7 < uVar4) goto LAB_040077ec;
LAB_0400781c:
    do {
      uVar4 = uVar4 - 1;
      *puVar6 = param_6;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  puVar3[uVar1] = 0;
  puVar6 = (undefined4 *)((ulong)&local_68 | 4);
  if ((local_68 & 1) != 0) {
    puVar6 = local_58;
  }
  uVar4 = (**(code **)(*param_1 + 0x60))(param_1,puVar6,uVar1);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (uVar4 != uVar1) {
    return (long *)0x0;
  }
LAB_04007874:
  lVar5 = param_4 - param_3 >> 2;
  if ((0 < lVar5) &&
     (lVar10 = (**(code **)(*param_1 + 0x60))(param_1,param_3,lVar5), lVar10 != lVar5)) {
    return (long *)0x0;
  }
  *(undefined8 *)(param_5 + 0x18) = 0;
  return param_1;
}

