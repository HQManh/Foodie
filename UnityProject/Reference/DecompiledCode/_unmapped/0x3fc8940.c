// rea decompile_all
// name: FUN_03fc8940
// address: 0x3fc8940
// body: available
// range: 0x3fc8940-0x3fc8b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fc8940(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint extraout_w9;
  uint uVar6;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar4 < 3) {
    if (1 < uVar4) {
      if (uVar4 != 2) {
LAB_03fc89f8:
        FUN_03fc85f8(param_1,param_1 + 2,param_1 + 4,param_3);
        uVar6 = extraout_w9;
        if (param_1 + 6 != param_2) {
          lVar8 = 0;
          iVar9 = 0;
          puVar5 = param_1 + 4;
          puVar7 = param_1 + 6;
          do {
            uVar4 = FUN_03f7bacc(param_3 + 1,*puVar7,*puVar5);
            uVar6 = (uint)extraout_x9;
            if ((uVar4 & 1) != 0) {
              uVar13 = puVar7[1];
              uVar12 = *puVar7;
              uVar11 = extraout_x9;
              lVar2 = lVar8;
              do {
                lVar10 = lVar2;
                uVar6 = (uint)uVar11;
                *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
                     *(undefined8 *)((long)param_1 + lVar10 + 0x28);
                *(undefined8 *)((long)param_1 + lVar10 + 0x30) =
                     *(undefined8 *)((long)param_1 + lVar10 + 0x20);
                puVar5 = param_1;
                if (lVar10 == -0x20) goto LAB_03fc8a84;
                uVar4 = FUN_03f7bacc(param_3 + 1,uVar12,
                                     *(undefined8 *)((long)param_1 + lVar10 + 0x10));
                uVar6 = (uint)extraout_x9_00;
                uVar11 = extraout_x9_00;
                lVar2 = lVar10 + -0x10;
              } while ((uVar4 & 1) != 0);
              puVar5 = (undefined8 *)((long)param_1 + lVar10 + 0x20);
LAB_03fc8a84:
              iVar9 = iVar9 + 1;
              puVar5[1] = uVar13;
              *puVar5 = uVar12;
              if (iVar9 == 8) {
                uVar3 = 0;
                uVar6 = (uint)(puVar7 + 2 == param_2);
                goto LAB_03fc8b04;
              }
            }
            puVar1 = puVar7 + 2;
            lVar8 = lVar8 + 0x10;
            puVar5 = puVar7;
            puVar7 = puVar1;
          } while (puVar1 != param_2);
        }
        uVar3 = 1;
LAB_03fc8b04:
        uVar3 = uVar3 | uVar6;
        goto LAB_03fc8ad4;
      }
      puVar5 = param_2 + -2;
      uVar4 = FUN_03f7bacc(param_3 + 1,*puVar5,*param_1);
      if ((uVar4 & 1) != 0) {
        uVar11 = *puVar5;
        uVar13 = param_1[1];
        uVar12 = *param_1;
        param_1[1] = param_2[-1];
        *param_1 = uVar11;
        param_2[-1] = uVar13;
        *puVar5 = uVar12;
      }
    }
  }
  else if (uVar4 == 3) {
    FUN_03fc85f8(param_1,param_1 + 2,param_2 + -2,param_3);
  }
  else if (uVar4 == 4) {
    FUN_03fc8b0c(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
  }
  else {
    if (uVar4 != 5) goto LAB_03fc89f8;
    FUN_03fc8bb8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
  }
  uVar3 = 1;
LAB_03fc8ad4:
  return uVar3 & 1;
}

