// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingStationLayout$$Bind
// address: 0x44dfbc0
// body: available
// range: 0x44dfbc0-0x44e017f inclusive
// range: 0x44e01a8-0x44e01df inclusive
// range: 0x44e01e4-0x44e01e7 inclusive
// range: 0x44e01ec-0x44e01ef inclusive
// range: 0x44e01f4-0x44e01f7 inclusive
// range: 0x44e01fc-0x44e0203 inclusive
// range: 0x44e027c-0x44e035b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e01dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e01e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e01ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e01f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e0200 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e034c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e0354 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e0358 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044e0178) */
/* WARNING: Removing unreachable block (ram,0x044e017c) */
/* WARNING: Removing unreachable block (ram,0x044e01fc) */
/* WARNING: Removing unreachable block (ram,0x044e01d0) */
/* WARNING: Removing unreachable block (ram,0x044e0350) */

void CookOrder_Cooking_Implement_CookingStationLayout__Bind
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09518356 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c92a8);
    FUN_03f5c2a4(&DAT_091ca968);
    FUN_03f5c2a4(&DAT_091ca6b0);
    FUN_03f5c2a4(&DAT_091cb598);
    FUN_03f5c2a4(&DAT_091a48e0);
    FUN_03f5c2a4(&DAT_091a3db8);
    FUN_03f5c2a4(&DAT_091a3dc0);
    FUN_03f5c2a4(&DAT_091a48e8);
    FUN_03f5c2a4(&DAT_091a3dc8);
    FUN_03f5c2a4(&DAT_091a48f0);
    FUN_03f5c2a4(&DAT_09178e78);
    FUN_03f5c2a4(&DAT_09178f00);
    FUN_03f5c2a4(&DAT_09178f08);
    FUN_03f5c2a4(&DAT_09178b08);
    FUN_03f5c2a4(&DAT_091a8800);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a8808);
    FUN_03f5c2a4(&DAT_091a8260);
    FUN_03f5c2a4(&DAT_091a87f8);
    FUN_03f5c2a4(&DAT_09179f20);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_091b0fd0);
    FUN_03f5c2a4(&DAT_091af280);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e8050);
    FUN_03f5c2a4(&DAT_091e8058);
    FUN_03f5c2a4(&DAT_091e8060);
    FUN_03f5c2a4(&DAT_091e8070);
    FUN_03f5c2a4(&DAT_0918f778);
    FUN_03f5c2a4(&DAT_0918f770);
    DAT_09518356 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918f778);
  System_Object___ctor(lVar3,0);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
    if (*(int *)(DAT_0918f770 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = *(undefined8 **)(DAT_0918f770 + 0xb8);
    lVar10 = puVar7[1];
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918f770 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar7 = *(undefined8 **)(DAT_0918f770 + 0xb8);
      }
      uVar11 = *puVar7;
      lVar10 = thunk_FUN_03f9944c(DAT_09178b08);
      FUN_05324070(lVar10,uVar11,DAT_091e8050,0);
      plVar4 = (long *)(*(long *)(DAT_0918f770 + 0xb8) + 8);
      *plVar4 = lVar10;
      thunk_FUN_03f5d7b8(plVar4,lVar10);
    }
    uVar9 = FUN_04afac50(uVar9,lVar10,DAT_091ca968);
    if (*(int *)(DAT_0918f770 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f770);
    }
    puVar7 = *(undefined8 **)(DAT_0918f770 + 0xb8);
    lVar10 = puVar7[2];
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918f770 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f770);
        puVar7 = *(undefined8 **)(DAT_0918f770 + 0xb8);
      }
      uVar11 = *puVar7;
      lVar10 = thunk_FUN_03f9944c(DAT_09178f00);
      FUN_05322d94(lVar10,uVar11,DAT_091e8058,0);
      plVar4 = (long *)(*(long *)(DAT_0918f770 + 0xb8) + 0x10);
      *plVar4 = lVar10;
      thunk_FUN_03f5d7b8(plVar4,lVar10);
    }
    uVar9 = FUN_04b0cafc(uVar9,lVar10,DAT_091cb598);
    if (*(int *)(DAT_0918f770 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f770);
    }
    puVar7 = *(undefined8 **)(DAT_0918f770 + 0xb8);
    lVar10 = puVar7[3];
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918f770 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f770);
        puVar7 = *(undefined8 **)(DAT_0918f770 + 0xb8);
      }
      uVar11 = *puVar7;
      lVar10 = thunk_FUN_03f9944c(DAT_09178f08);
      FUN_05324070(lVar10,uVar11,DAT_091e8060,0);
      plVar4 = (long *)(*(long *)(DAT_0918f770 + 0xb8) + 0x18);
      *plVar4 = lVar10;
      thunk_FUN_03f5d7b8(plVar4,lVar10);
    }
    uVar9 = FUN_04af8044(uVar9,lVar10,DAT_091ca6b0);
    lVar10 = thunk_FUN_03f9944c(DAT_09179e10);
    FUN_053eb620(lVar10,uVar9,DAT_091a8260);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x10);
      *plVar4 = lVar10;
      thunk_FUN_03f5d7b8(plVar4,lVar10);
      lVar10 = thunk_FUN_03f9944c(DAT_09179f20);
      FUN_053eb530(lVar10,DAT_091a87f8);
      do {
        if ((*(long *)(param_2 + 0x10) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x80), lVar5 == 0)) goto LAB_044e034c;
        FUN_057e185c(&local_b8,lVar5,DAT_091af280);
        uVar2 = 0;
        local_70 = local_a8;
        puStack_78 = puStack_b0;
        local_80 = local_b8;
        while (uVar6 = FUN_071bd28c(&local_80,DAT_091a3dc0), lVar5 = local_70, (uVar6 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *(long *)(lVar3 + 0x18);
          uVar9 = *(undefined8 *)(local_70 + 0x20);
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_03f9944c(DAT_09178e78);
            FUN_05322d94(lVar12,lVar3,DAT_091e8070,0);
            *(long *)(lVar3 + 0x18) = lVar12;
            thunk_FUN_03f5d7b8(lVar3 + 0x18,lVar12);
          }
          uVar6 = FUN_04ab300c(uVar9,lVar12,DAT_091c92a8);
          if ((uVar6 & 1) != 0) {
            if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar1 = FUN_053ec72c(*plVar4,*(undefined8 *)(lVar5 + 0x18),DAT_091a8268);
            uVar2 = uVar2 | uVar1 & 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053ec72c(lVar10,*(undefined8 *)(lVar5 + 0x10),DAT_091a8800);
            if (*(long *)(lVar5 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(&local_b8,*(long *)(lVar5 + 0x40),DAT_091b0fd0);
            local_90 = local_a8;
            puStack_98 = puStack_b0;
            local_a0 = local_b8;
            local_b8 = 0;
            puStack_b0 = &local_a0;
            while (uVar6 = FUN_071bd28c(&local_a0,DAT_091a48e8), (uVar6 & 1) != 0) {
              FUN_053ec72c(lVar10,local_90,DAT_091a8800);
            }
            FUN_071bd288(&local_a0,DAT_091a48e0);
          }
        }
        FUN_071bd288(&local_80,DAT_091a3db8);
      } while (uVar2 != 0);
      if (param_3 != 0) {
        if (0 < (int)*(ulong *)(param_3 + 0x18)) {
          uVar6 = 0;
          uVar8 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar3 = *(long *)(param_3 + 0x20 + uVar6 * 8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = UnityEngine_Object__op_Implicit(lVar3,0);
            if ((uVar8 & 1) != 0) {
              if (((lVar3 == 0) ||
                  (lVar5 = UnityEngine_Component__get_gameObject(lVar3,0), lVar10 == 0)) ||
                 (uVar2 = FUN_053ebc3c(lVar10,*(undefined8 *)(lVar3 + 0x38),DAT_091a8808),
                 lVar5 == 0)) goto LAB_044e034c;
              UnityEngine_GameObject__SetActive(lVar5,uVar2 & 1,0);
            }
            uVar8 = (ulong)*(uint *)(param_3 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)*(uint *)(param_3 + 0x18));
        }
        CookOrder_Cooking_Implement_CookingStationLayout__Relayout(param_1);
        return;
      }
    }
  }
LAB_044e034c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

