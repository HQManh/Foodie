// rea decompile_all
// name: FUN_03fc8128
// address: 0x3fc8128
// body: available
// range: 0x3fc8128-0x3fc85f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc8340 to 0x3fc85f8 FUN_03fc85f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc8378 to 0x3fc8bb8 FUN_03fc8bb8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc83dc to 0x3fc8b0c FUN_03fc8b0c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc8444 to 0x3fc8c94 FUN_03fc8c94 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc8128(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
LAB_03fc8154:
  puVar6 = param_2 + -2;
  do {
    param_4 = -param_4;
    puVar5 = param_1;
    do {
      param_1 = puVar5;
      param_4 = param_4 + 1;
      uVar4 = (long)param_2 - (long)param_1 >> 4;
      if ((long)uVar4 < 3) {
        if (uVar4 < 2) {
          return;
        }
        if (uVar4 == 2) {
          puVar6 = param_2 + -2;
          uVar4 = FUN_03f7bacc(param_3 + 1,*puVar6,*param_1);
          if ((uVar4 & 1) == 0) {
            return;
          }
          uVar10 = param_1[1];
          uVar9 = *param_1;
          uVar11 = *puVar6;
          param_1[1] = param_2[-1];
          *param_1 = uVar11;
          param_2[-1] = uVar10;
          *puVar6 = uVar9;
          return;
        }
      }
      else {
        if (uVar4 == 3) {
          FUN_03fc85f8(param_1,param_1 + 2,puVar6,param_3);
          return;
        }
        if (uVar4 == 4) {
          FUN_03fc8b0c(param_1,param_1 + 2,param_1 + 4,puVar6,param_3);
          return;
        }
        if (uVar4 == 5) {
          FUN_03fc8bb8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar6,param_3);
          return;
        }
      }
      if ((long)uVar4 < 0x18) {
        if ((param_5 & 1) == 0) {
          if (param_1 != param_2) {
            while (puVar6 = param_1 + 2, puVar6 != param_2) {
              uVar4 = FUN_03f7bacc(param_3 + 1,param_1[2],*param_1);
              param_1 = puVar6;
              if ((uVar4 & 1) != 0) {
                uVar10 = puVar6[1];
                uVar9 = *puVar6;
                do {
                  puVar5 = puVar6;
                  puVar5[1] = puVar5[-1];
                  *puVar5 = puVar5[-2];
                  uVar4 = FUN_03f7bacc(param_3 + 1,uVar9,puVar5[-4]);
                  puVar6 = puVar5 + -2;
                } while ((uVar4 & 1) != 0);
                puVar5[-1] = uVar10;
                puVar5[-2] = uVar9;
              }
            }
          }
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 2 == param_2) {
          return;
        }
        lVar7 = 0;
        puVar6 = param_1 + 2;
        puVar5 = param_1;
        goto LAB_03fc84c4;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        FUN_03fc8c94(param_1,param_2,param_2,param_3);
        return;
      }
      puVar5 = param_1 + (uVar4 >> 1) * 2;
      if (uVar4 < 0x81) {
        FUN_03fc85f8(puVar5,param_1,puVar6,param_3);
      }
      else {
        FUN_03fc85f8(param_1,puVar5,puVar6,param_3);
        puVar2 = param_1 + 2;
        FUN_03fc85f8(puVar2,puVar5 + -2,param_2 + -4,param_3);
        FUN_03fc85f8(param_1 + 4,puVar2 + (uVar4 >> 1) * 2,param_2 + -6,param_3);
        FUN_03fc85f8(puVar5 + -2,puVar5,puVar2 + (uVar4 >> 1) * 2,param_3);
        uVar11 = param_1[1];
        uVar9 = *param_1;
        uVar10 = *puVar5;
        param_1[1] = puVar5[1];
        *param_1 = uVar10;
        puVar5[1] = uVar11;
        *puVar5 = uVar9;
      }
      if (((param_5 & 1) == 0) &&
         (uVar4 = FUN_03f7bacc(param_3 + 1,param_1[-2],*param_1), (uVar4 & 1) == 0)) {
        param_1 = (undefined8 *)FUN_03fc86f4(param_1,param_2,param_3);
        goto LAB_03fc82f8;
      }
      auVar12 = FUN_03fc8818(param_1,param_2,param_3);
      puVar2 = auVar12._0_8_;
      if ((auVar12._8_8_ & 1) == 0) break;
      uVar4 = FUN_03fc8940(param_1,puVar2,param_3);
      uVar3 = FUN_03fc8940(puVar2 + 2,param_2,param_3);
      if ((uVar3 & 1) != 0) {
        param_4 = -param_4;
        param_2 = puVar2;
        if ((uVar4 & 1) != 0) {
          return;
        }
        goto LAB_03fc8154;
      }
      puVar5 = puVar2 + 2;
    } while ((uVar4 & 1) != 0);
    FUN_03fc8128(param_1,puVar2,param_3,-param_4,param_5 & 1);
    param_1 = puVar2 + 2;
LAB_03fc82f8:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_03fc84c4:
  puVar2 = puVar6;
  uVar4 = FUN_03f7bacc(param_3 + 1,puVar5[2],*puVar5);
  if ((uVar4 & 1) != 0) {
    uVar10 = puVar2[1];
    uVar9 = *puVar2;
    lVar1 = lVar7;
    do {
      lVar8 = lVar1;
      puVar6 = (undefined8 *)((long)param_1 + lVar8);
      puVar6[3] = puVar6[1];
      puVar6[2] = *puVar6;
      puVar5 = param_1;
      if (lVar8 == 0) goto LAB_03fc8524;
      uVar4 = FUN_03f7bacc(param_3 + 1,uVar9,puVar6[-2]);
      lVar1 = lVar8 + -0x10;
    } while ((uVar4 & 1) != 0);
    puVar5 = (undefined8 *)((long)param_1 + lVar8);
LAB_03fc8524:
    puVar5[1] = uVar10;
    *puVar5 = uVar9;
  }
  lVar7 = lVar7 + 0x10;
  puVar6 = puVar2 + 2;
  puVar5 = puVar2;
  if (puVar2 + 2 == param_2) {
    return;
  }
  goto LAB_03fc84c4;
}

