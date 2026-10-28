// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$<RecoverDeadlock>g__Rotate|129_3
// address: 0x4461e20
// body: available
// range: 0x4461e20-0x446274b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x446246c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4462744 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4462748 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Rotate_129_3
          (long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_09518095 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d1b0);
    FUN_03f5c2a4(&DAT_0919d1a8);
    FUN_03f5c2a4(&DAT_0919d1b8);
    FUN_03f5c2a4(&DAT_0919d1c0);
    FUN_03f5c2a4(&DAT_0919d1c8);
    FUN_03f5c2a4(&DAT_09176318);
    FUN_03f5c2a4(&DAT_091c9358);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091c96c0);
    FUN_03f5c2a4(&DAT_091c96f0);
    FUN_03f5c2a4(&DAT_091c9920);
    FUN_03f5c2a4(&DAT_091c9ee0);
    FUN_03f5c2a4(&DAT_091c9f10);
    FUN_03f5c2a4(&DAT_091ca258);
    FUN_03f5c2a4(&DAT_091cab00);
    FUN_03f5c2a4(&DAT_091cabf8);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091caf58);
    FUN_03f5c2a4(&DAT_091a1f48);
    FUN_03f5c2a4(&DAT_091a1f50);
    FUN_03f5c2a4(&DAT_091a1f58);
    FUN_03f5c2a4(&DAT_091782a0);
    FUN_03f5c2a4(&DAT_09178008);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091aaa00);
    FUN_03f5c2a4(&DAT_091aa7d8);
    FUN_03f5c2a4(&DAT_091b2590);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_091b25a0);
    FUN_03f5c2a4(&DAT_091e7900);
    FUN_03f5c2a4(&DAT_091e7908);
    FUN_03f5c2a4(&DAT_091e7910);
    FUN_03f5c2a4(&DAT_091e7948);
    FUN_03f5c2a4(&DAT_091e7b58);
    FUN_03f5c2a4(&DAT_0918f350);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518095 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918f350);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass129_0___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_1);
    lVar5 = CookingGraph_CookingLevelSimulation__Instance(param_1,param_2,param_3,1);
    if (lVar5 == 0) {
      return 0;
    }
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar13 = puVar8[0x74];
    if (lVar13 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar14 = *puVar8;
      lVar13 = thunk_FUN_03f9944c(DAT_091782a0);
      FUN_0530d4d8(lVar13,uVar14,DAT_091e7948,0);
      lVar9 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar9 + 0x3a0) = lVar13;
      thunk_FUN_03f5d7b8(lVar9 + 0x3a0,lVar13);
    }
    iVar2 = FUN_04aea09c(lVar5,lVar13,DAT_091c9f10);
    if (iVar2 != param_3) {
      return 0;
    }
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar13 = puVar8[0x75];
    if (lVar13 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar14 = *puVar8;
      lVar13 = thunk_FUN_03f9944c(DAT_091782a0);
      FUN_0530d4d8(lVar13,uVar14,DAT_091e7900,0);
      lVar9 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar9 + 0x3a8) = lVar13;
      thunk_FUN_03f5d7b8(lVar9 + 0x3a8,lVar13);
    }
    uVar14 = FUN_04aee7c4(lVar5,lVar13,DAT_091ca258);
    uVar14 = FUN_04add3a4(uVar14,DAT_091c9920);
    lVar13 = FUN_04b0462c(uVar14,DAT_091cae30);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar9 = puVar8[0x76];
    if (lVar9 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar14 = *puVar8;
      lVar9 = thunk_FUN_03f9944c(DAT_091782a0);
      FUN_0530d4d8(lVar9,uVar14,DAT_091e7908,0);
      lVar10 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar10 + 0x3b0) = lVar9;
      thunk_FUN_03f5d7b8(lVar10 + 0x3b0,lVar9);
    }
    uVar3 = FUN_04ae9ee4(lVar5,lVar9,DAT_091c9ee0);
    *(undefined4 *)(lVar4 + 0x10) = uVar3;
    uVar14 = thunk_FUN_03f9944c(DAT_09178b98);
    FUN_05315754(uVar14,lVar4,DAT_091e7b58,0);
    uVar6 = FUN_04ab6928(lVar13,uVar14,DAT_091c9498);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    lVar9 = thunk_FUN_03f9944c(DAT_09176318);
    FUN_06eef750(lVar9,DAT_0919d1a8);
    lVar10 = *(long *)(param_1 + 0x80);
    if (lVar10 != 0) {
      iVar2 = 0;
      while (iVar2 < *(int *)(lVar10 + 0x18)) {
        iVar15 = 0;
        while( true ) {
          lVar10 = FUN_057e0998(lVar10,iVar2,DAT_091aa7e0);
          if (lVar10 == 0) goto LAB_0446246c;
          if (*(int *)(lVar10 + 0x18) <= iVar15) break;
          lVar10 = CookingGraph_CookingLevelSimulation__At(param_1,iVar2,iVar15);
          if ((lVar10 != 0) && (-1 < *(int *)(lVar10 + 0x20))) {
            uVar6 = FUN_04ad4a4c(lVar13,iVar2,DAT_091c96f0);
            if (((uVar6 & 1) == 0) || (*(int *)(lVar4 + 0x10) < iVar15)) {
              iVar1 = 0;
            }
            else {
              iVar1 = -param_3;
              if (iVar15 < param_3) {
                iVar1 = (*(int *)(lVar4 + 0x10) - param_3) + 1;
              }
            }
            if (lVar9 == 0) goto LAB_0446246c;
            uVar6 = FUN_06ef0700(lVar9,*(undefined4 *)(lVar10 + 0x20),DAT_0919d1b0);
            if ((uVar6 & 1) == 0) {
              uVar3 = *(undefined4 *)(lVar10 + 0x20);
              uVar14 = thunk_FUN_03f9944c(DAT_09179e18);
              FUN_053d6e00(uVar14,DAT_091a8298);
              FUN_06ef04f8(lVar9,uVar3,uVar14,DAT_0919d1c8);
            }
            lVar10 = FUN_06ef046c(lVar9,*(undefined4 *)(lVar10 + 0x20),DAT_0919d1b8);
            if (lVar10 == 0) goto LAB_0446246c;
            FUN_053d8048(lVar10,iVar1,DAT_091a82b0);
          }
          lVar10 = *(long *)(param_1 + 0x80);
          iVar15 = iVar15 + 1;
          if (lVar10 == 0) goto LAB_0446246c;
        }
        lVar10 = *(long *)(param_1 + 0x80);
        iVar2 = iVar2 + 1;
        if (lVar10 == 0) goto LAB_0446246c;
      }
      if (lVar9 != 0) {
        uVar14 = FUN_06ef0310(lVar9,DAT_0919d1c0);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar9 = puVar8[0x77];
        if (lVar9 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar12 = *puVar8;
          lVar9 = thunk_FUN_03f9944c(DAT_09178008);
          FUN_05322d94(lVar9,uVar12,DAT_091e7910,0);
          lVar10 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar10 + 0x3b8) = lVar9;
          thunk_FUN_03f5d7b8(lVar10 + 0x3b8,lVar9);
        }
        uVar6 = FUN_04ab6f28(uVar14,lVar9,DAT_091c9358);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        uVar14 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Copy_129_0(param_1);
        if (lVar13 != 0) {
          if ((int)*(ulong *)(lVar13 + 0x18) < 1) goto LAB_04462694;
          uVar6 = 0;
          uVar11 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
          goto LAB_0446258c;
        }
      }
    }
  }
