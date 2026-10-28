// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$IsVisiblyEligible
// address: 0x44195dc
// body: available
// range: 0x44195dc-0x4419a77 inclusive
// range: 0x4419ab8-0x4419b23 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4419b0c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419b10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419b14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419b18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419b20 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04419a44) */
/* WARNING: Removing unreachable block (ram,0x04419b1c) */
/* WARNING: Removing unreachable block (ram,0x04419b08) */

undefined4 CookingGraph_EstimatorBotScorer__IsVisiblyEligible(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517f1c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9c20);
    FUN_03f5c2a4(&DAT_091a23b0);
    FUN_03f5c2a4(&DAT_091a4580);
    FUN_03f5c2a4(&DAT_091a23b8);
    FUN_03f5c2a4(&DAT_091a4588);
    FUN_03f5c2a4(&DAT_091a4590);
    FUN_03f5c2a4(&DAT_091a23c0);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_091784d8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86d0);
    FUN_03f5c2a4(&DAT_091a86b0);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091ab560);
    FUN_03f5c2a4(&DAT_091ab568);
    FUN_03f5c2a4(&DAT_091ab570);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091e9c18);
    FUN_03f5c2a4(&DAT_091906d8);
    FUN_03f5c2a4(&DAT_091e9c20);
    FUN_03f5c2a4(&DAT_091906e0);
    DAT_09517f1c = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_091906d8);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 0x10);
    *plVar7 = param_1;
    thunk_FUN_03f5d7b8(plVar7,param_1);
    if (*plVar7 != 0) {
      iVar1 = *(int *)(*plVar7 + 0x10);
      if (-1 < iVar1) {
        if (param_2 == 0) goto LAB_04419b10;
        lVar3 = *(long *)(param_2 + 0x28);
        if ((((lVar3 != 0) && (iVar1 < *(int *)(lVar3 + 0x18))) &&
            (lVar3 = FUN_057e0998(lVar3,iVar1,DAT_091ab570), lVar3 != 0)) &&
           (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
          uVar4 = thunk_FUN_03f9944c(DAT_091784d8);
          FUN_05322d94(uVar4,lVar2,DAT_091e9c18,0);
          lVar2 = FUN_04ae5fd0(lVar3,uVar4,DAT_091c9c20);
          if (lVar2 != 0) {
            iVar1 = *(int *)(lVar2 + 0x28);
            if (*(int *)(DAT_09184160 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (iVar1 - 5U < 0xfffffffd) {
              lVar2 = *plVar7;
              if (*(int *)(DAT_09184160 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = CookingGraph_EstimatorBotScorer__ConsumedIds(lVar2);
              if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918b378);
              }
              if (DAT_09516ea3 == '\0') {
                FUN_03f5c2a4(&DAT_0918b378);
                DAT_09516ea3 = '\x01';
              }
              if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar9 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10);
              lVar2 = thunk_FUN_03f9944c(DAT_09179ee0);
              FUN_053eb66c(lVar2,uVar4,uVar9,DAT_091a86b0);
              if ((*plVar7 != 0) && (lVar2 != 0)) {
                FUN_053ec72c(lVar2,*(undefined8 *)(*plVar7 + 0x18),DAT_091a86b8);
                FUN_053ec0b0(&local_b8,lVar2,DAT_091a86d0);
                puStack_78 = puStack_b0;
                local_80 = local_b8;
                local_70 = local_a8;
                do {
                  uVar5 = FUN_071bb7b4(&local_80,DAT_091a4588);
                  if ((uVar5 & 1) == 0) {
                    uVar6 = 1;
                    goto LAB_04419aec;
                  }
                  lVar2 = thunk_FUN_03f9944c(DAT_091906e0);
                  System_Object___ctor(lVar2,0);
                  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  *(long *)(lVar2 + 0x10) = local_70;
                  thunk_FUN_03f5d7b8();
                  if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_057e185c(&local_b8,*(long *)(param_2 + 0x28),DAT_091ab560);
                  local_a0 = local_b8;
                  local_b8 = 0;
                  puStack_98 = puStack_b0;
                  local_90 = local_a8;
                  puStack_b0 = &local_a0;
                  do {
                    do {
                      uVar5 = FUN_071bd28c(&local_a0,DAT_091a23b8);
                      if ((uVar5 & 1) == 0) {
                        lVar3 = 0;
                        goto LAB_04419a28;
                      }
                    } while (local_90 == 0);
                    lVar8 = *(long *)(local_90 + 0x10);
                    lVar3 = 0;
                    if (lVar8 != 0) {
                      lVar3 = *(long *)(lVar2 + 0x18);
                      if (lVar3 == 0) {
                        lVar3 = thunk_FUN_03f9944c(DAT_091784d8);
                        FUN_05322d94(lVar3,lVar2,DAT_091e9c20,0);
                        *(long *)(lVar2 + 0x18) = lVar3;
                        thunk_FUN_03f5d7b8(lVar2 + 0x18,lVar3);
                      }
                      lVar3 = FUN_04ae5fd0(lVar8,lVar3,DAT_091c9c20);
                    }
                  } while (lVar3 == 0);
LAB_04419a28:
                  FUN_071bd288(&local_a0,DAT_091a23b0);
                  if (lVar3 == 0) break;
                  iVar1 = *(int *)(lVar3 + 0x28);
                  if (*(int *)(DAT_09184160 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                } while (2 < iVar1 - 2U);
                uVar6 = 0;
LAB_04419aec:
                FUN_071bb7b0(&local_80,DAT_091a4580);
                return uVar6;
              }
              goto LAB_04419b10;
            }
          }
        }
      }
      return 0;
    }
  }
LAB_04419b10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

