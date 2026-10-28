// rea decompile_all
// name: thunk_FUN_03f66724
// address: 0x74e9c20
// body: available
// range: 0x74e9c20-0x74e9c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_03f66724(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,
                       undefined1 *param_4)

{
  int *piVar1;
  long *plVar2;
  void *pvVar3;
  undefined1 *puVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_188 [32];
  byte abStack_168 [8];
  ulong uStack_160;
  void *pvStack_158;
  undefined1 auStack_150 [48];
  byte bStack_120;
  undefined1 auStack_11f [15];
  undefined1 *puStack_110;
  byte bStack_108;
  undefined1 auStack_107 [15];
  undefined1 *puStack_f8;
  byte bStack_f0;
  undefined1 auStack_ef [15];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  long lStack_68;
  
  lVar5 = tpidr_el0;
  lStack_68 = *(long *)(lVar5 + 0x28);
  FUN_03f6321c(abStack_168,param_1);
  FUN_03fb728c(auStack_150);
  FUN_03fb5cac(auStack_188,abStack_168,auStack_150,0);
  uVar7 = FUN_03fb40a0(auStack_188);
  if ((uVar7 & 1) != 0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
      bVar6 = (abStack_168[0] & 1) != 0;
      uVar12 = (ulong)(abStack_168[0] >> 1);
      if (bVar6) {
        uVar12 = uStack_160;
      }
      pvVar3 = (void *)((ulong)abStack_168 | 1);
      if (bVar6) {
        pvVar3 = pvStack_158;
      }
      if (6 < (long)uVar12) {
        piVar1 = (int *)((long)pvVar3 + uVar12);
        pvVar9 = pvVar3;
        while (piVar8 = memchr(pvVar9,0x56,uVar12 - 6), piVar8 != (int *)0x0) {
          if (*piVar8 == 0x73726556 && *(int *)((long)piVar8 + 3) == 0x6e6f6973) {
            if ((piVar8 != piVar1) && ((long)piVar8 - (long)pvVar3 != -1)) {
              *param_3 = 1;
            }
            break;
          }
          pvVar9 = (void *)((long)piVar8 + 1);
          uVar12 = (long)piVar1 - (long)pvVar9;
          if ((long)uVar12 < 7) break;
        }
      }
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
      bVar6 = (abStack_168[0] & 1) != 0;
      uVar12 = (ulong)(abStack_168[0] >> 1);
      if (bVar6) {
        uVar12 = uStack_160;
      }
      pvVar3 = (void *)((ulong)abStack_168 | 1);
      if (bVar6) {
        pvVar3 = pvStack_158;
      }
      if (0xd < (long)uVar12) {
        plVar2 = (long *)((long)pvVar3 + uVar12);
        pvVar9 = pvVar3;
        while (plVar10 = memchr(pvVar9,0x50,uVar12 - 0xd), plVar10 != (long *)0x0) {
          if (*plVar10 == 0x654b63696c627550 && *(long *)((long)plVar10 + 6) == 0x6e656b6f5479654b)
          {
            if ((plVar10 != plVar2) && ((long)plVar10 - (long)pvVar3 != -1)) {
              *param_4 = 1;
            }
            break;
          }
          pvVar9 = (void *)((long)plVar10 + 1);
          uVar12 = (long)plVar2 - (long)pvVar9;
          if ((long)uVar12 < 0xe) break;
        }
      }
    }
    puVar4 = auStack_11f;
    if ((bStack_120 & 1) != 0) {
      puVar4 = puStack_110;
    }
    uVar11 = FUN_03f92a28(puVar4);
    *param_2 = uVar11;
    puVar4 = auStack_107;
    if ((bStack_108 & 1) != 0) {
      puVar4 = puStack_f8;
    }
    uVar12 = FUN_03f94958(puVar4,"neutral");
    if ((uVar12 & 1) == 0) {
      puVar4 = auStack_107;
      if ((bStack_108 & 1) != 0) {
        puVar4 = puStack_f8;
      }
      uVar11 = FUN_03f92a28(puVar4);
    }
    else {
      uVar11 = 0;
    }
    param_2[1] = uVar11;
    puVar4 = auStack_ef;
    if ((bStack_f0 & 1) != 0) {
      puVar4 = puStack_e0;
    }
    uVar11 = FUN_03f92a28(puVar4);
    param_2[3] = uVar11;
    *(undefined1 *)(param_2 + 6) = uStack_c8;
    param_2[5] = uStack_d0;
    param_2[4] = uStack_d8;
    *(undefined8 *)((long)param_2 + 0x34) = uStack_c4;
    *(undefined4 *)((long)param_2 + 0x3c) = uStack_bc;
    param_2[8] = uStack_b8;
  }
  FUN_03fb72c4(auStack_150);
  if ((abStack_168[0] & 1) != 0) {
    operator_delete(pvStack_158);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_68) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

