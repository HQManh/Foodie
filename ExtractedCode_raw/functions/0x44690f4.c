// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PreferServingOutput
// address: 0x44690f4
// body: available
// range: 0x44690f4-0x4469357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4469334 to 0x445ab2c CookingGraph.CookingLevelSimulation$$PreferDirectServing (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4469350 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4469354 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation__PreferServingOutput
          (long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  if ((DAT_0951805b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c03a8);
    FUN_03f5c2a4(&DAT_091c9398);
    FUN_03f5c2a4(&DAT_091782f8);
    FUN_03f5c2a4(&DAT_09180970);
    FUN_03f5c2a4(&DAT_091e7ca8);
    FUN_03f5c2a4(&DAT_0918f448);
    DAT_0951805b = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f448);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass169_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    uVar5 = param_3[1];
    uVar4 = *param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_3[2];
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
    uVar5 = param_4[1];
    uVar4 = *param_4;
    *(undefined8 *)(lVar2 + 0x40) = param_4[2];
    *(undefined8 *)(lVar2 + 0x38) = uVar5;
    *(undefined8 *)(lVar2 + 0x30) = uVar4;
    thunk_FUN_03f5d7b8(lVar2 + 0x38,0);
    lVar3 = DAT_091c03a8;
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x58), lVar7 != 0)) {
      if (*(uint *)(lVar7 + 0x18) <= param_2) {
LAB_04469354:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(char *)(lVar7 + (int)param_2 + 0x20) == '\0') {
        return 0;
      }
      if (param_5 == 0) {
        lVar7 = *(long *)(DAT_091c03a8 + 0x38);
        if (lVar7 == 0) {
          FUN_03f95ac8(DAT_091c03a8);
          lVar7 = *(long *)(lVar3 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f95a6c();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
      }
      else {
        lVar3 = FUN_03f5c394(DAT_09180970,1);
        if (lVar3 == 0) goto LAB_04469350;
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_04469354;
        *(long *)(lVar3 + 0x20) = param_5;
        thunk_FUN_03f5d7b8((long *)(lVar3 + 0x20),param_5);
      }
      if ((*(long *)(param_1 + 0x180) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x180) + 0x40), lVar7 != 0)) {
        uVar1 = CookingGraph_Execution_CookingExecutionConfig__get_WholeDish(lVar7,0);
        if ((uVar1 & 1) != 0) {
          uVar4 = CookingGraph_CookingLevelSimulation__ServingCandidates(param_1);
          uVar5 = thunk_FUN_03f9944c(DAT_091782f8);
          FUN_0530e180(uVar5,lVar2,DAT_091e7ca8,0);
          uVar6 = FUN_04ab49c8(uVar4,uVar5,DAT_091c9398);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
        }
        uVar4 = CookingGraph_CookingLevelSimulation__PreferDirectServing
                          (param_1,param_2,lVar3,0,uVar1 & 1);
        return uVar4;
      }
    }
  }
LAB_04469350:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

