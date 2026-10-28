// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PlanWholeDishCapture
// address: 0x445f4cc
// body: available
// range: 0x445f4cc-0x445f9af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445f99c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445f9a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445f9a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445f9ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0445f9a8) */

long CookingGraph_CookingLevelSimulation__PlanWholeDishCapture
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  long **local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09518039 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9450);
    FUN_03f5c2a4(&DAT_091ca380);
    FUN_03f5c2a4(&DAT_09178728);
    FUN_03f5c2a4(&DAT_09178720);
    FUN_03f5c2a4(&DAT_091a8300);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a300);
    FUN_03f5c2a4(&DAT_0917a988);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b6bc8);
    FUN_03f5c2a4(&DAT_091e77d0);
    FUN_03f5c2a4(&DAT_091e7b30);
    FUN_03f5c2a4(&DAT_0918f340);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518039 = 1;
  }
  local_88 = (long *)0x0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f340);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass122_0___ctor(lVar1,0);
  lVar5 = DAT_0918f298;
  if (lVar1 != 0) {
    uVar2 = param_2[1];
    uVar9 = *param_2;
    *(undefined8 *)(lVar1 + 0x20) = param_2[2];
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    *(undefined8 *)(lVar1 + 0x10) = uVar9;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = DAT_0918f298;
    }
    puVar4 = *(undefined8 **)(lVar5 + 0xb8);
    lVar8 = puVar4[0x6d];
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar9 = *puVar4;
      lVar8 = thunk_FUN_03f9944c(DAT_09178728);
      FUN_05313174(lVar8,uVar9,DAT_091e77d0,0);
      lVar5 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar5 + 0x368) = lVar8;
      thunk_FUN_03f5d7b8(lVar5 + 0x368,lVar8);
    }
    uVar9 = FUN_04af0ac0(param_4,lVar8,DAT_091ca380);
    uVar2 = thunk_FUN_03f9944c(DAT_09179e20);
    FUN_053e1208(uVar2,uVar9,DAT_091a8300);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),uVar2);
    plVar3 = (long *)CookingGraph_CookingLevelSimulation__ServingCandidates(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a300) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0445f734;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a300,0);
LAB_0445f734:
      local_88 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      local_90 = &local_88;
      local_98 = 0;
      do {
        do {
          plVar3 = local_88;
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *local_88;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0445f7d0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185b10,0);
LAB_0445f7d0:
          uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          plVar3 = local_88;
          if ((uVar6 & 1) == 0) {
            lVar5 = 0;
            goto LAB_0445f908;
          }
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *local_88;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a988) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0445f834;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917a988,0);
LAB_0445f834:
          auVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          uStack_d8 = *(undefined8 *)(lVar1 + 0x18);
          local_e0 = *(undefined8 *)(lVar1 + 0x10);
          local_d0 = *(undefined8 *)(lVar1 + 0x20);
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          local_80 = local_e0;
          uStack_78 = uStack_d8;
          local_70 = local_d0;
          FUN_05c2bdcc(&local_c0,&local_80,DAT_091b6bc8);
          uStack_118 = param_3[1];
          local_120 = *param_3;
          local_110 = param_3[2];
          uStack_f8 = uStack_b8;
          local_100 = local_c0;
          uStack_e8 = uStack_a8;
          uStack_f0 = uStack_b0;
          lVar5 = CookingGraph_CookingLevelSimulation__PlanCapture
                            (param_1,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,&local_100,&local_120)
          ;
        } while (lVar5 == 0);
        lVar8 = *(long *)(lVar1 + 0x30);
        if (lVar8 == 0) {
          lVar8 = thunk_FUN_03f9944c(DAT_09178720);
          FUN_0531308c(lVar8,lVar1,DAT_091e7b30,0);
          *(long *)(lVar1 + 0x30) = lVar8;
          thunk_FUN_03f5d7b8(lVar1 + 0x30,lVar8);
        }
        uVar6 = FUN_04ab62d4(lVar5,lVar8,DAT_091c9450);
      } while ((uVar6 & 1) != 0);
LAB_0445f908:
      plVar3 = local_88;
      if (local_88 != (long *)0x0) {
        lVar1 = *local_88;
        uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185a58) {
              puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0445f968;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_0445f968:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

