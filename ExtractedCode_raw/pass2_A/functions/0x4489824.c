// rea decompile_all
// name: CookingGraph.CookingLevelSession$$Advance
// address: 0x4489824
// body: available
// range: 0x4489824-0x4489b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4489adc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4489b24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSession__Advance
               (double param_1,double param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_09518106 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6d48);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091b6d68);
    FUN_03f5c2a4(&DAT_09220ff8);
    FUN_03f5c2a4(&DAT_0921be58);
    FUN_03f5c2a4(&DAT_09220b80);
    DAT_09518106 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*(char *)(param_4 + 0x29) != '\0') {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar9 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ff228);
    System_ObjectDisposedException___ctor(uVar9,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c6660);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar4);
  }
  CookingGraph_Execution_CookingExecution__RequireTime(param_1,DAT_0921be58,0);
  CookingGraph_Execution_CookingExecution__RequireTime(param_2,DAT_09220b80,0);
  CookingGraph_Execution_CookingExecution__RequireTime(param_3,DAT_09220ff8,0);
  uVar3 = CookingGraph_CookingLevelSession__get_IsHeld(param_4);
  auVar2._8_8_ = local_70._8_8_;
  auVar2._0_8_ = local_70._0_8_;
  auVar1._8_8_ = local_70._8_8_;
  auVar1._0_8_ = local_70._0_8_;
  auVar10._8_8_ = local_70._8_8_;
  auVar10._0_8_ = local_70._0_8_;
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_4 + 0x18);
    if (lVar5 == 0) {
LAB_04489adc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar5 + 0x38) == '\0') {
      if (*(char *)(param_4 + 0x28) != '\0') {
        local_70 = auVar10;
        if ((*(long *)(lVar5 + 0x180) == 0) ||
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x180) + 0x40), local_70 = auVar1, lVar5 == 0))
        goto LAB_04489adc;
        if (*(char *)(lVar5 + 0x58) == '\0') {
          return;
        }
      }
      local_70 = auVar2;
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_04489adc;
      CookingGraph_Execution_CookingFlightCoordinator__Pump(param_3,*(long *)(param_4 + 0x20),0);
      if (*(char *)(param_4 + 0x28) == '\0') {
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_04489adc;
        CookingGraph_CookingLevelSimulation__Reconcile(*(long *)(param_4 + 0x18),0);
        lVar5 = *(long *)(param_4 + 0x18);
        dVar8 = param_1;
        do {
          if (((lVar5 == 0) || (*(long *)(lVar5 + 0x180) == 0)) ||
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x180) + 0x40), lVar5 == 0)) goto LAB_04489adc;
          uVar9 = *(undefined8 *)(lVar5 + 0x50);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          dVar6 = (double)System_Math__Min(dVar8,uVar9,0);
          if (*(long *)(param_4 + 0x18) == 0) goto LAB_04489adc;
          auVar10 = CookingGraph_CookingLevelSimulation__NextCompletionIn
                              (*(long *)(param_4 + 0x18),0);
          local_70 = auVar10;
          if ((auVar10._0_8_ & 0xff) != 0) {
            dVar7 = (double)FUN_05c2dd40(local_70,DAT_091b6d68);
            if (1e-08 < dVar7) {
              uVar9 = FUN_05c2dd40(local_70,DAT_091b6d68);
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              dVar6 = (double)System_Math__Min(dVar6,uVar9,0);
            }
          }
          lVar5 = *(long *)(param_4 + 0x18);
          dVar7 = param_2;
          if (0.0 < param_1) {
            dVar7 = (dVar6 * param_2) / param_1;
          }
          local_80 = 0;
          uStack_78 = 0;
          FUN_05c2dd28(dVar7,&local_80,DAT_091b6d48);
          if (lVar5 == 0) goto LAB_04489adc;
          CookingGraph_CookingLevelSimulation__Advance(dVar6,lVar5,local_80,uStack_78,0);
          if (*(long *)(param_4 + 0x20) == 0) goto LAB_04489adc;
          CookingGraph_Execution_CookingFlightCoordinator__Pump(0,*(long *)(param_4 + 0x20),0);
          if (*(long *)(param_4 + 0x18) == 0) goto LAB_04489adc;
          CookingGraph_CookingLevelSimulation__Reconcile(*(long *)(param_4 + 0x18),0);
          dVar8 = dVar8 - dVar6;
          if (dVar8 <= 1e-08) {
            return;
          }
          lVar5 = *(long *)(param_4 + 0x18);
          if (lVar5 == 0) goto LAB_04489adc;
        } while (*(int *)(lVar5 + 0x188) == 0);
      }
    }
  }
  return;
}

