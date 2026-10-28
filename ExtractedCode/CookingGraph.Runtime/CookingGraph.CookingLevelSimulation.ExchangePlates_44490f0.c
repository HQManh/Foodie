// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ExchangePlates
// address: 0x44490f0
// body: available
// range: 0x44490f0-0x44496b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44496a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44496a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44496b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ExchangePlates
               (long param_1,long param_2,undefined4 param_3,long param_4,undefined8 param_5,
               long param_6,undefined4 param_7,long param_8,undefined8 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09517ffa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c93c8);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_091abfe8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091e7650);
    FUN_03f5c2a4(&DAT_091e7658);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_092265c8);
    DAT_09517ffa = 1;
  }
  if (param_4 == 0) goto LAB_044496a4;
  uVar7 = *(undefined8 *)(param_4 + 0x30);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar9 = puVar5[0x10];
  if (lVar9 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar10 = *puVar5;
    lVar9 = thunk_FUN_03f9944c(DAT_09178468);
    FUN_05311eac(lVar9,uVar10,DAT_091e7650,0);
    plVar3 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x80);
    *plVar3 = lVar9;
    thunk_FUN_03f5d7b8(plVar3,lVar9);
  }
  uVar4 = FUN_04ab5cb8(uVar7,lVar9,DAT_091c93c8);
  if ((uVar4 & 1) != 0) {
    if (((*(long *)(param_1 + 0x178) == 0) || (param_2 == 0)) || (param_6 == 0)) goto LAB_044496a4;
    lVar8 = *(long *)(param_1 + 0x28);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    CookingGraph_CookingPlateMove___ctor
              (*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x80),&local_98,
               *(undefined4 *)(param_2 + 0x10),param_3,*(undefined4 *)(param_6 + 0x10),param_7,0);
    lVar9 = DAT_091abfe8;
    if (lVar8 == 0) goto LAB_044496a4;
    lVar6 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_044496a4;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar2 * 0x18;
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar6 + 0x30) = local_88;
      *(undefined8 *)(lVar6 + 0x28) = uStack_90;
      *(undefined8 *)(lVar6 + 0x20) = local_98;
    }
    else {
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      FUN_0573f6f0(lVar8,&local_80,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
  }
  if (param_8 == 0) goto LAB_044496a4;
  uVar7 = *(undefined8 *)(param_8 + 0x30);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar9 = puVar5[0x11];
  if (lVar9 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar10 = *puVar5;
    lVar9 = thunk_FUN_03f9944c(DAT_09178468);
    FUN_05311eac(lVar9,uVar10,DAT_091e7658,0);
    plVar3 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x88);
    *plVar3 = lVar9;
    thunk_FUN_03f5d7b8(plVar3,lVar9);
  }
  uVar4 = FUN_04ab5cb8(uVar7,lVar9,DAT_091c93c8);
  if ((uVar4 & 1) == 0) {
    if (param_2 == 0) goto LAB_044496a4;
  }
  else {
    if (((*(long *)(param_1 + 0x178) == 0) || (param_6 == 0)) || (param_2 == 0)) goto LAB_044496a4;
    lVar8 = *(long *)(param_1 + 0x28);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    CookingGraph_CookingPlateMove___ctor
              (*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x80),&local_98,
               *(undefined4 *)(param_6 + 0x10),param_7,*(undefined4 *)(param_2 + 0x10),param_3,0);
    lVar9 = DAT_091abfe8;
    if (lVar8 == 0) goto LAB_044496a4;
    lVar6 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_044496a4;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar2 * 0x18;
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar6 + 0x30) = local_88;
      *(undefined8 *)(lVar6 + 0x28) = uStack_90;
      *(undefined8 *)(lVar6 + 0x20) = local_98;
    }
    else {
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      FUN_0573f6f0(lVar8,&local_80,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
  }
  lVar9 = *(long *)(param_1 + 0x178);
  uVar7 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(param_2,0);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  CookingGraph_Execution_CookingEndpoint___ctor(&local_80,4,uVar7,param_3,0,0);
  if (param_6 != 0) {
    uVar7 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(param_6,0);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    CookingGraph_Execution_CookingEndpoint___ctor(&local_98,4,uVar7,param_7,0,0);
    if (lVar9 != 0) {
      uStack_a8 = uStack_78;
      local_b0 = local_80;
      local_a0 = local_70;
      uStack_c8 = uStack_90;
      local_d0 = local_98;
      local_c0 = local_88;
      CookingGraph_Execution_CookingExecution__ExchangePlates
                (lVar9,&local_b0,param_5,&local_d0,param_9,0);
      uVar1 = *(undefined4 *)(param_6 + 0x10);
      plVar3 = (long *)FUN_03f5c394(DAT_09180318,4);
      lVar9 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(param_2,0);
      if (plVar3 != (long *)0x0) {
        if ((lVar9 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0)) {
LAB_044496ac:
          uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,0);
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar9;
          thunk_FUN_03f5d7b8(plVar3 + 4,lVar9);
          local_d4 = param_3;
          lVar9 = FUN_03f5c42c(DAT_09535420,&local_d4);
          if ((lVar9 != 0) &&
             (lVar8 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
          goto LAB_044496ac;
          if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
            plVar3[5] = lVar9;
            thunk_FUN_03f5d7b8(plVar3 + 5,lVar9);
            lVar9 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(param_6,0);
            if ((lVar9 != 0) &&
               (lVar8 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
            goto LAB_044496ac;
            if (2 < *(uint *)(plVar3 + 3)) {
              plVar3[6] = lVar9;
              thunk_FUN_03f5d7b8(plVar3 + 6,lVar9);
              local_d8 = param_7;
              lVar9 = FUN_03f5c42c(DAT_09535420,&local_d8);
              if ((lVar9 != 0) &&
                 (lVar8 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
              goto LAB_044496ac;
              if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
                plVar3[7] = lVar9;
                thunk_FUN_03f5d7b8(plVar3 + 7,lVar9);
                uVar7 = System_String__Format(DAT_092265c8,plVar3,0);
                CookingGraph_CookingLevelSimulation__Emit(param_1,0x10,uVar1,uVar7,0);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_044496a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

