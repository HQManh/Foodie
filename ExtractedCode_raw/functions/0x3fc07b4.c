// rea decompile_all
// name: FUN_03fc07b4
// address: 0x3fc07b4
// body: available
// range: 0x3fc07b4-0x3fc094b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc0948 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc07b4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_c0;
  long local_b8 [2];
  undefined8 *puStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar2 = *(byte *)(param_2 + 0x52);
  *(undefined1 *)(param_1 + 2) = 0;
  lVar11 = (ulong)bVar2 + 1;
  lVar5 = -((ulong)((int)lVar11 * 8 + 0xf) & 0x1ff0);
  puVar10 = (undefined8 *)((long)&uStack_c0 + lVar5);
  uVar8 = FUN_03fc370c(*(undefined8 *)(param_2 + 0x28));
  cVar3 = *(char *)(param_2 + 0x52);
  *puVar10 = uVar8;
  if (cVar3 != '\0') {
    uVar9 = 0;
    do {
      uVar8 = FUN_03fc370c(*(undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 8));
      bVar2 = *(byte *)(param_2 + 0x52);
      uVar1 = uVar9 + 1;
      *(undefined8 *)((long)local_b8 + uVar9 * 8 + lVar5) = uVar8;
      uVar9 = uVar1;
    } while (uVar1 < bVar2);
  }
  local_b8[0]._0_4_ = 0;
  local_b8[1] = lVar11;
  puStack_a8 = puVar10;
  FUN_03fca824(&local_a0,DAT_09535ba8,local_b8);
  lVar7 = local_80;
  lVar6 = local_88;
  lVar5 = local_90;
  lVar11 = local_98;
  local_98 = *(long *)(DAT_09535ba8 + 0x48);
  local_90 = *(long *)(DAT_09535ba8 + 0x50);
  local_60 = 0;
  local_a0 = DAT_09535ba8;
  local_80 = 0;
  local_88 = local_90;
  lStack_78 = local_98;
  local_70 = local_90;
  lStack_68 = local_90;
  FUN_03fb2ea4(&local_a0);
  if ((((lVar11 == local_98) && (lVar5 == local_90)) && (lVar6 == local_88)) &&
     ((lVar6 == lVar5 || (lVar7 == local_80)))) {
    puVar10 = (undefined8 *)FUN_03fade98();
    uVar8 = *puVar10;
    *param_1 = uVar8;
    param_1[1] = uVar8;
  }
  else {
    uVar9 = FUN_03fadb6c(param_2);
    lVar11 = (long)*(int *)(lVar7 + 0x18);
    if ((uVar9 & 1) == 0) {
      uVar8 = *(undefined8 *)(*(long *)(DAT_09535b78 + 0x50) + lVar11 * 8);
      *param_1 = uVar8;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(DAT_09535b78 + 0x40) + lVar11 * 8);
      *param_1 = *(undefined8 *)(*(long *)(DAT_09535b78 + 0x48) + lVar11 * 8);
    }
    param_1[1] = uVar8;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

