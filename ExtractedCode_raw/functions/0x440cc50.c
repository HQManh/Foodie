// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$Init
// address: 0x440cc50
// body: available
// range: 0x440cc50-0x440d06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440d020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440d068 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot__Init
               (long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  
  if ((DAT_09517edf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ce0);
    FUN_03f5c2a4(&DAT_09182e50);
    FUN_03f5c2a4(&DAT_0919d5e8);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091b23c0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6ba0);
    FUN_03f5c2a4(&DAT_091b6b98);
    FUN_03f5c2a4(&DAT_091b6ba8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189a90);
    FUN_03f5c2a4(&DAT_091fce18);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09517edf = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(param_2,0,0);
  if ((uVar3 & 1) == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921f128);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c6408);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x90) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),param_2);
    if (param_3 == 0) {
      param_3 = thunk_FUN_03f9944c(DAT_09182ce0);
      CookingGraph_CookingBotFailureKnowledge___ctor();
    }
    plVar9 = (long *)(param_1 + 0xb8);
    *plVar9 = param_3;
    thunk_FUN_03f5d7b8(plVar9,param_3);
    if (*plVar9 != 0) {
      CookingGraph_CookingBotFailureKnowledge__PrepareForNextRun();
      lVar10 = *plVar9;
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x14) < 1) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0440d020;
          uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x6c);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Math__Max(1,uVar2,0);
          *(undefined4 *)(lVar10 + 0x50) = uVar2;
          lVar10 = *plVar9;
          if (lVar10 == 0) goto LAB_0440d020;
        }
        if (*(char *)(lVar10 + 0x38) == '\0') {
          *(undefined4 *)(param_1 + 0xa8) = 0;
          iVar6 = 0;
        }
        else {
          iVar1 = *(int *)(lVar10 + 0x3c);
          *(int *)(param_1 + 0xa8) = iVar1;
          iVar6 = 0;
          if (iVar1 != 7) {
            iVar6 = iVar1;
          }
        }
        *(int *)(param_1 + 0x84) = iVar6;
        *(undefined4 *)(param_1 + 0x88) = 0;
        if ((param_5 & 0xff) == 0) {
          if (param_4 == 0) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0440d020;
            puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x74);
          }
          else {
            if (*(long *)(param_4 + 0x40) == 0) goto LAB_0440d020;
            puVar7 = (undefined4 *)(*(long *)(param_4 + 0x40) + 0x5c);
          }
          uVar2 = *puVar7;
        }
        else {
          uVar2 = (undefined4)(param_5 >> 0x20);
        }
        *(undefined4 *)(param_1 + 0x98) = uVar2;
        *(undefined1 *)(param_1 + 0x80) = 0;
        uVar4 = CookingGraph_CookingEstimatorBot__EffectiveSettings(param_1);
        uVar8 = *(undefined8 *)(param_1 + 0xb8);
        local_48 = 0;
        FUN_05c30b18(&local_48,*(undefined4 *)(param_1 + 0x98),DAT_091b6b98);
        uVar5 = thunk_FUN_03f9944c(DAT_09184160);
        CookingGraph_EstimatorBotScorer___ctor(uVar5,param_2,uVar4,uVar8,param_4,local_48);
        *(undefined8 *)(param_1 + 0x30) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar5);
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x80);
          uVar4 = thunk_FUN_03f9944c(DAT_09189a90);
          System_Random___ctor(uVar4,uVar2,0);
          *(undefined8 *)(param_1 + 0x38) = uVar4;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar4);
          lVar10 = *(long *)(param_1 + 0x28);
          if (lVar10 != 0) {
            iVar6 = *(int *)(lVar10 + 0x18);
            *(undefined4 *)(lVar10 + 0x18) = 0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (0 < iVar6) {
              System_Array__Clear(*(undefined8 *)(lVar10 + 0x10),0,iVar6,0);
            }
            *(undefined8 *)(param_1 + 0xa0) = 0;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),0);
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined8 *)(param_1 + 0x50) = 0;
            *(undefined8 *)(param_1 + 0x40) = 1;
            *(undefined4 *)(param_1 + 0x58) = 0;
            *(undefined8 *)(param_1 + 0x5c) = 0xff800000ff800000;
            if (*(long *)(param_1 + 0x68) != 0) {
              FUN_053d74ac(*(long *)(param_1 + 0x68),DAT_091a82b8);
              if (*(long *)(param_1 + 0x70) != 0) {
                FUN_06ef0694(*(long *)(param_1 + 0x70),DAT_0919d5e8);
                local_60 = DAT_09182e50;
                local_50 = *(undefined4 *)(param_1 + 0x98);
                *(undefined1 *)(param_1 + 0xb0) = 0;
                uStack_58 = 0xffffffffffffffff;
                uVar4 = System_Enum__ToString(&local_60,0);
                uVar4 = System_String__Concat(DAT_091fce18,uVar4,DAT_091f8f68,0);
                CookingGraph_CookingEstimatorBot__Verbose(param_1,0,uVar4,0,0,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0440d020:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

