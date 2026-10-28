// rea decompile_all
// name: FUN_03f83404
// address: 0x3f83404
// body: available
// range: 0x3f83404-0x3f835af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f835ac to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f83404(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  void *local_58;
  void *pvStack_50;
  void *local_48;
  void *local_40;
  long *plStack_38;
  
  uVar3 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar3) {
    if (param_2 < uVar3) {
      puVar1 = (undefined8 *)(*param_1 + param_2 * 0x10);
      puVar7 = (undefined8 *)param_1[1];
      while (puVar2 = puVar7, puVar2 != puVar1) {
        puVar7 = puVar2 + -2;
        if ((void *)*puVar7 != (void *)0x0) {
          free((void *)*puVar7);
          puVar2[-2] = 0;
        }
      }
      param_1[1] = (long)puVar1;
    }
    return;
  }
  param_2 = param_2 - uVar3;
  plStack_38 = param_1 + 2;
  lVar8 = param_1[1];
  if ((ulong)(*plStack_38 - lVar8 >> 4) < param_2) {
    lVar8 = lVar8 - *param_1 >> 4;
    uVar3 = param_2 + lVar8;
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_1);
    }
    uVar4 = *plStack_38 - *param_1;
    uVar5 = (long)uVar4 >> 3;
    local_40 = (void *)0x0;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 == 0) {
      local_58 = (void *)0x0;
    }
    else {
      local_58 = malloc(uVar5 << 4);
    }
    pvVar10 = (void *)((long)local_58 + lVar8 * 0x10);
    local_40 = (void *)((long)local_58 + uVar5 * 0x10);
    pvVar11 = pvVar10;
    pvStack_50 = pvVar10;
    if ((param_2 & 0xfffffffffffffff) != 0) {
      pvVar11 = (void *)((long)pvVar10 + param_2 * 0x10);
      lVar8 = param_2 * 0x10;
      local_48 = pvVar10;
      do {
        FUN_03f83648(pvVar10,param_3);
        lVar8 = lVar8 + -0x10;
        pvVar10 = (void *)((long)pvVar10 + 0x10);
      } while (lVar8 != 0);
    }
    local_48 = pvVar11;
    FUN_03f835dc(param_1,&local_58);
    FUN_03f5f95c(&local_58);
  }
  else {
    lVar9 = lVar8;
    if ((param_2 & 0xfffffffffffffff) != 0) {
      lVar9 = lVar8 + param_2 * 0x10;
      lVar6 = param_2 * 0x10;
      do {
        FUN_03f83648(lVar8,param_3);
        lVar6 = lVar6 + -0x10;
        lVar8 = lVar8 + 0x10;
      } while (lVar6 != 0);
    }
    param_1[1] = lVar9;
  }
  return;
}

