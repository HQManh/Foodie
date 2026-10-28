// rea decompile_all
// name: FUN_03fab1ec
// address: 0x3fab1ec
// body: available
// range: 0x3fab1ec-0x3fab34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fab1ec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_d0 [80];
  undefined4 local_80 [2];
  long local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  long lVar8;
  
  FUN_03fb1d04(param_1,*(undefined4 *)(lRam0000000009535210 + 0x38));
  iVar4 = DAT_0953522c;
  if (*(int *)(lRam0000000009535210 + 0x38) != 0) {
    uVar11 = 0;
    lVar1 = DAT_09535218 + *(int *)(DAT_09535220 + 0x140);
    do {
      lVar8 = DAT_09535218 + *(int *)(DAT_09535220 + 0x14c);
      lVar2 = lVar8 + uVar11 * 8;
      lVar12 = (long)*(int *)(lVar2 + 4);
      puStack_70 = (undefined8 *)FUN_03fa7f20(lVar12 << 3);
      lVar3 = DAT_09535208;
      uVar9 = *(uint *)(lVar2 + 4);
      uVar5 = (ulong)uVar9;
      if (0 < (int)uVar9) {
        iVar7 = iVar4 * *(int *)(lVar8 + uVar11 * 8);
        puVar6 = puStack_70;
        do {
          lVar8 = (long)iVar7;
          if (iVar4 == 2) {
            uVar9 = (uint)*(ushort *)(lVar1 + lVar8);
            if (uVar9 != 0xffff) goto LAB_03fab2b4;
LAB_03fab2cc:
            uVar10 = 0;
          }
          else {
            if (iVar4 != 1) {
              uVar9 = *(uint *)(lVar1 + lVar8);
              if (uVar9 != 0xffffffff) goto LAB_03fab2b4;
              goto LAB_03fab2cc;
            }
            uVar9 = (uint)*(byte *)(lVar1 + lVar8);
            if (*(byte *)(lVar1 + lVar8) == 0xff) goto LAB_03fab2cc;
LAB_03fab2b4:
            uVar10 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + (long)(int)uVar9 * 8);
          }
          uVar5 = uVar5 - 1;
          iVar7 = iVar7 + iVar4;
          *puVar6 = uVar10;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
      }
      local_80[0] = 0;
      local_68 = (undefined4)uVar11;
      local_78 = lVar12;
      FUN_03fb1e1c(param_1,1);
      FUN_03fb2b4c(auStack_d0,param_1,local_80);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(lRam0000000009535210 + 0x38));
  }
  return;
}

