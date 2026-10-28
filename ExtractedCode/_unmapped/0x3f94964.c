// rea decompile_all
// name: FUN_03f94964
// address: 0x3f94964
// body: available
// range: 0x3f94964-0x3f94d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f94b78 to 0x3f94d80 FUN_03f94d80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3f94bb0 to 0x3f951f8 FUN_03f951f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3f94c10 to 0x3f9515c FUN_03f9515c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3f94c78 to 0x3f952b8 FUN_03f952b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f94964(ulong *param_1,ulong *param_2,undefined8 param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
LAB_03f94990:
  puVar9 = param_2 + -2;
  do {
    param_4 = -param_4;
    puVar7 = param_1;
    do {
      param_1 = puVar7;
      param_4 = param_4 + 1;
      uVar5 = (long)param_2 - (long)param_1 >> 4;
      if ((long)uVar5 < 3) {
        if (uVar5 < 2) {
          return;
        }
        if (uVar5 == 2) {
          puVar9 = param_2 + -2;
          if (*param_1 <= *puVar9) {
            return;
          }
          uVar4 = param_1[1];
          uVar5 = *param_1;
          uVar10 = *puVar9;
          param_1[1] = param_2[-1];
          *param_1 = uVar10;
          param_2[-1] = uVar4;
          *puVar9 = uVar5;
          return;
        }
      }
      else {
        if (uVar5 == 3) {
          FUN_03f94d80(param_1,param_1 + 2,puVar9,param_3);
          return;
        }
        if (uVar5 == 4) {
          FUN_03f9515c(param_1,param_1 + 2,param_1 + 4,puVar9,param_3);
          return;
        }
        if (uVar5 == 5) {
          FUN_03f951f8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar9,param_3);
          return;
        }
      }
      if ((long)uVar5 < 0x18) {
        if ((param_5 & 1) == 0) {
          if (param_1 != param_2) {
            while (puVar9 = param_1, param_1 = puVar9 + 2, param_1 != param_2) {
              uVar5 = puVar9[2];
              if (uVar5 < *puVar9) {
                uVar4 = puVar9[3];
                puVar9 = param_1;
                do {
                  puVar7 = puVar9;
                  puVar7[1] = puVar7[-1];
                  *puVar7 = puVar7[-2];
                  puVar9 = puVar7 + -2;
                } while (uVar5 < puVar7[-4]);
                puVar7[-2] = uVar5;
                puVar7[-1] = uVar4;
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
        lVar6 = 0;
        puVar9 = param_1 + 2;
        puVar7 = param_1;
        goto LAB_03f94d18;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        FUN_03f952b8(param_1,param_2,param_2,param_3);
        return;
      }
      puVar7 = param_1 + (uVar5 >> 1) * 2;
      if (uVar5 < 0x81) {
        FUN_03f94d80(puVar7,param_1,puVar9,param_3);
      }
      else {
        FUN_03f94d80(param_1,puVar7,puVar9,param_3);
        puVar3 = param_1 + 2;
        FUN_03f94d80(puVar3,puVar7 + -2,param_2 + -4,param_3);
        FUN_03f94d80(param_1 + 4,puVar3 + (uVar5 >> 1) * 2,param_2 + -6,param_3);
        FUN_03f94d80(puVar7 + -2,puVar7,puVar3 + (uVar5 >> 1) * 2,param_3);
        uVar10 = param_1[1];
        uVar5 = *param_1;
        uVar4 = *puVar7;
        param_1[1] = puVar7[1];
        *param_1 = uVar4;
        puVar7[1] = uVar10;
        *puVar7 = uVar5;
      }
      if (((param_5 & 1) == 0) && (*param_1 <= param_1[-2])) {
        param_1 = (ulong *)FUN_03f94e3c(param_1,param_2,param_3);
        goto LAB_03f94b30;
      }
      auVar11 = FUN_03f94efc(param_1,param_2,param_3);
      puVar3 = auVar11._0_8_;
      if ((auVar11._8_8_ & 1) == 0) break;
      uVar5 = FUN_03f94fc8(param_1,puVar3,param_3);
      uVar4 = FUN_03f94fc8(puVar3 + 2,param_2,param_3);
      if ((uVar4 & 1) != 0) {
        param_4 = -param_4;
        param_2 = puVar3;
        if ((uVar5 & 1) != 0) {
          return;
        }
        goto LAB_03f94990;
      }
      puVar7 = puVar3 + 2;
    } while ((uVar5 & 1) != 0);
    FUN_03f94964(param_1,puVar3,param_3,-param_4,param_5 & 1);
    param_1 = puVar3 + 2;
LAB_03f94b30:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_03f94d18:
  puVar3 = puVar9;
  uVar5 = puVar7[2];
  if (uVar5 < *puVar7) {
    uVar4 = puVar7[3];
    lVar2 = lVar6;
    do {
      lVar8 = lVar2;
      puVar1 = (undefined8 *)((long)param_1 + lVar8);
      puVar1[3] = puVar1[1];
      puVar1[2] = *puVar1;
      puVar9 = param_1;
      if (lVar8 == 0) goto LAB_03f94d64;
      lVar2 = lVar8 + -0x10;
    } while (uVar5 < (ulong)puVar1[-2]);
    puVar9 = (ulong *)((long)param_1 + lVar8);
LAB_03f94d64:
    *puVar9 = uVar5;
    puVar9[1] = uVar4;
  }
  puVar9 = puVar3 + 2;
  lVar6 = lVar6 + 0x10;
  puVar7 = puVar3;
  if (puVar9 == param_2) {
    return;
  }
  goto LAB_03f94d18;
}

