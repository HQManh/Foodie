// rea decompile_all
// name: FUN_03fc9064
// address: 0x3fc9064
// body: available
// range: 0x3fc9064-0x3fc94a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc9270 to 0x3fc94a4 FUN_03fc94a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc92a8 to 0x3fc995c FUN_03fc995c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc9308 to 0x3fc98b0 FUN_03fc98b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fc9370 to 0x3fc9a34 FUN_03fc9a34 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc9064(ulong *param_1,ulong *param_2,undefined8 param_3,long param_4,uint param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  undefined1 auVar11 [16];
  
LAB_03fc9090:
  puVar6 = param_2 + -2;
  do {
    param_4 = -param_4;
    puVar8 = param_1;
    do {
      param_1 = puVar8;
      param_4 = param_4 + 1;
      uVar4 = (long)param_2 - (long)param_1 >> 4;
      if ((long)uVar4 < 3) {
        if (uVar4 < 2) {
          return;
        }
        if (uVar4 == 2) {
          uVar4 = *param_1;
          if (uVar4 <= param_2[-2]) {
            return;
          }
          *param_1 = param_2[-2];
          param_2[-2] = uVar4;
          uVar4 = param_1[1];
          param_1[1] = param_2[-1];
          param_2[-1] = uVar4;
          return;
        }
      }
      else {
        if (uVar4 == 3) {
          FUN_03fc94a4(param_1,param_1 + 2,puVar6,param_3);
          return;
        }
        if (uVar4 == 4) {
          FUN_03fc98b0(param_1,param_1 + 2,param_1 + 4,puVar6,param_3);
          return;
        }
        if (uVar4 == 5) {
          FUN_03fc995c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar6,param_3);
          return;
        }
      }
      if ((long)uVar4 < 0x18) {
        if ((param_5 & 1) == 0) {
          if ((param_1 != param_2) && (param_1 + 2 != param_2)) {
            puVar6 = param_1 + 3;
            puVar8 = param_1 + 2;
            do {
              uVar4 = param_1[2];
              uVar3 = *param_1;
              if (uVar4 < uVar3) {
                uVar7 = param_1[3];
                puVar2 = puVar6;
                do {
                  puVar10 = puVar2;
                  puVar10[-1] = uVar3;
                  uVar3 = puVar10[-5];
                  *puVar10 = puVar10[-2];
                  puVar2 = puVar10 + -2;
                } while (uVar4 < uVar3);
                puVar10[-3] = uVar4;
                puVar10[-2] = uVar7;
              }
              puVar2 = puVar8 + 2;
              puVar6 = puVar6 + 2;
              param_1 = puVar8;
              puVar8 = puVar2;
            } while (puVar2 != param_2);
          }
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 2 == param_2) {
          return;
        }
        lVar5 = 0;
        puVar6 = param_1 + 2;
        puVar8 = param_1;
        goto LAB_03fc93d0;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        FUN_03fc9a34(param_1,param_2,param_2,param_3);
        return;
      }
      puVar8 = param_1 + (uVar4 >> 1) * 2;
      if (uVar4 < 0x81) {
        FUN_03fc94a4(puVar8,param_1,puVar6,param_3);
      }
      else {
        FUN_03fc94a4(param_1,puVar8,puVar6,param_3);
        puVar2 = param_1 + 2;
        FUN_03fc94a4(puVar2,puVar8 + -2,param_2 + -4,param_3);
        FUN_03fc94a4(param_1 + 4,puVar2 + (uVar4 >> 1) * 2,param_2 + -6,param_3);
        FUN_03fc94a4(puVar8 + -2,puVar8,puVar2 + (uVar4 >> 1) * 2,param_3);
        uVar4 = *puVar8;
        uVar7 = param_1[1];
        uVar3 = *param_1;
        param_1[1] = puVar8[1];
        *param_1 = uVar4;
        puVar8[1] = uVar7;
        *puVar8 = uVar3;
      }
      if (((param_5 & 1) == 0) && (*param_1 <= param_1[-2])) {
        param_1 = (ulong *)FUN_03fc957c(param_1,param_2,param_3);
        goto LAB_03fc9228;
      }
      auVar11 = FUN_03fc9648(param_1,param_2,param_3);
      puVar2 = auVar11._0_8_;
      if ((auVar11._8_8_ & 1) == 0) break;
      uVar4 = FUN_03fc971c(param_1,puVar2,param_3);
      uVar3 = FUN_03fc971c(puVar2 + 2,param_2,param_3);
      if ((uVar3 & 1) != 0) {
        param_4 = -param_4;
        param_2 = puVar2;
        if ((uVar4 & 1) != 0) {
          return;
        }
        goto LAB_03fc9090;
      }
      puVar8 = puVar2 + 2;
    } while ((uVar4 & 1) != 0);
    FUN_03fc9064(param_1,puVar2,param_3,-param_4,param_5 & 1);
    param_1 = puVar2 + 2;
LAB_03fc9228:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_03fc93d0:
  puVar2 = puVar6;
  uVar4 = puVar8[2];
  uVar3 = *puVar8;
  if (uVar4 < uVar3) {
    uVar7 = puVar8[3];
    lVar1 = lVar5;
    do {
      lVar9 = lVar1;
      *(ulong *)((long)param_1 + lVar9 + 0x10) = uVar3;
      *(undefined8 *)((long)param_1 + lVar9 + 0x18) = *(undefined8 *)((long)param_1 + lVar9 + 8);
      puVar6 = param_1;
      if (lVar9 == 0) goto LAB_03fc941c;
      uVar3 = *(ulong *)((long)param_1 + lVar9 + -0x10);
      lVar1 = lVar9 + -0x10;
    } while (uVar4 < uVar3);
    puVar6 = (ulong *)((long)param_1 + lVar9);
LAB_03fc941c:
    *puVar6 = uVar4;
    puVar6[1] = uVar7;
  }
  puVar6 = puVar2 + 2;
  lVar5 = lVar5 + 0x10;
  puVar8 = puVar2;
  if (puVar6 == param_2) {
    return;
  }
  goto LAB_03fc93d0;
}