LAB_0446246c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_0446258c:
  if (uVar11 <= uVar6) {
LAB_04462744:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (*(long *)(param_1 + 0x80) == 0) goto LAB_0446246c;
  uVar3 = *(undefined4 *)(lVar13 + uVar6 * 4 + 0x20);
  uVar12 = FUN_057e0998(*(long *)(param_1 + 0x80),uVar3,DAT_091aa7e0);
  uVar12 = FUN_04b020a8(uVar12,param_3,DAT_091cab00);
  uVar12 = FUN_04b02940(uVar12,(*(int *)(lVar4 + 0x10) - param_3) + 1,DAT_091cabf8);
  if (*(long *)(param_1 + 0x80) == 0) goto LAB_0446246c;
  uVar7 = FUN_057e0998(*(long *)(param_1 + 0x80),uVar3,DAT_091aa7e0);
  uVar7 = FUN_04b02940(uVar7,param_3,DAT_091cabf8);
  uVar12 = FUN_04ad43f0(uVar12,uVar7,DAT_091c96c0);
  lVar9 = FUN_04b049e4(uVar12,DAT_091caf58);
  if (-1 < *(int *)(lVar4 + 0x10)) {
    uVar16 = 0;
    do {
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar10 = FUN_057e0998(*(long *)(param_1 + 0x80),uVar3,DAT_091aa7e0), lVar9 == 0))
      goto LAB_0446246c;
      if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_04462744;
      if (lVar10 == 0) goto LAB_0446246c;
      FUN_057e09ec(lVar10,uVar16,*(undefined8 *)(lVar9 + (long)(int)uVar16 * 8 + 0x20),DAT_091b25a0)
      ;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 <= *(int *)(lVar4 + 0x10));
  }
  uVar11 = (ulong)*(uint *)(lVar13 + 0x18);
  uVar6 = uVar6 + 1;
  if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar6) {
LAB_04462694:
    FUN_056aec8c(&local_78,lVar5,DAT_091aaa00);
    while (uVar6 = FUN_07188168(&local_78,DAT_091a1f50), (uVar6 & 1) != 0) {
      lVar4 = CookingGraph_CookingLevelSimulation__At
                        (param_1,local_68 & 0xffffffff,local_68._4_4_ - param_3);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined4 *)(lVar4 + 0x24) = 0;
    }
    FUN_07188164(&local_78,DAT_091a1f48);
    uVar6 = CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Usable_129_2(param_1);
    if ((uVar6 & 1) == 0) {
      CookingGraph_CookingLevelSimulation__<RecoverDeadlock>g__Restore_129_1(param_1,uVar14);
      return 0;
    }
    return 1;
  }
  goto LAB_0446258c;
}

