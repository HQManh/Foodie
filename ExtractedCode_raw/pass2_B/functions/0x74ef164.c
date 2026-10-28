// rea decompile_all
// name: thunk_FUN_03f65778
// address: 0x74ef164
// body: available
// range: 0x74ef164-0x74ef167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_03f65778(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong auStack_60 [4];
  
  lVar2 = tpidr_el0;
  auStack_60[3] = *(long *)(lVar2 + 0x28);
  lVar15 = *(long *)(param_1 + 0x10);
  *param_4 = 0;
  if ((*(ushort *)(lVar15 + 0x4c) >> 4 & 1) == 0) {
    if (param_2 == 0) {
      uVar4 = strcmp(*(char **)(lVar15 + 0x18),".ctor");
      uVar7 = (ulong)uVar4;
      if (uVar4 != 0) {
        if (*(long *)(lVar2 + 0x28) != auStack_60[3]) goto LAB_03f65a1c;
        uVar9 = FUN_03fa70a0("Non-static method requires a target");
        goto LAB_03f659e8;
      }
      param_2 = 0;
      goto joined_r0x03f6581c;
    }
    lVar6 = FUN_03f99350(param_2,*(undefined8 *)(lVar15 + 0x20));
    if (lVar6 != 0) {
      lVar15 = FUN_03f9927c(param_2,lVar15);
      uVar7 = FUN_03fadec0();
      if ((uVar7 & 1) != 0) {
        FUN_03fadd8c(auStack_60,*(undefined8 *)(param_1 + 0x10));
        uVar7 = (ulong)auStack_60 | 1;
        if ((auStack_60[0] & 1) != 0) {
          uVar7 = auStack_60[2];
        }
        uVar7 = FUN_03fa6f18(uVar7);
        if (*(long *)(lVar2 + 0x28) == auStack_60[3]) {
                    /* WARNING: Subroutine does not return */
          FUN_03fa5c38(uVar7,0);
        }
        goto LAB_03f65a1c;
      }
      if (*(int *)(*(long *)(lVar15 + 0x20) + 0x28) < 0) {
        param_2 = FUN_03f99594(param_2);
      }
      goto joined_r0x03f6581c;
    }
    pcVar10 = "TargetException";
    pcVar11 = "Object does not match target type.";
LAB_03f658cc:
    uVar8 = FUN_03fa6670(DAT_095353d8,"System.Reflection",pcVar10,pcVar11);
    FUN_03f5ef9c(param_4,uVar8);
    uVar7 = 0;
  }
  else {
joined_r0x03f6581c:
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_03f98240(param_3);
    }
    if (uVar4 != *(byte *)(lVar15 + 0x52)) {
      pcVar10 = "TargetParameterCountException";
      pcVar11 = "Incorrect number of parameters";
      goto LAB_03f658cc;
    }
    if ((*(char *)(*(long *)(lVar15 + 0x20) + 0x132) == '\0') ||
       (iVar5 = strcmp(*(char **)(lVar15 + 0x18),".ctor"), iVar5 != 0)) {
      auStack_60[0] = 0;
      uVar7 = FUN_03fbcd84(lVar15,param_2,param_3,auStack_60);
      if (auStack_60[0] != 0) {
        uVar9 = auStack_60[0];
        if (*(long *)(lVar2 + 0x28) == auStack_60[3]) {
LAB_03f659e8:
                    /* WARNING: Subroutine does not return */
          FUN_03fa5c38(uVar9,0);
        }
        goto LAB_03f65a1c;
      }
    }
    else {
      uVar7 = FUN_03f98240(param_3);
      puVar13 = (undefined8 *)
                ((long)auStack_60 -
                ((-(uVar7 >> 0x1f & 1) & 0xfffffff800000000 | (uVar7 & 0xffffffff) << 3) + 0xf &
                0xfffffffffffffff0));
      uVar4 = (uint)uVar7;
      if (0 < (int)uVar4) {
        uVar7 = uVar7 & 0xffffffff;
        plVar12 = (long *)(param_3 + 0x20);
        puVar14 = puVar13;
        do {
          uVar7 = uVar7 - 1;
          *puVar14 = *(undefined8 *)(*plVar12 + 0x10);
          plVar12 = plVar12 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar7 != 0);
      }
      bVar1 = *(byte *)(*(long *)(lVar15 + 0x20) + 0x132);
      bVar3 = uVar4 != bVar1;
      uVar7 = 0;
      if (bVar3) {
        uVar7 = (ulong)bVar1;
      }
      puVar14 = (undefined8 *)0x0;
      if (bVar3) {
        puVar14 = puVar13;
      }
      uVar7 = FUN_03f98248(*(long *)(lVar15 + 0x20),puVar13 + uVar7,puVar14);
    }
  }
  if (*(long *)(lVar2 + 0x28) == auStack_60[3]) {
    return;
  }
LAB_03f65a1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

