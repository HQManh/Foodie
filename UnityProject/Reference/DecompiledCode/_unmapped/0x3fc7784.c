// rea decompile_all
// name: FUN_03fc7784
// address: 0x3fc7784
// body: available
// range: 0x3fc7784-0x3fc79af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fc7784(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint extraout_w9;
  uint extraout_w9_00;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x9;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar2 = ((long)param_2 - (long)param_1 >> 3) * 0x6db6db6db6db6db7;
  if ((long)uVar2 < 3) {
    if (1 < uVar2) {
      if (uVar2 != 2) {
LAB_03fc787c:
        FUN_03fc72bc(param_1,param_1 + 7,param_1 + 0xe,param_3);
        uVar4 = extraout_w9;
        if (param_1 + 0x15 != param_2) {
          iVar9 = 0;
          lVar10 = 0xa8;
          puVar7 = param_1 + 0xe;
          puVar8 = param_1 + 0x15;
          do {
            uVar2 = FUN_03f7bacc(param_3 + 1,puVar8[6],puVar7[6]);
            uVar4 = extraout_w9_00;
            if ((uVar2 & 1) != 0) {
              uVar13 = puVar8[1];
              uVar12 = *puVar8;
              uVar15 = puVar8[3];
              uVar14 = puVar8[2];
              uVar17 = puVar8[5];
              uVar16 = puVar8[4];
              uVar5 = puVar8[6];
              lVar11 = lVar10;
              do {
                puVar7 = (undefined8 *)((long)param_1 + lVar11);
                lVar11 = lVar11 + -0x38;
                uVar6 = puVar7[-1];
                puVar7[1] = puVar7[-6];
                *puVar7 = puVar7[-7];
                puVar7[3] = puVar7[-4];
                puVar7[2] = puVar7[-5];
                puVar7[5] = puVar7[-2];
                puVar7[4] = puVar7[-3];
                puVar7[6] = uVar6;
                puVar3 = param_1;
                if (lVar11 == 0) goto LAB_03fc791c;
                uVar2 = FUN_03f7bacc(param_3 + 1,uVar5,puVar7[-8]);
              } while ((uVar2 & 1) != 0);
              puVar3 = (undefined8 *)((long)param_1 + lVar11);
              uVar6 = extraout_x9;
LAB_03fc791c:
              uVar4 = (uint)uVar6;
              iVar9 = iVar9 + 1;
              puVar3[6] = uVar5;
              puVar3[1] = uVar13;
              *puVar3 = uVar12;
              puVar3[3] = uVar15;
              puVar3[2] = uVar14;
              puVar3[5] = uVar17;
              puVar3[4] = uVar16;
              if (iVar9 == 8) {
                uVar1 = 0;
                uVar4 = (uint)(puVar8 + 7 == param_2);
                goto LAB_03fc79a8;
              }
            }
            puVar3 = puVar8 + 7;
            lVar10 = lVar10 + 0x38;
            puVar7 = puVar8;
            puVar8 = puVar3;
          } while (puVar3 != param_2);
        }
        uVar1 = 1;
LAB_03fc79a8:
        uVar1 = uVar1 | uVar4;
        goto LAB_03fc7978;
      }
      uVar2 = FUN_03f7bacc(param_3 + 1,param_2[-1],param_1[6]);
      if ((uVar2 & 1) != 0) {
        uVar20 = param_1[1];
        uVar19 = *param_1;
        uVar13 = param_1[3];
        uVar12 = param_1[2];
        uVar5 = param_1[6];
        uVar22 = param_2[-2];
        uVar21 = param_2[-3];
        uVar15 = param_2[-4];
        uVar14 = param_2[-5];
        uVar17 = param_2[-6];
        uVar16 = param_2[-7];
        uVar18 = param_1[5];
        uVar6 = param_1[4];
        param_1[6] = param_2[-1];
        uVar1 = 1;
        param_1[3] = uVar15;
        param_1[2] = uVar14;
        param_1[5] = uVar22;
        param_1[4] = uVar21;
        param_1[1] = uVar17;
        *param_1 = uVar16;
        param_2[-6] = uVar20;
        param_2[-7] = uVar19;
        param_2[-4] = uVar13;
        param_2[-5] = uVar12;
        param_2[-2] = uVar18;
        param_2[-3] = uVar6;
        param_2[-1] = uVar5;
        goto LAB_03fc7978;
      }
    }
  }
  else if (uVar2 == 3) {
    FUN_03fc72bc(param_1,param_1 + 7,param_2 + -7,param_3);
  }
  else if (uVar2 == 4) {
    FUN_03fc79b0(param_1,param_1 + 7,param_1 + 0xe,param_2 + -7,param_3);
  }
  else {
    if (uVar2 != 5) goto LAB_03fc787c;
    FUN_03fc7abc(param_1,param_1 + 7,param_1 + 0xe,param_1 + 0x15,param_2 + -7,param_3);
  }
  uVar1 = 1;
LAB_03fc7978:
  return uVar1 & 1;
}

