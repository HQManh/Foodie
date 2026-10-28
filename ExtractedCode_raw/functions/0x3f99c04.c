// rea decompile_all
// name: FUN_03f99c04
// address: 0x3f99c04
// body: available
// range: 0x3f99c04-0x3f99d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f99c04(long param_1)

{
  bool bVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  void *__src;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  long local_58;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    local_70 = 0;
    lStack_68 = 0;
    local_60 = 0;
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    local_78 = 0;
    lVar7 = FUN_03f99a38(param_1,&local_58,&local_70,&local_88);
    if (local_58 != 0) {
      uVar4 = (int)((ulong)(lStack_68 - local_70) >> 3) * -0x55555555 - 1;
      if (-1 < (int)uVar4) {
        iVar10 = 0;
        lVar9 = ((ulong)uVar4 * 2 + (ulong)uVar4) * 8;
        uVar8 = (ulong)uVar4;
        do {
          puVar2 = (ulong *)(local_70 + lVar9);
          if ((*puVar2 & 1) == 0) {
            local_90 = (void *)puVar2[2];
            uStack_98 = puVar2[1];
            local_a0 = *puVar2;
          }
          else {
            FUN_03f5d0a4(&local_a0,puVar2[2],puVar2[1]);
          }
          pvVar6 = local_90;
          uVar5 = local_a0;
          uVar4 = (uint)((byte)local_a0 >> 1);
          __src = (void *)((ulong)&local_a0 | 1);
          if ((local_a0 & 1) != 0) {
            uVar4 = (uint)uStack_98;
            __src = local_90;
          }
          memcpy((void *)(lVar7 + *(int *)(local_88[uVar8] + 0x24) + (long)iVar10),__src,
                 (long)(int)uVar4);
          iVar3 = *(int *)(local_88[uVar8] + 0x20);
          if ((uVar5 & 1) != 0) {
            operator_delete(pvVar6);
          }
          iVar10 = (iVar10 - iVar3) + uVar4;
          lVar9 = lVar9 + -0x18;
          bVar1 = 0 < (long)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar1);
      }
    }
    if (local_88 != (long *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    local_88 = &local_70;
    FUN_03f73b28(&local_88);
  }
  return lVar7;
}

