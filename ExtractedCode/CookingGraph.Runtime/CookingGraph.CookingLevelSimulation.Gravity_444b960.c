// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Gravity
// address: 0x444b960
// body: available
// range: 0x444b960-0x444be33 inclusive
// range: 0x444be38-0x444be3b inclusive
// range: 0x444be8c-0x444bee3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444be30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444be38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444bedc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444bee0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__Gravity(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int extraout_var;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09518037 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c66d8);
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_091c98c8);
    FUN_03f5c2a4(&DAT_091ca1f8);
    FUN_03f5c2a4(&DAT_091ca270);
    FUN_03f5c2a4(&DAT_091caf58);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_091781a8);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_091782b8);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091aa7d8);
    FUN_03f5c2a4(&DAT_091aaa10);
    FUN_03f5c2a4(&DAT_091aaa18);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_091b25a0);
    FUN_03f5c2a4(&DAT_091e7660);
    FUN_03f5c2a4(&DAT_091e7b20);
    FUN_03f5c2a4(&DAT_0918f330);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518037 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar9 = puVar5[0x6b];
  if (lVar9 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar11 = *puVar5;
    lVar9 = thunk_FUN_03f9944c(DAT_091781a8);
    FUN_053239c8(lVar9,uVar11,DAT_091e7660,0);
    lVar6 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar6 + 0x358) = lVar9;
    thunk_FUN_03f5d7b8(lVar6 + 0x358,lVar9);
  }
  uVar8 = FUN_04af6d6c(uVar8,lVar9,DAT_091ca1f8);
  uVar8 = FUN_04adcc84(uVar8,0,DAT_091c98c8);
  uVar2 = System_Linq_Enumerable__Max(uVar8,0);
  if (-1 < (int)uVar2) {
    iVar7 = 0;
    do {
      if (uVar2 < 2) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x80);
      uVar13 = 1;
      bVar1 = 0;
      do {
        if (lVar9 == 0) {
LAB_0444bedc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar10 = 0;
        while (iVar10 < *(int *)(lVar9 + 0x18)) {
          lVar9 = thunk_FUN_03f9944c(DAT_0918f330);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass119_0___ctor(lVar9,0);
          if (lVar9 == 0) goto LAB_0444bedc;
          *(long *)(lVar9 + 0x18) = param_1;
          thunk_FUN_03f5d7b8((long *)(lVar9 + 0x18),param_1);
          lVar6 = CookingGraph_CookingLevelSimulation__Instance(param_1,iVar10,uVar13,1);
          plVar12 = (long *)(lVar9 + 0x10);
          *plVar12 = lVar6;
          thunk_FUN_03f5d7b8(plVar12,lVar6);
          if (((*plVar12 != 0) &&
              (uVar8 = FUN_056addcc(*plVar12,0,DAT_091aaa18), iVar10 == (int)uVar8)) &&
             (uVar13 == (uint)((ulong)uVar8 >> 0x20))) {
            uVar11 = *(undefined8 *)(lVar9 + 0x10);
            uVar8 = thunk_FUN_03f9944c(DAT_09178290);
            FUN_0530cf38(uVar8,lVar9,DAT_091e7b20,0);
            uVar3 = FUN_04ab46c8(uVar11,uVar8,DAT_091c9390);
            if ((uVar3 & 1) == 0) {
              lVar9 = *plVar12;
              uVar8 = thunk_FUN_03f9944c(DAT_091782b8);
              FUN_0530d910(uVar8,param_1,DAT_091c66d8,0);
              uVar8 = FUN_04aeee0c(lVar9,uVar8,DAT_091ca270);
              lVar9 = FUN_04b049e4(uVar8,DAT_091caf58);
              if (*plVar12 == 0) goto LAB_0444bedc;
              FUN_056aec8c(&local_98,*plVar12,DAT_091aaa00);
              local_70 = local_88;
              puStack_78 = puStack_90;
              local_80 = local_98;
              local_98 = 0;
              puStack_90 = &local_80;
              while (uVar4 = FUN_07188168(&local_80,DAT_091a1f50), uVar3 = local_70,
                    (uVar4 & 1) != 0) {
                if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar6 = FUN_057e0998(*(long *)(param_1 + 0x80),local_70 & 0xffffffff,DAT_091aa7e0);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_057e09ec(lVar6,uVar3 >> 0x20,0,DAT_091b25a0);
              }
              FUN_07188164(&local_80,DAT_091a1f48);
              lVar6 = *plVar12;
              if (lVar6 == 0) goto LAB_0444bedc;
              uVar3 = 0;
              while ((long)uVar3 < (long)*(int *)(lVar6 + 0x18)) {
                lVar14 = *(long *)(param_1 + 0x80);
                uVar8 = FUN_056addcc(lVar6,uVar3 & 0xffffffff,DAT_091aaa18);
                if (lVar14 == 0) goto LAB_0444bedc;
                lVar6 = FUN_057e0998(lVar14,uVar8,DAT_091aa7e0);
                if ((*plVar12 == 0) ||
                   (FUN_056addcc(*plVar12,uVar3 & 0xffffffff,DAT_091aaa18), lVar9 == 0))
                goto LAB_0444bedc;
                if (*(uint *)(lVar9 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                if (lVar6 == 0) goto LAB_0444bedc;
                FUN_057e09ec(lVar6,extraout_var + -1,*(undefined8 *)(lVar9 + 0x20 + uVar3 * 8),
                             DAT_091b25a0);
                lVar6 = *plVar12;
                uVar3 = uVar3 + 1;
                if (lVar6 == 0) goto LAB_0444bedc;
              }
              bVar1 = 1;
            }
          }
          lVar9 = *(long *)(param_1 + 0x80);
          iVar10 = iVar10 + 1;
          if (lVar9 == 0) goto LAB_0444bedc;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar2);
      iVar7 = iVar7 + 1;
    } while ((bool)(bVar1 & iVar7 <= (int)uVar2));
  }
  return;
}

