// rea decompile_all
// name: FUN_03fc6cfc
// address: 0x3fc6cfc
// body: available
// range: 0x3fc6cfc-0x3fc72bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc6f74 to 0x3fc72bc FUN_03fc72bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc6fac to 0x3fc7abc FUN_03fc7abc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc7048 to 0x3fc79b0 FUN_03fc79b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc70b0 to 0x3fc7c18 FUN_03fc7c18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc6cfc(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  undefined1 auVar22 [16];
  
LAB_03fc6d3c:
  puVar7 = param_2 + -7;
  do {
    param_4 = -param_4;
    puVar5 = param_1;
    do {
      param_1 = puVar5;
      param_4 = param_4 + 1;
      uVar3 = (long)param_2 - (long)param_1;
      uVar6 = ((long)uVar3 >> 3) * 0x6db6db6db6db6db7;
      if ((long)uVar6 < 3) {
        if (uVar6 < 2) {
          return;
        }
        if (uVar6 == 2) {
          uVar3 = FUN_03f7bacc(param_3 + 1,param_2[-1],param_1[6]);
          if ((uVar3 & 1) == 0) {
            return;
          }
          uVar20 = param_1[3];
          uVar18 = param_1[2];
          uVar12 = param_1[5];
          uVar10 = param_1[4];
          uVar4 = param_1[6];
          uVar16 = param_1[1];
          uVar14 = *param_1;
          uVar13 = param_2[-2];
          uVar11 = param_2[-3];
          uVar21 = param_2[-4];
          uVar19 = param_2[-5];
          uVar17 = param_2[-6];
          uVar15 = param_2[-7];
          param_1[6] = param_2[-1];
          param_1[3] = uVar21;
          param_1[2] = uVar19;
          param_1[5] = uVar13;
          param_1[4] = uVar11;
          param_1[1] = uVar17;
          *param_1 = uVar15;
          param_2[-1] = uVar4;
          param_2[-6] = uVar16;
          param_2[-7] = uVar14;
          param_2[-4] = uVar20;
          param_2[-5] = uVar18;
          param_2[-2] = uVar12;
          param_2[-3] = uVar10;
          return;
        }
      }
      else {
        if (uVar6 == 3) {
          FUN_03fc72bc(param_1,param_1 + 7,puVar7,param_3);
          return;
        }
        if (uVar6 == 4) {
          FUN_03fc79b0(param_1,param_1 + 7,param_1 + 0xe,puVar7,param_3);
          return;
        }
        if (uVar6 == 5) {
          FUN_03fc7abc(param_1,param_1 + 7,param_1 + 0xe,param_1 + 0x15,puVar7,param_3);
          return;
        }
      }
      if ((long)uVar3 < 0x540) {
        if ((param_5 & 1) == 0) {
          if (param_1 != param_2) {
            while (puVar7 = param_1, param_1 = puVar7 + 7, param_1 != param_2) {
              uVar3 = FUN_03f7bacc(param_3 + 1,puVar7[0xd],puVar7[6]);
              if ((uVar3 & 1) != 0) {
                uVar11 = param_1[1];
                uVar10 = *param_1;
                uVar13 = param_1[3];
                uVar12 = param_1[2];
                uVar15 = param_1[5];
                uVar14 = param_1[4];
                uVar4 = puVar7[0xd];
                puVar7 = param_1;
                do {
                  puVar5 = puVar7;
                  puVar5[1] = puVar5[-6];
                  *puVar5 = puVar5[-7];
                  puVar5[3] = puVar5[-4];
                  puVar5[2] = puVar5[-5];
                  puVar5[5] = puVar5[-2];
                  puVar5[4] = puVar5[-3];
                  puVar5[6] = puVar5[-1];
                  uVar3 = FUN_03f7bacc(param_3 + 1,uVar4,puVar5[-8]);
                  puVar7 = puVar5 + -7;
                } while ((uVar3 & 1) != 0);
                puVar5[-1] = uVar4;
                puVar5[-2] = uVar15;
                puVar5[-3] = uVar14;
                puVar5[-6] = uVar11;
                puVar5[-7] = uVar10;
                puVar5[-4] = uVar13;
                puVar5[-5] = uVar12;
              }
            }
          }
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 7 == param_2) {
          return;
        }
        lVar8 = 0;
        puVar7 = param_1 + 7;
        puVar5 = param_1;
        goto LAB_03fc7130;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        FUN_03fc7c18(param_1,param_2,param_2,param_3);
        return;
      }
      uVar6 = uVar6 >> 1;
      puVar5 = param_1 + uVar6 * 7;
      if (uVar3 < 0x1c01) {
        FUN_03fc72bc(puVar5,param_1,puVar7,param_3);
      }
      else {
        FUN_03fc72bc(param_1,puVar5,puVar7,param_3);
        puVar2 = param_1 + 7;
        FUN_03fc72bc(puVar2,param_1 + uVar6 * 7 + -7,param_2 + -0xe,param_3);
        FUN_03fc72bc(param_1 + 0xe,puVar2 + uVar6 * 7,param_2 + -0x15,param_3);
        FUN_03fc72bc(param_1 + uVar6 * 7 + -7,puVar5,puVar2 + uVar6 * 7,param_3);
        uVar20 = param_1[3];
        uVar18 = param_1[2];
        uVar12 = param_1[5];
        uVar10 = param_1[4];
        uVar4 = param_1[6];
        uVar16 = param_1[1];
        uVar14 = *param_1;
        uVar21 = puVar5[3];
        uVar19 = puVar5[2];
        uVar13 = puVar5[5];
        uVar11 = puVar5[4];
        uVar17 = puVar5[1];
        uVar15 = *puVar5;
        param_1[6] = puVar5[6];
        param_1[3] = uVar21;
        param_1[2] = uVar19;
        param_1[5] = uVar13;
        param_1[4] = uVar11;
        param_1[1] = uVar17;
        *param_1 = uVar15;
        puVar5[6] = uVar4;
        puVar5[3] = uVar20;
        puVar5[2] = uVar18;
        puVar5[5] = uVar12;
        puVar5[4] = uVar10;
        puVar5[1] = uVar16;
        *puVar5 = uVar14;
      }
      if (((param_5 & 1) == 0) &&
         (uVar3 = FUN_03f7bacc(param_3 + 1,param_1[-1],param_1[6]), (uVar3 & 1) == 0)) {
        param_1 = (undefined8 *)FUN_03fc745c(param_1,param_2,param_3);
        goto LAB_03fc6f2c;
      }
      auVar22 = FUN_03fc75f4(param_1,param_2,param_3);
      puVar2 = auVar22._0_8_;
      if ((auVar22._8_8_ & 1) == 0) break;
      uVar3 = FUN_03fc7784(param_1,puVar2,param_3);
      uVar6 = FUN_03fc7784(puVar2 + 7,param_2,param_3);
      if ((uVar6 & 1) != 0) {
        param_4 = -param_4;
        param_2 = puVar2;
        if ((uVar3 & 1) != 0) {
          return;
        }
        goto LAB_03fc6d3c;
      }
      puVar5 = puVar2 + 7;
    } while ((uVar3 & 1) != 0);
    FUN_03fc6cfc(param_1,puVar2,param_3,-param_4,param_5 & 1);
    param_1 = puVar2 + 7;
LAB_03fc6f2c:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_03fc7130:
  puVar2 = puVar7;
  uVar3 = FUN_03f7bacc(param_3 + 1,puVar5[0xd],puVar5[6]);
  if ((uVar3 & 1) != 0) {
    uVar11 = puVar2[1];
    uVar10 = *puVar2;
    uVar13 = puVar2[3];
    uVar12 = puVar2[2];
    uVar15 = puVar2[5];
    uVar14 = puVar2[4];
    uVar4 = puVar5[0xd];
    lVar1 = lVar8;
    do {
      lVar9 = lVar1;
      puVar7 = (undefined8 *)((long)param_1 + lVar9);
      puVar7[0xc] = puVar7[5];
      puVar7[0xb] = puVar7[4];
      puVar7[8] = puVar7[1];
      puVar7[7] = *puVar7;
      puVar7[10] = puVar7[3];
      puVar7[9] = puVar7[2];
      puVar7[0xd] = puVar7[6];
      puVar5 = param_1;
      if (lVar9 == 0) goto LAB_03fc71ac;
      uVar3 = FUN_03f7bacc(param_3 + 1,uVar4,puVar7[-1]);
      lVar1 = lVar9 + -0x38;
    } while ((uVar3 & 1) != 0);
    puVar5 = (undefined8 *)((long)param_1 + lVar9);
LAB_03fc71ac:
    puVar5[6] = uVar4;
    puVar5[5] = uVar15;
    puVar5[4] = uVar14;
    puVar5[1] = uVar11;
    *puVar5 = uVar10;
    puVar5[3] = uVar13;
    puVar5[2] = uVar12;
  }
  lVar8 = lVar8 + 0x38;
  puVar7 = puVar2 + 7;
  puVar5 = puVar2;
  if (puVar2 + 7 == param_2) {
    return;
  }
  goto LAB_03fc7130;
}

