// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ShiftUpMoves
// address: 0x443cf6c
// body: available
// range: 0x443cf6c-0x443d4df inclusive
// range: 0x443d51c-0x443d9ff inclusive
// range: 0x443da40-0x443da6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x443d4dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443da64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443da68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingLevelSimulation__ShiftUpMoves(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09518013 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c67e0);
    FUN_03f5c2a4(&DAT_091c67e8);
    FUN_03f5c2a4(&DAT_091c67f0);
    FUN_03f5c2a4(&DAT_091c67f8);
    FUN_03f5c2a4(&DAT_091c6800);
    FUN_03f5c2a4(&DAT_091c6808);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_091c93a8);
    FUN_03f5c2a4(&DAT_091c98e0);
    FUN_03f5c2a4(&DAT_091c99f0);
    FUN_03f5c2a4(&DAT_091c9ee0);
    FUN_03f5c2a4(&DAT_091ca978);
    FUN_03f5c2a4(&DAT_091ca578);
    FUN_03f5c2a4(&DAT_091ca248);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cace8);
    FUN_03f5c2a4(&DAT_091cacf8);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_091782a0);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178288);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_09178b58);
    FUN_03f5c2a4(&DAT_09178338);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091aac30);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091aac28);
    FUN_03f5c2a4(&DAT_091aa9e8);
    FUN_03f5c2a4(&DAT_091aa7d8);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917bb90);
    FUN_03f5c2a4(&DAT_0917bb18);
    FUN_03f5c2a4(&DAT_091e79e8);
    FUN_03f5c2a4(&DAT_091e7ec8);
    FUN_03f5c2a4(&DAT_091e7ed0);
    FUN_03f5c2a4(&DAT_091e7ed8);
    FUN_03f5c2a4(&DAT_0918f5c8);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518013 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917bb90);
  FUN_056ce620(lVar3,DAT_091aac28);
  lVar4 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(lVar4,DAT_091a8298);
  lVar10 = *(long *)(param_1 + 0x80);
  if (lVar10 != 0) {
    iVar15 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar15) {
        return lVar3;
      }
      lVar10 = thunk_FUN_03f9944c(DAT_0918f5c8);
      CookingGraph_CookingLevelSimulation_<>c__DisplayClass67_0___ctor(lVar10,0);
      if (lVar10 == 0) break;
      *(long *)(lVar10 + 0x30) = param_1;
      thunk_FUN_03f5d7b8((long *)(lVar10 + 0x30),param_1);
      if (lVar4 == 0) break;
      uVar5 = FUN_053d750c(lVar4,iVar15,DAT_091a82c0);
      if ((uVar5 & 1) == 0) {
        lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
        FUN_05796918(lVar6,DAT_091adc70);
        lVar7 = DAT_091adc88;
        if (lVar6 == 0) break;
        lVar11 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar11 == 0) break;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(int *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = iVar15;
        }
        else {
          FUN_057971a8(lVar6,iVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        if (0 < *(int *)(lVar6 + 0x18)) {
          iVar12 = 0;
          do {
            iVar16 = 0;
            do {
              uVar2 = FUN_05796eb0(lVar6,iVar12,DAT_091add20);
              lVar7 = CookingGraph_CookingLevelSimulation__Instance(param_1,uVar2,iVar16,1);
              if (lVar7 == 0) {
                lVar7 = thunk_FUN_03f9944c(DAT_0917bb18);
                FUN_056ad834(lVar7,DAT_091aa9e8);
                if (lVar7 == 0) goto LAB_0443da64;
              }
              FUN_056aec8c(&local_b8,lVar7,DAT_091aaa00);
              local_80 = local_b8;
              local_b8 = 0;
              puStack_78 = puStack_b0;
              local_70 = local_a8;
              puStack_b0 = &local_80;
              while (uVar8 = FUN_07188168(&local_80,DAT_091a1f50), uVar5 = local_70,
                    (uVar8 & 1) != 0) {
                uVar2 = (undefined4)local_70;
                uVar8 = FUN_05797528(lVar6,local_70 & 0xffffffff,DAT_091adcb0);
                lVar7 = DAT_091adc88;
                if ((uVar8 & 1) == 0) {
                  lVar11 = *(long *)(lVar6 + 0x10);
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
                  }
                  else {
                    FUN_057971a8(lVar6,uVar5 & 0xffffffff,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
              FUN_07188164(&local_80,DAT_091a1f48);
              iVar16 = iVar16 + 1;
            } while (iVar16 != 3);
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(lVar6 + 0x18));
        }
        FUN_05797d74(&local_b8,lVar6,DAT_091adcc0);
        local_90 = local_a8;
        puStack_98 = puStack_b0;
        local_a0 = local_b8;
        local_b8 = 0;
        puStack_b0 = &local_a0;
        while (uVar5 = FUN_071ad7a4(&local_a0,DAT_091a34d8), (uVar5 & 1) != 0) {
          FUN_053d8048(lVar4,local_90 & 0xffffffff,DAT_091a82b0);
        }
        FUN_071ad7a0(&local_a0,DAT_091a34d0);
        uVar9 = thunk_FUN_03f9944c(DAT_09178b98);
        FUN_05315754(uVar9,param_1,DAT_091c67e0,0);
        uVar5 = FUN_04ab6928(lVar6,uVar9,DAT_091c9498);
        if ((uVar5 & 1) != 0) {
          uVar9 = thunk_FUN_03f9944c(DAT_09178b98);
          FUN_05315754(uVar9,param_1,DAT_091c67e8,0);
          uVar5 = FUN_04ab6928(lVar6,uVar9,DAT_091c9498);
          if ((uVar5 & 1) == 0) {
            uVar9 = thunk_FUN_03f9944c(DAT_09178b58);
            FUN_0531612c(uVar9,param_1,DAT_091c67f0,0);
            uVar9 = FUN_04afa780(lVar6,uVar9,DAT_091ca978);
            uVar9 = FUN_04add2ec(uVar9,DAT_091c98e0);
            uVar9 = FUN_04b04054(uVar9,DAT_091cace8);
            *(undefined8 *)(lVar10 + 0x18) = uVar9;
            thunk_FUN_03f5d7b8();
            uVar9 = thunk_FUN_03f9944c(DAT_09178bd0);
            FUN_05315cf4(uVar9,param_1,DAT_091c67f8,0);
            uVar9 = FUN_04af2d4c(lVar6,uVar9,DAT_091ca578);
            lVar7 = FUN_04b0462c(uVar9,DAT_091cae30);
            uVar9 = DAT_09178b98;
            if (lVar7 == 0) break;
            if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar7 + 0x20);
            uVar9 = thunk_FUN_03f9944c(uVar9);
            FUN_05315754(uVar9,lVar10,DAT_091e7ec8,0);
            uVar5 = FUN_04ab6928(lVar7,uVar9,DAT_091c9498);
            if ((uVar5 & 1) == 0) {
              uVar9 = thunk_FUN_03f9944c(DAT_09178b58);
              FUN_0531612c(uVar9,param_1,DAT_091c6800,0);
              uVar9 = FUN_04afa780(lVar6,uVar9,DAT_091ca978);
              uVar9 = FUN_04add2ec(uVar9,DAT_091c98e0);
              uVar9 = FUN_04b04054(uVar9,DAT_091cace8);
              puVar13 = (undefined8 *)(lVar10 + 0x28);
              *puVar13 = uVar9;
              thunk_FUN_03f5d7b8(puVar13,uVar9);
              uVar9 = FUN_04ade8c4(*puVar13,*(undefined8 *)(lVar10 + 0x18),DAT_091c99f0);
              lVar7 = FUN_04b04054(uVar9,DAT_091cace8);
              if (lVar7 == 0) break;
              if (*(long *)(lVar7 + 0x18) != 0) {
                uVar14 = *puVar13;
                uVar9 = thunk_FUN_03f9944c(DAT_09178290);
                FUN_0530cf38(uVar9,param_1,DAT_091c6808,0);
                uVar5 = FUN_04ab46c8(uVar14,uVar9,DAT_091c9390);
                if ((uVar5 & 1) == 0) {
                  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                  lVar6 = puVar13[0x34];
                  if (lVar6 == 0) {
                    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                      FUN_03f5c424();
                      puVar13 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                    }
                    uVar9 = *puVar13;
                    lVar6 = thunk_FUN_03f9944c(DAT_091782a0);
                    FUN_0530d4d8(lVar6,uVar9,DAT_091e79e8,0);
                    lVar11 = *(long *)(DAT_0918f298 + 0xb8);
                    *(long *)(lVar11 + 0x1a0) = lVar6;
                    thunk_FUN_03f5d7b8(lVar11 + 0x1a0,lVar6);
                  }
                  uVar2 = FUN_04ae9ee4(lVar7,lVar6,DAT_091c9ee0);
                  uVar14 = *(undefined8 *)(lVar10 + 0x28);
                  *(undefined4 *)(lVar10 + 0x20) = uVar2;
                  uVar9 = thunk_FUN_03f9944c(DAT_09178288);
                  FUN_0530cdc0(uVar9,lVar10,DAT_091e7ed0,0);
                  uVar9 = FUN_04aee17c(uVar14,uVar9,DAT_091ca248);
                  uVar9 = FUN_04b04164(uVar9,DAT_091cacf8);
                  uVar14 = thunk_FUN_03f9944c(DAT_09178338);
                  FUN_0530f8f0(uVar14,lVar10,DAT_091e7ed8,0);
                  uVar5 = FUN_04ab5314(uVar9,uVar14,DAT_091c93a8);
                  if ((uVar5 & 1) == 0) {
                    if (lVar3 == 0) break;
                    FUN_056cf104(lVar3,uVar9,DAT_091aac30);
                  }
                }
              }
            }
          }
        }
      }
      lVar10 = *(long *)(param_1 + 0x80);
      iVar15 = iVar15 + 1;
    } while (lVar10 != 0);
  }
LAB_0443da64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

