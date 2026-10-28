// rea decompile_all
// name: FUN_03f795d4
// address: 0x3f795d4
// body: available
// range: 0x3f795d4-0x3f797a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f795d4(long param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  void *__dest;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  int *piVar12;
  ulong uVar13;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  long local_48;
  
  FUN_03f7941c();
  lVar7 = FUN_03fbf154(param_1);
  uVar2 = *(ushort *)(lVar7 + 0x12e);
  uVar10 = (ulong)uVar2;
  lVar9 = 0;
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  local_58 = 0;
  if (*(char *)(param_1 + 0x2a) == '\x1d') {
    FUN_03f7a5b8(*(undefined8 *)(param_1 + 0x40),&local_68);
    lVar9 = ((ulong)((long)local_60 - (long)local_68) >> 1) +
            ((ulong)((long)local_60 - (long)local_68) >> 3);
  }
  __dest = (void *)FUN_03fa7f20((lVar9 + uVar10) * 0x10);
  memcpy(__dest,*(void **)(lVar7 + 0xb0),uVar10 << 4);
  plVar11 = local_68;
  uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
  memcpy((void *)(param_1 + 0x138),(void *)(lVar7 + 0x138),uVar13 << 4);
  plVar8 = plVar11;
  if (plVar11 != local_60) {
    piVar12 = (int *)((long)__dest + uVar10 * 0x10 + 0x28);
    do {
      local_48 = *plVar11 + 0x20;
      lVar9 = FUN_03fc0f40(DAT_09535550,&local_48,1);
      *(long *)(piVar12 + -10) = lVar9;
      uVar6 = DAT_09535558;
      uVar3 = *(ushort *)(lVar9 + 0x120);
      piVar12[-8] = (int)uVar13;
      lVar9 = FUN_03fc0f40(uVar6,&local_48,1);
      iVar1 = (int)uVar13 + (uint)uVar3;
      *(long *)(piVar12 + -6) = lVar9;
      uVar6 = DAT_09535560;
      uVar3 = *(ushort *)(lVar9 + 0x120);
      piVar12[-4] = iVar1;
      lVar9 = FUN_03fc0f40(uVar6,&local_48,1);
      iVar1 = iVar1 + (uint)uVar3;
      *(long *)(piVar12 + -2) = lVar9;
      uVar6 = DAT_09535568;
      uVar3 = *(ushort *)(lVar9 + 0x120);
      *piVar12 = iVar1;
      lVar9 = FUN_03fc0f40(uVar6,&local_48,1);
      iVar1 = iVar1 + (uint)uVar3;
      *(long *)(piVar12 + 2) = lVar9;
      uVar6 = DAT_09535570;
      uVar3 = *(ushort *)(lVar9 + 0x120);
      piVar12[4] = iVar1;
      lVar9 = FUN_03fc0f40(uVar6,&local_48,1);
      uVar4 = *(ushort *)(lVar9 + 0x120);
      plVar11 = plVar11 + 1;
      iVar1 = iVar1 + (uint)uVar3;
      *(long *)(piVar12 + 6) = lVar9;
      piVar12[8] = iVar1;
      uVar13 = (ulong)(iVar1 + (uint)uVar4);
      piVar12 = piVar12 + 0x14;
      plVar8 = local_68;
    } while (plVar11 != local_60);
  }
  uVar5 = (int)plVar11 - (int)plVar8;
  *(void **)(param_1 + 0xb0) = __dest;
  *(ushort *)(param_1 + 0x12e) = (short)(uVar5 >> 3) * 4 + (short)(uVar5 >> 3) + uVar2;
  if (plVar8 != (long *)0x0) {
    local_60 = plVar8;
    operator_delete(plVar8);
  }
  FUN_03f797c8(param_1);
  return;
}

