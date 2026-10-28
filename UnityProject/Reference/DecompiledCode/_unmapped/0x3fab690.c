// rea decompile_all
// name: FUN_03fab690
// address: 0x3fab690
// body: available
// range: 0x3fab690-0x3fab997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03fab690(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ushort uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined4 *puVar17;
  int local_a4;
  int iStack_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  long local_68;
  undefined2 uStack_60;
  ushort uStack_5e;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 local_54;
  undefined1 auStack_48 [8];
  
  lVar7 = DAT_09535250;
  if (param_1 == -1) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = *(long **)(DAT_09535250 + (long)param_1 * 8);
    DataMemoryBarrier(2,1);
    if (plVar16 == (long *)0x0) {
      FUN_03f5d894(auStack_48,&DAT_09535730);
      plVar16 = *(long **)(lVar7 + (long)param_1 * 8);
      if (plVar16 == (long *)0x0) {
        iVar4 = 0;
        if (*(int *)(DAT_09535220 + 0xf4) != 0) {
          iVar4 = *(int *)(DAT_09535220 + 0xf0) / *(int *)(DAT_09535220 + 0xf4);
        }
        lVar9 = DAT_09535218 + *(int *)(DAT_09535220 + 0xec) + (long)(iVar4 * param_1);
        FUN_03f98df4(&local_a4,lVar9,&DAT_0953522c);
        puVar17 = *(undefined4 **)(*(long *)(DAT_09535208 + 0x68) + (long)param_1 * 8);
        plVar16 = calloc(1,(ulong)uStack_5e * 0x10 + 0x138);
        plVar16[0xf] = (long)plVar16;
        uVar11 = (ulong)DAT_09535228;
        if (0 < (int)DAT_09535228) {
          plVar14 = (long *)(DAT_09535240 + 0x10);
          do {
            if (((int)plVar14[-2] <= param_1) &&
               (lVar13 = *plVar14, param_1 < *(int *)(lVar13 + 0x18) + (int)plVar14[-2]))
            goto LAB_03fab794;
            uVar11 = uVar11 - 1;
            plVar14 = plVar14 + 3;
          } while (uVar11 != 0);
        }
        lVar13 = 0;
LAB_03fab794:
        *plVar16 = lVar13;
        lVar6 = DAT_09535220;
        lVar5 = DAT_09535218;
        lVar15 = *(long *)(DAT_09535208 + 0x38);
        lVar13 = DAT_09535218 + *(int *)(DAT_09535220 + 0x20);
        plVar16[2] = lVar13 + local_a4;
        plVar16[3] = lVar13 + iStack_a0;
        plVar14 = *(long **)(lVar15 + (long)local_9c * 8);
        lVar13 = *plVar14;
        plVar16[5] = plVar14[1];
        plVar16[4] = lVar13;
        lVar15 = plVar14[1];
        lVar13 = *plVar14;
        plVar16[0xd] = lVar9;
        plVar16[7] = lVar15;
        plVar16[6] = lVar13;
        *(uint *)(plVar16 + 7) = *(uint *)(plVar16 + 7) & 0x7fffffff | 0x20000000;
        if (local_90 == -1) {
          uVar12 = 0;
          lVar9 = 0;
        }
        else {
          uVar12 = 0x10;
          lVar9 = lVar5 + *(int *)(lVar6 + 0xb0) + (long)local_90 * 0x10;
        }
        uVar2 = *puVar17;
        puVar1 = (ushort *)((long)plVar16 + 0x135);
        uVar3 = *puVar1;
        plVar16[0x1e] = lVar9;
        *(undefined4 *)(plVar16 + 0x1f) = uVar2;
        *(undefined4 *)(plVar16 + 0x20) = uVar2;
        plVar16[0x21] = *(long *)(puVar17 + 1);
        *(undefined4 *)(plVar16 + 0x22) = puVar17[3];
        *(undefined4 *)(plVar16 + 0x23) = local_8c;
        *(undefined4 *)((long)plVar16 + 0x114) = 0xffffffff;
        uVar12 = uVar3 & 0x1eb | uVar12 | (ushort)((local_58 & 2) << 1) |
                 (ushort)((local_58 >> 2 & 1) << 9) | (ushort)((local_58 >> 3 & 1) << 10) |
                 (ushort)((local_58 >> 4 & 1) << 0xb) | (ushort)((local_58 >> 5 & 1) << 0xc);
        *(uint *)((long)plVar16 + 0xe4) = local_58 >> 3 & 1 ^ 1;
        *puVar1 = uVar3 & 0xe000 | uVar12;
        uVar8 = FUN_03fac970(local_58 >> 6 & 0xf);
        *(undefined1 *)((long)plVar16 + 0x134) = uVar8;
        *puVar1 = uVar3 & 0xa000 | uVar12 | (ushort)(local_58 >> 2) & 0x4000;
        plVar16[0x25] = CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60));
        plVar16[0x24] = local_68;
        *(undefined4 *)((long)plVar16 + 0x11c) = local_54;
        lVar9 = FUN_03fc3520(plVar16 + 4);
        plVar16[0xe] = lVar9;
        if (local_94 != -1) {
          lVar9 = FUN_03fbe574(*(undefined8 *)(*(long *)(DAT_09535208 + 0x38) + (long)local_94 * 8),
                               1);
          plVar16[0xb] = lVar9;
        }
        if (local_98 != -1) {
          lVar9 = FUN_03fbe574(*(undefined8 *)(*(long *)(DAT_09535208 + 0x38) + (long)local_98 * 8),
                               1);
          plVar16[10] = lVar9;
        }
        plVar16[8] = (long)plVar16;
        plVar16[9] = (long)plVar16;
        if ((*(byte *)puVar1 >> 2 & 1) != 0) {
          if (local_94 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined8 *)(*(long *)(DAT_09535208 + 0x38) + (long)local_94 * 8);
          }
          lVar9 = FUN_03fbe574(uVar10,1);
          plVar16[8] = lVar9;
          plVar16[9] = lVar9;
          plVar16[0xb] = DAT_09535470;
        }
        DataMemoryBarrier(2,3);
        *(long **)(lVar7 + (long)param_1 * 8) = plVar16;
      }
      FUN_03f5d920(auStack_48);
    }
  }
  return plVar16;
}

